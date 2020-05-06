#include "cella.h"
#include "graphics.hpp"
using namespace genv;
Cella:: Cella (int x, int y, int sx, int sy): Widget( x,  y,  sx,  sy)
{
    ures=true;
    kor = false;


}

void Cella:: draw()
{
    gout << move_to(_x+2,_y+2)<< color(255,255,255) << box(_size_x-2, _size_y-2);
}

void Cella::process(genv::event& ev)
{
}

