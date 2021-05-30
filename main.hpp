#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <string.h>
#include <stdio.h>
#include "rect.hpp"

class Main
{   /*
	public:
	void draw_rect(float locx, float locy, float sizex, float sizey, float zindex);
    */
	public:
	void draw_button(float locx, float locy);

	public:
	void draw_checkbox(float locx, float locy, bool ischecked);

	public:
	void draw_textbox(float locx, float locy);
};
Main program;

void change_size(int w, int h);

void render_screen();