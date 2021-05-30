#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <string.h>
#include <stdio.h>
#include "main.hpp"
#include "rect.hpp"

void Main::draw_button(float locx, float locy) //add position
{
	glColor3f(1, 1, 1);
	new Rect(0 + locx, locy, 0.1, 0.05, 1);
	glColor3f(0.5, 0.5, 0.5);
	new Rect(0 + locx, locy, 0.09, 0.04, 1);
	glColor3f(0.7, 0.7, 0.7);
	new Rect(-0.025 + locx, locy, 0.04, 0.04, 1);
}

void Main::draw_checkbox(float locx, float locy, bool ischecked)
{
	new Rect(locx, locy, 0.06, 0.06, 1);

	if (ischecked == true)
		glColor3f(0, 1, 0);
	else
		glColor3f(1, 0, 0);
	new Rect(locx, locy, 0.05, 0.05, 1);
	glColor3f(1, 1, 1);
}

void Main::draw_textbox(float locx, float locy)
{       //outer design rect
	new Rect(locx, locy, 0.2, 0.05, 1);
	//inner text entry box
	glColor3f(0.7, 0.7, 0.7);
	new Rect(locx, locy, 0.19, 0.04, 1);	
}

void change_size(int w, int h)
{
	// Prevent a divide by zero, when window is too short
	// (you cant make a window of zero width).
	if(h == 0)
		h = 1;
	float ratioh = 1.0* w / h;
    float ratiow = 1.0* h / w;

	// Use the Projection Matrix
	glMatrixMode(GL_PROJECTION);

    // Reset Matrix
	glLoadIdentity();

	// Set the viewport to be the entire window
	glViewport(0, 0, w, h);

	// Set the correct perspective.
	gluPerspective(45, ratioh /* * ratiow */, 1, 1000); //TODO: add back

	// Get Back to the Modelview
	glMatrixMode(GL_MODELVIEW);
}

void render_screen(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	Rect *r1 = new Rect(0.5, 0.5, 0.5, 0.5, 1);
	Rect *r2 = new Rect(-0.5, -0.5, 0.5, 0.5, 1);
	Rect *r3 = new Rect(0.5, -0.5, 0.5, 0.5, 1);
	Rect *r4 = new Rect(-0.5, 0.5, 0.5, 0.5, 1);

	program.draw_button(0, 0.2);
	program.draw_button(0.2, 0);
	program.draw_button(0, -0.2); //TODO: these need classes too
	program.draw_button(-0.2, 0);
	
	program.draw_checkbox(0.1, 0, false);
	program.draw_checkbox(-0.1, 0, true);
	
	program.draw_textbox(0, 0.1);

	glutSwapBuffers();
}

int main(int argc, char **argv)
{
    //init GLUT and create window
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(320,320);
    glutCreateWindow("BlendUI demo");

    //register callbacks
    glutDisplayFunc(render_screen);
	    
    //Resize items from window scaling
    glutReshapeFunc(change_size);

    // here is the idle func registration
    glutIdleFunc(render_screen);

    //enter GLUT event processing cycle
    glutMainLoop();
    return 1;
}

// gcc Main.cpp -o blender_ui -lGL -lGLU -lglut //TO COMPILE 
