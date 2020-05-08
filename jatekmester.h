#ifndef JATEKMESTER_H_INCLUDED
#define JATEKMESTER_H_INCLUDED

class Jatekmester
{
protected:
    char tomb[15][15];
    int jatekos;
    bool vege;
public:
    Jatekmester ();
    char valtoztat(int y, int x);
    char cellaallapot(int s, int o);
    int nyertes();
    bool telee();
    void restart();
};


#endif // JATEKMESTER_H_INCLUDED
