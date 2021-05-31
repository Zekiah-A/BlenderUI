#ifndef BUTTON_HPP
#define BUTTON_CPP

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <string.h>
#include "rect.hpp"

class Button
{
    public:
	Button(float _locx, float _locy, float _zindex, bool _ischecked);

    void set_position(float _locx, float _locy);
    void set_checked(bool _ischecked);

    //TODO: these floats don't work
    float locx;
    float locy;
    float zindex;
    float ischecked;
};
#endif