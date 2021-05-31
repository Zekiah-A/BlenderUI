#ifndef RECT_HPP
#define RECT_HPP

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

class Rect
{
    public:
    Rect(float _locx, float _locy, float _sizex, float _sizey, float _zindex); //this ius supposed to be a constructor, not a class
    //~Rect();

    void set_position(float _locx, float _locy);
    void set_scale(float _sizex, float _sizey);
    //TODO: these floats don't work
    float locx;
    float locy;
    float sizex;
    float sizey;
    float zindex;
};
#endif