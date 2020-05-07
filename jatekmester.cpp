#include "jatekmester.h"

Jatekmester:: Jatekmester()
{
    for(int i=0; i<15;i++)
    {
        for(int j=0; j<15;j++)
        {
            tomb[i][j]= 0;
        }
    }
    jatekos = 1;
}

// 0: ures
// 'X': x    1-es jatekos
// 'O': kor  2-es jatekos

char Jatekmester:: valtoztat(int x, int y)
{
    char ch = tomb[y][x];
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
