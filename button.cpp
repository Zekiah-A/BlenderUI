
#ifdef __APPLE__
#include <GLUT/freeglut.h>
#else
#include <GL/freeglut.h>
#endif
#include "rect.hpp"
#include "button.hpp"

Button::Button(float _locx, float _locy, float _zindex, bool _ischecked)
{
	glColor3f(1, 1, 1);
	new Rect(_locx, _locy, 0.1, 0.05, _zindex);
	glColor3f(0.5, 0.5, 0.5);
	new Rect(_locx, _locy, 0.09, 0.04, _zindex);
	//TODO: Implement "ischecked" here
}

void Button::set_position(float _locx, float _locy)
{

}

void Button::set_checked(bool _ischecked)
{

}