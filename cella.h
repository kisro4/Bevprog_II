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
       //bool ürese(); //igaz-üres, hamis-teli
       //bool kör(); //igaz-kör, hamis-x
       void process(genv::event& ev) override; //beáálítja a cellát

};


#endif // CELLA_H_INCLUDED
