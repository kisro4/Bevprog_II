#include "widgets.hpp"
#include "graphics.hpp"
using namespace genv;

Widget::Widget(int x, int y, int sx, int sy)
               : _x(x), _y(y), _size_x(sx), _size_y(sy)
{
}

Widget::~Widget() {
}

bool  Widget::is_selected(int mouse_x, int mouse_y)
{
    return mouse_x>_x && mouse_x<_x+_size_x && mouse_y>_y && mouse_y<_y+_size_y;
}

void  Widget::draw_all()
{
    draw();
      for (Widget * w : subWidgets) {
            w->draw_all();
        }
}

void  Widget::share_event(genv::event& ev){
    int focus = -1;
        if (ev.type == ev_mouse && ev.button==btn_left) {
            for (size_t i=0;i<subWidgets.size();i++) {
                if (subWidgets[i]->is_selected(ev.pos_x, ev.pos_y)) {
                        focus = i;
                }
            }
        }
        if (focus!=-1) {
            subWidgets[focus]->share_event(ev);
            subWidgets[focus]->process(ev);
        }
        for (Widget * w : subWidgets) {
            w->draw_all();
        }
        gout << refresh;
}

void  Widget::toPerformOnTriggered(std::string who){0;}

std::string Widget::getName() const {
    return _globalName;
}






