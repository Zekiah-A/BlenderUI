#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include "rect.hpp"

class Main
{
	public:
	void draw_textbox(float locx, float locy);
};

Main program;

void change_size(int w, int h);

void render_screen();