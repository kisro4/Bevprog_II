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
    string s = "A t�bla betelt";
    int nyertes = jm->nyertes();
    string z="A nyertes: ";
    string m="-es j�t�kos";
    if(nyertes!=0)
    {
        gout << move_to(210,30)<< color(255,10,32)<<text(z) <<text(to_string(nyertes))<< text(m);
    } else if(jm->telee())

    {
        gout << move_to(30,280)<< color(255,10,32)<<text(s);
    }
}

void Palya::process(genv::event& ev) {
}
