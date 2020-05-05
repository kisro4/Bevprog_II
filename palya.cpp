#include "palya.h"
#include "graphics.hpp"
using namespace genv;

Palya::Palya (int x, int y)
{
    sor=x;
    oszlop=y;
}
void Palya::rajzol()const
{
    //oszlopok
    for(int i=75; i<= 525; i=i+30)
    {
        for(int j=75; j<= 525; j++)
        {
            gout << move_to(0+i,0+j) << color(255,255,255) << dot;
        }

    }
    //sorok
    for(int i=75; i<= 525; i++)
    {
        for(int j=75; j<= 525; j=j+30)
        {

            gout << move_to(0+i,0+j) << color(255,255,255) << dot ;
        }

    }
    gout << refresh;

}
