#ifndef WIDGETS_HPP_INCLUDED
#define WIDGETS_HPP_INCLUDED

#include "graphics.hpp"
#include<vector>
#include <functional>

class Widget {
protected:
    int _x, _y, _size_x, _size_y;
    std::vector<Widget*> subWidgets;
    Widget* _toTrigger;
    std::string _globalName;
public:
    Widget(int x, int y, int sx, int sy, std::string globalName, Widget* toTrigger);
    virtual ~Widget();
    virtual bool is_selected(int mouse_x, int mouse_y);
    virtual void draw() = 0;
    virtual void process(genv::event& ev) = 0;
    virtual void share_event(genv::event& ev);
    virtual void draw_all();
    virtual void  toPerformOnTriggered(std::string who);
    std::string getName() const;
};

                                                                                                                                                                                                                                                                  //szeretnek pontlevonast kerni a beadandomra mert feltoltottem egy oktatasi segedletet sajat munka helyett :)

#endif // WIDGETS_HPP_INCLUDED
