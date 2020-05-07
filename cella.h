#ifndef CELLA_H_INCLUDED
#define CELLA_H_INCLUDED
#include "widgets.hpp"


class Cella : public Widget
{
protected:
    int s,o;
    enum ALAKZAT {
        URES,
        KOR,
        X
    };
    ALAKZAT alakzat;
    public:
       Cella(int x,int y,int sx, int sy, int s, int o);
       void draw() override;
       //bool urese(); //igaz-üres, hamis-teli
       //bool kor(); //igaz-kör, hamis-x
       void process(genv::event& ev) override; //beáálítja a cellát

};


#endif // CELLA_H_INCLUDED
