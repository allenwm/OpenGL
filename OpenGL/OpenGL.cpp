#include <GL/glut.h>
#include <math.h>
const int n = 20;
const GLfloat R = 0.5f;
const GLfloat Pi = 3.1415926536f;

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	//glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
	glBegin(GL_POLYGON);
	for (int i = 0; i<n; ++i)
		glVertex2f(R*cos(2 * Pi / n*i), R*sin(2 * Pi / n*i));
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