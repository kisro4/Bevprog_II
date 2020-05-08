#include "jatekmester.h"
#include <iostream>
Jatekmester:: Jatekmester()
{
    restart();
}

void Jatekmester::restart()
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<15; j++)
        {
            tomb[i][j]= 0;
        }
    }
    jatekos = 1;
    vege = false;
}

// 0: ures
// 'X': x    1-es jatekos
// 'O': kor  2-es jatekos

char Jatekmester:: valtoztat(int y, int x)
{
    std::cout << "valtoztat: " << y << ", " << x << std::endl;
    char ch = tomb[y][x];
    if (vege) {
        return ch;
    }
    if(ch != 0 )
    {
        return ch;
    }
    if(jatekos == 1)
    {
        tomb[y][x] = 'X';
        jatekos = 2;
        return 'X';
    }
    if(jatekos == 2)
    {
        tomb[y][x] = 'O';
        jatekos = 1;
        return 'O';
    }

    return 0;
}
int Jatekmester::nyertes()
{
    for(int i= 0; i<15; i++)
    {
        for(int j= 0; j<10; j++)
        {
            int korMennyi = 0;
            int xMennyi = 0;
            for(int k=0; k<5; k++)
            {
                if(tomb[i][j+k] == 'O')
                {
                    korMennyi++;
                }
                if(tomb[i][j+k] == 'X')
                {
                    xMennyi++;
                }
            }
            if(korMennyi==5)
            {
                vege = true;
                return 2;
            }
             if(xMennyi==5)
            {
                vege = true;
                return 1;
            }

        }
    }
    return 0;
}
bool Jatekmester::telee()
{
    for(int i=0; i<15;i++)
    {
        for(int j=0; j<15;j++)
        {
            if(tomb[i][j]==0)
            {
                return false;
            }

        }
    }
    vege = true;
    return true;
}
char Jatekmester::cellaallapot(int s,int o)
{
    return tomb[s][o];
}


