#ifndef CHECKBOX_HPP
#define CHECKBOX_HPP

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <string.h>
#include "rect.hpp"

class Checkbox
{
    public:
	Checkbox(float _locx, float _locy, float _zindex, bool _ischecked); //It can't tell that it's a constructor?

    void set_position(float _locx, float _locy);
    void set_checked(bool _ischecked);

    //TODO: these floats don't work
    float locx;
    float locy;
    float zindex;
    float ischecked;
};
#endif