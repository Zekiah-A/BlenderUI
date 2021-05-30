#ifndef RECT_HPP
#define RECT_HPP

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <string.h>

class Rect
{
    public:
    Rect(float _locx, float _locy, float _sizex, float _sizey, float _zindex); //this ius supposed to be a constructor, not a class
    //TODO: add destructor?
    void set_position(float _locx, float _locy);
    void set_scale(float _sizex, float _sizey);

    float locx;
    float locy;
    float sizex;
    float sizey;
    float zindex;
};
#endif