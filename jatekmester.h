#ifndef JATEKMESTER_H_INCLUDED
#define JATEKMESTER_H_INCLUDED
class Jatekmester
{
protected:
    char tomb[15][15];
    int jatekos;
public:
    Jatekmester ();
    char valtoztat(int x, int y);
};


#endif // JATEKMESTER_H_INCLUDED
