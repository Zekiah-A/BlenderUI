#ifdef __APPLE__
#include <GLUT/freeglut.h>
#else
#include <GL/freeglut.h>
#endif
#include <string.h>
#include <stdio.h>
#include "rect.hpp"

Rect::Rect(float _locx, float _locy, float _sizex, float _sizey, float _zindex)
{
    float locx = _locx; float locy = _locy;
    float sizex = _sizex; float sizey = _sizey;
    float zindex = _zindex;

    float x_topleft = locx - (sizex / 2.0f);
	float y_topleft = locy - (sizey / 2.0f);
	
	float x_botleft = locx - (sizex / 2.0f);
	float y_botleft = locy + (sizey / 2.0f);
	
	float x_topright = locx + (sizex / 2.0f);
	float y_topright = locy - (sizey / 2.0f);

	float x_botright = locx + (sizex / 2.0f);
	float y_botright = locy + (sizey / 2.0f);

	glBegin(GL_QUADS);
	// Define vertices in counter-clockwise (CCW) order with normal pointing out
        glVertex3f(x_topleft, y_topleft, -zindex); //topleft
        glVertex3f(x_botleft, y_botleft, -zindex); //botleft
        glVertex3f(x_botright, y_botright, -zindex); //botright
        glVertex3f(x_topright, y_topright, -zindex); //topright
	glEnd();
}

void Rect::set_position(float _locx, float _locy)
{
    locx = _locx;
    locy = _locy;
}

void Rect::set_scale(float _sizex, float _sizey)
{
    sizex = _sizex;
    sizey = _sizey;
}