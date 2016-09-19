#include <GL/glut.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
	glBegin(GL_POINTS);
		glVertex2f(0.7f, 0.7f);
		glVertex2f(0.9f, 0.9f);
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