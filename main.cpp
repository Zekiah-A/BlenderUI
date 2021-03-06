#ifdef __APPLE__
#include <GLUT/freeglut.h>
#else
#include <GL/freeglut.h>
#endif
#include <string>
#include "main.hpp"
#include "rect.hpp"
#include "checkbox.hpp"
#include "button.hpp"
#include "textlabel.hpp"

/*
void Main::draw_toggle(float locx, float locy)
{
	glColor3f(1, 1, 1);
	new Rect(0 + locx, locy, 0.1, 0.05, 1);
	glColor3f(0.5, 0.5, 0.5);
	new Rect(0 + locx, locy, 0.09, 0.04, 1);
	glColor3f(0.7, 0.7, 0.7);
	new Rect(-0.025 + locx, locy, 0.04, 0.04, 1);
}
*/

void Main::draw_textbox(float locx, float locy)
{       //outer design rect
	new Rect(locx, locy, 0.2, 0.05, 1);
	//inner text entry box
	glColor3f(0.7, 0.7, 0.7);
	new Rect(locx, locy, 0.19, 0.04, 1);	
}

void change_size(int w, int h)
{
	/*
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
	gluPerspective(45, ratioh, 1, 1000); //TODO: add back * ratiow

	// Get Back to the Modelview
	glMatrixMode(GL_MODELVIEW);
	*/

	//TODO: Fix 2d ortho projection
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluOrtho2D(0, w, h, 0);
	gluOrtho2D(0, 0, w, h);
	glMatrixMode(GL_MODELVIEW);
}

void render_screen(void) //TODO: Make a struct for vector2's
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	Rect *r1 = new Rect(0.5, 0.5, 0.5, 0.5, 1);
	Rect *r2 = new Rect(-0.5, -0.5, 0.5, 0.5, 1);
	Rect *r3 = new Rect(0.5, -0.5, 0.5, 0.5, 1);
	Rect *r4 = new Rect(-0.5, 0.5, 0.5, 0.5, 1);

	Button *b1 = new Button(0, 0.2, 1, true);
	Button *b2 = new Button(0.2, 0, 1, true);
	Button *b3 = new Button(0, -0.2, 1, true);
	Button *b4 = new Button(-0.2, 0, 1, true);
	 //hmm... wacky!
	Checkbox *c1 = new Checkbox(0.1, 0, 1, false);
	Checkbox *c2 = new Checkbox(-0.1, 0, 1, true);
	
	Textlabel *t1 = new Textlabel(0.0, 0.1, 1, "Hello World!");

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

/*
void reshape(int w, int h)
{
  glViewport(0, 0, w, h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0, w, h, 0);
  glMatrixMode(GL_MODELVIEW);
}
 */