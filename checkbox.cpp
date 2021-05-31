#ifdef __APPLE__
#include <GLUT/freeglut.h>
#else
#include <GL/freeglut.h>
#endif
//#include <text.h>
#include "rect.hpp"
#include "checkbox.hpp"

Checkbox::Checkbox(float _locx, float _locy, float _zindex, bool _ischecked)
{
    new Rect(_locx, _locy, 0.06, 0.06, _zindex); //so bad
    if (_ischecked == true)
        glColor3f(0, 1, 0);
    else
        glColor3f(1, 0, 0);
    new Rect(_locx, _locy, 0.05, 0.05, _zindex);
    glColor3f(1, 1, 1);
}

void Checkbox::set_position(float _locx, float _locy)
{

}

void Checkbox::set_checked(bool _ischecked)
{

}