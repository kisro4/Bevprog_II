#include "palya.h"
#include "graphics.hpp"
#include "cella.h"
using namespace genv;

Palya::Palya (int x, int y): Widget(75, 75, 600, 600)
{
    sor=x;
    oszlop=y;


    for(int i= 0; i <15; i++)
    {
        for(int j= 0; j<15; j++){
            Cella * c = new Cella(75+i*30+1,75+j*30+1,29,29, i, j);
            subWidgets.push_back(c);
        }
    }


}
void Palya::draw()
{
    //oszlopok
    for(int i=75; i<= 525; i=i+30)
    {
        gout << move_to(i,75) << color(255,255,255) << dot;
        gout << line(0,525-75) << color(255,255,255) << dot;

    }
    //sorok
    for(int i=75; i<= 525; i+=30)
    {
        gout << move_to(75,i) << color(255,255,255) << dot ;
        gout << line(525-75,0) << color(255,255,255) << dot ;
    }
}

void Palya::process(genv::event& ev) {
}
