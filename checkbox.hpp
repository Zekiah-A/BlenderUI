#ifndef CHECKBOX_HPP
#define CHECKBOX_HPP

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <string.h>

class Checkbox
{
    public:
	Checkbox(float locx, float locy, float zindex, bool ischecked);

    void set_position(float _locx, float _locy);
    void set_checked(bool _ischecked);

    //TODO: these floats don't work
    float locx;
    float locy;
    float zindex;
    float ischecked;
};
#endif