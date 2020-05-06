#include "graphics.hpp"
#include "palya.h"
#include "cella.h"
#include <vector>

using namespace std;
using namespace genv;

void event_loop(vector<Widget*>& widgets) {
    event ev;
    int focus = -1;
    while(gin >> ev ) {
        if (ev.type == ev_mouse && ev.button==btn_left) {
            for (size_t i=0;i<widgets.size();i++) {
                if (widgets[i]->is_selected(ev.pos_x, ev.pos_y)) {
                        //cout<<"aktiv: " + widgets[i]->_globalName + "\n";
                        focus = i;
                }
            }
        }
        if (focus!=-1) {
            if (ev.type != ev_mouse || widgets[focus]->is_selected(ev.pos_x, ev.pos_y)){
                widgets[focus]->share_event(ev);
                widgets[focus]->process(ev);
            }
        }
        for (Widget * w : widgets) {
            w->draw_all();
        }
        gout << refresh;
    }
}

int main()
{
    gout.open(600,600);
    event ev;
    Palya * tabla = new Palya(15,15);
    vector<Widget*> widgets;
    widgets.push_back(tabla);
    vector<Widget*> cellak;
    for(int i= 0; i <15; i++)
    {
    for(int j= 0; j<15; j++){
        Cella * c = new Cella(75+i*30,75+j*30,30,30);
        cellak.push_back(c);
        widgets.push_back(c);
    }
    }




    event_loop(widgets);

    return 0;
}
