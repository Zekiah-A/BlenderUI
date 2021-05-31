#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <string>
#include "rect.hpp"

class Textlabel
{
    public:
	Textlabel(float _locx, float _locy, float _zindex, std::string _text);

    void set_position(float _locx, float _locy);
    void set_text(std::string _text);

    //TODO: these floats don't work
    float locx;
    float locy;
    float zindex;
    float ischecked;
};
#endif