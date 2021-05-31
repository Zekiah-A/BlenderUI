#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <string>
#include "rect.hpp"
#include "textlabel.hpp"

Textlabel::Textlabel(float _locx, float _locy, float _zindex, std::string _text)
{
	new Rect(_locx, _locy, 0.2, 0.05, 1); //TODO: Implement bitmap text
	glColor3f(0.7, 0.7, 0.7);
	new Rect(_locx, _locy, 0.19, 0.04, 1);
}

void Textlabel::set_position(float _locx, float _locy)
{

}

void Textlabel::set_text(std::string _text)
{

}