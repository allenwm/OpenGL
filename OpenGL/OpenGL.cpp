#include <GL/glut.h>
#include <math.h>
const GLfloat factor = 0.1f;

void display(void)
{
	GLfloat x;
	glClear(GL_COLOR_BUFFER_BIT);
	//glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
	glBegin(GL_LINES);
		glVertex2f(-1.0f, 0.0f);
		glVertex2f(1.0f, 0.0f);
		glVertex2f(0.0f, -1.0f);
		glVertex2f(-0.0f, 1.0f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	for ( x = -1.0f / factor; x < 1.0 / factor; x+=0.01f)
	{
		glVertex2f(x*factor, tan(x)*factor);
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