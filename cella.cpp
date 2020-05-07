#include "cella.h"
#include "graphics.hpp"
#include <iostream>
#include <cmath>
# define M_PI           3.14159265358979323846
using namespace genv;
Cella:: Cella (int x, int y, int sx, int sy,int s,int o): Widget( x,  y,  sx,  sy)
{
    alakzat = URES;
    this->s= s;
    this->o= o;

    if (s == 4 &&  o == 5) {
        alakzat = KOR;
    }
    if (s == 2 &&  o == 10) {
        alakzat = X;
    }

}

void Cella:: draw()
{
    gout << move_to(_x,_y)<< color(140,72,0) << box(_size_x, _size_y);
    if(alakzat == KOR)
    {
        double sugar = _size_x/2-3;
        int kx= _x+ _size_x / 2;
        int ky= _y+ _size_y / 2;
        for(int i=0; i< 360; i++)
        {

            double rad = (M_PI / 180.0)*i;
            double x = kx + sugar*cos(rad);
            double y = ky + sugar*sin(rad);
            gout << move_to(x,y)<< color(20,72,0) << dot;
        }

    }
    if(alakzat == X)
    {
        gout << move_to(_x+3, _y+3)<< color(255,255,255) << line(_size_x-6, _size_y-6);
        gout << move_to(_x+_size_x-3, _y+3)<< color(255,255,255) << line(-(_size_x-6), _size_y-6);
    }
}

void Cella::process(genv::event& ev)
{

    if(ev.type == ev_mouse)
    {

    }
}

