#ifndef PALYA_H_INCLUDED
#define PALYA_H_INCLUDED
#include "widgets.hpp"
#include "jatekmester.h"
class Palya : public Widget
{
    protected:
    int sor,oszlop;
    Jatekmester* jm;

    public:
        Palya (int sor, int oszlop,Jatekmester* jm);
        void draw() override;
        void rarajzol();
        void jatekosok();
        void process(genv::event& ev) override;

};


#endif // PALYA_H_INCLUDED
