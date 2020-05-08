#ifndef CELLA_H_INCLUDED
#define CELLA_H_INCLUDED
#include "widgets.hpp"
#include "jatekmester.h"


class Cella : public Widget
{
protected:
    int s,o;
    Jatekmester* jm;

    public:
       Cella(int x,int y,int sx, int sy, int s, int o,Jatekmester* jm);
       void draw() override;
       //bool urese(); //igaz-�res, hamis-teli
       //bool kor(); //igaz-k�r, hamis-x
       void process(genv::event& ev) override; //be��l�tja a cell�t

};


#endif // CELLA_H_INCLUDED
