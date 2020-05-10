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
       void process(genv::event& ev) override;

};


#endif // CELLA_H_INCLUDED
