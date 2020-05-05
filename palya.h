#ifndef PALYA_H_INCLUDED
#define PALYA_H_INCLUDED
#include "widgets.hpp"
class Palya : public Widget
{
    protected:
    int sor,oszlop;

    public:
        Palya (int sor, int oszlop);
        void draw() override;
        void process(genv::event& ev) override;

};


#endif // PALYA_H_INCLUDED
