#include "palya.h"
#include "cella.h"
#include "jatekmester.h"
#include <vector>

#include <iostream>

using namespace std;
using namespace genv;

void event_loop(vector<Widget*>& widgets,Jatekmester * j,Palya * tabla) {
    event ev;
    int focus = -1;
    while(gin >> ev ) {
            tabla->jatekosok();
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
         if(ev.type=ev_key && ev.keycode==key_enter)
        {
            j->restart();
            tabla->rarajzol();


        }
        gout << refresh;
    }
}

int main()
{
    gout.open(600,600);
    event ev;
    Jatekmester * j = new Jatekmester();
    Palya * tabla = new Palya(15,15,j);
    vector<Widget*> widgets;
    widgets.push_back(tabla);

    event_loop(widgets,j,tabla);

    return 0;
}
