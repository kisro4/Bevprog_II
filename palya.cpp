#include "palya.h"
#include "graphics.hpp"
#include "cella.h"
#include <iostream>
using namespace genv;
using namespace std;

Palya::Palya (int x, int y, Jatekmester* jm): Widget(75, 75, 600, 600)
{
    sor=x;
    oszlop=y;
    this->jm= jm;

    for(int i= 0; i <15; i++)
    {
        for(int j= 0; j<15; j++){
            Cella * c = new Cella(75+i*30+1,75+j*30+1,29,29, j, i,jm);
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
    int nyertes = jm->nyertes();
    if(nyertes!=0)
    {
        cout <<nyertes;
    } else if(jm->telee())
    {
        cout <<"A tábla betelt";
    }
}

void Palya::process(genv::event& ev) {
}
