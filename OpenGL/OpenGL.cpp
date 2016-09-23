#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

const GLdouble Pi = 3.1415926536;

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glShadeModel(GL_SMOOTH);
	glShadeModel(GL_FLAT);
	glBegin(GL_TRIANGLE_FAN);
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(0.0f, 0.0f);
		for (int i = 0; i <= 8; i++)
		{
			glColor3f(i & 0x04, i & 0x02, i & 0x01);
			glVertex2f(cos(i * Pi / 4), sin(i * Pi / 4));
		}
	glEnd();
	glFlush();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("the first OpenGL program!");
	glutDisplayFunc(&display);
	glutMainLoop();

	return 0;
}