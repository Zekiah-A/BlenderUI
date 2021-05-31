#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include "rect.hpp"

class Checkbox
{
	Checkbox::Checkbox(float locx, float locy, float zindex, bool ischecked)
    {
        new Rect(locx, locy, 0.06, 0.06, zindex);
        if (ischecked == true)
            glColor3f(0, 1, 0);
        else
            glColor3f(1, 0, 0);
        new Rect(locx, locy, 0.05, 0.05, zindex);
        glColor3f(1, 1, 1);
    }

    void Checkbox::set_position(float _locx, float _locy)
    {

    }

    void Checkbox::set_checked(bool _ischecked)
    {

    }
};