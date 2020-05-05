#include "graphics.hpp"
#include "palya.h"
using namespace genv;

int main()
{
    gout.open(600,600);
    event ev;
    Palya tabla (15,15);
    bool jatekban= true;
    gin.timer(40);

    while(gin >> ev && ev.keycode != key_escape)
    {
        if(jatekban)
        {
            tabla.rajzol();
            if (ev.type == ev_mouse && ev.button==btn_left)
            {
                for(int i=0; i<=15; i++)
                {
                    for(int j=0; j<=15; j++)
                    {
                        if(ev.pos_x >= i*30+75 && ev.pos_x <= (i+1)*30+75)
                        {

                        }
                    }
                }

                }
        }



    }
    return 0;
}
