#ifndef CELLA_H_INCLUDED
#define CELLA_H_INCLUDED
#include "widgets.hpp"


class Cella : public Widget
{
protected:
    bool ures, kor;
    public:
        Cella(int x,int y,int sx, int sy);
       void draw() override;
       //bool �rese(); //igaz-�res, hamis-teli
       //bool k�r(); //igaz-k�r, hamis-x
       void process(genv::event& ev) override; //be��l�tja a cell�t

};


#endif // CELLA_H_INCLUDED
