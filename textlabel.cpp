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
    glRasterPos2f(_locx, _locy);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 97);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 98);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 99);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 100);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 101);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 102);
}

void Textlabel::set_position(float _locx, float _locy)
{

}

void Textlabel::set_text(std::string _text)
{

}

/*  //TODO: Fonts and select font
void *font = GLUT_BITMAP_TIMES_ROMAN_24;
void *fonts[] =
{
  GLUT_BITMAP_9_BY_15,
  GLUT_BITMAP_TIMES_ROMAN_10,
  GLUT_BITMAP_TIMES_ROMAN_24
};

void output(int x, int y, char *string)
{
  int len, i;

  glRasterPos2f(x, y);              //TODO: use this?
  len = (int) strlen(string);
  for (i = 0; i < len; i++) {
    glutBitmapCharacter(font, string[i]);
  }
}

void display(void) //draws on scale and change
{
  glClear(GL_COLOR_BUFFER_BIT);
  output(0, 24, "This is written in a GLUT bitmap font.");
  output(100, 100, message);
  output(50, 145, "(positionpper-left origin)");
  output(200,50, "Testing");
  e++;
  if (e == 5)
    e = 1;
  selectColor(e);
  glutSwapBuffers();
}
*/