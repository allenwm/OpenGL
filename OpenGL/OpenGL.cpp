#include <GL/glut.h>
#include <math.h>


void drawCube(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(4, 0, 1.5, 0, 0, 0, 1, 1, 0);

	//�������������
	glColor3f(0, 1, 0);
	glBegin(GL_QUADS);
	//---1---
	glNormal3f(-1, 0, 0);//���õ�ķ�����
	glVertex3f(0.5, 0.5, 0.5);
	glVertex3f(0.5, -0.5, 0.5);
	glVertex3f(0.5, -0.5, -0.5);
	glVertex3f(0.5, 0.5, -0.5);
	//---2---
	glNormal3f(-1, 0, 0);
	glVertex3f(-0.5, 0.5, 0.5);
	glVertex3f(-0.5, -0.5, 0.5);
	glVertex3f(-0.5, -0.5, -0.5);
	glVertex3f(-0.5, 0.5, -0.5);
	//---3---
	glNormal3f(0, 1, 0);
	glVertex3f(0.5, 0.5, 0.5);
	glVertex3f(-0.5, 0.5, 0.5);
	glVertex3f(-0.5, 0.5, -0.5);
	glVertex3f(0.5, 0.5, -0.5);
	//---4---
	glNormal3f(0, -1, 0);
	glVertex3f(0.5, -0.5, 0.5);
	glVertex3f(-0.5, -0.5, 0.5);
	glVertex3f(-0.5, -0.5, -0.5);
	glVertex3f(0.5, -0.5, -0.5);
	//---5---
	glNormal3f(0, 0, 1);
	glVertex3f(0.5, 0.5, 0.5);
	glVertex3f(-0.5, 0.5, 0.5);
	glVertex3f(-0.5, -0.5, 0.5);
	glVertex3f(0.5, -0.5, 0.5);
	//---6---
	glNormal3f(0, 0, -1);
	glVertex3f(0.5, 0.5, 0.5);
	glVertex3f(-0.5, 0.5, 0.5);
	glVertex3f(-0.5, -0.5, 0.5);
	glVertex3f(0.5, -0.5, 0.5);
	glEnd();

	//draw
	glColor3f(0, 0, 0);
	glLineWidth(2.0f);
	//����������ı�
	glBegin(GL_LINES);
	//---1---
	glVertex3f(0.5, 0.5, 0.5);
	glVertex3f(-0.5, 0.5, 0.5);
	glVertex3f(-0.5, 0.5, 0.5);
	glVertex3f(-0.5, -0.5, 0.5);
	glVertex3f(-0.5, -0.5, 0.5);
	glVertex3f(0.5, -0.5, 0.5);
	glVertex3f(0.5, -0.5, 0.5);
	glVertex3f(0.5, 0.5, 0.5);
	//---2---
	glVertex3f(0.5, 0.5, -0.5);
	glVertex3f(-0.5, 0.5, -0.5);
	glVertex3f(-0.5, 0.5, -0.5);
	glVertex3f(-0.5, -0.5, -0.5);
	glVertex3f(-0.5, -0.5, -0.5);
	glVertex3f(0.5, -0.5, -0.5);
	glVertex3f(0.5, -0.5, -0.5);
	glVertex3f(0.5, 0.5, -0.5);
	//---3---
	glVertex3f(0.5, 0.5, 0.5);
	glVertex3f(0.5, -0.5, 0.5);
	glVertex3f(0.5, -0.5, 0.5);
	glVertex3f(0.5, -0.5, -0.5);
	glVertex3f(0.5, -0.5, -0.5);
	glVertex3f(0.5, 0.5, -0.5);
	glVertex3f(0.5, 0.5, -0.5);
	glVertex3f(0.5, 0.5, 0.5);
	//---4---
	glVertex3f(-0.5, 0.5, 0.5);
	glVertex3f(-0.5, -0.5, 0.5);
	glVertex3f(-0.5, -0.5, 0.5);
	glVertex3f(-0.5, -0.5, -0.5);
	glVertex3f(-0.5, -0.5, -0.5);
	glVertex3f(-0.5, 0.5, -0.5);
	glVertex3f(-0.5, 0.5, -0.5);
	glVertex3f(-0.5, 0.5, 0.5);
	glEnd();
	glFlush();
}

void threeD(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);//������ͼ���ڴ�С
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0, 1.0, -1.0, 1.0, 2.0, 10.0);
	glMatrixMode(GL_MODELVIEW);

}

int main(int argc, char *argv[]) {

	//��ʼ��GLUT library
	glutInit(&argc, argv);
	//�Դ��ڵĴ�С���г�ʼ��
	glutInitWindowSize(500, 500);
	// ���ô��ڳ��ֵ�λ��
	glutInitWindowPosition(400, 400);
	//��ʼ������չʾģʽ
	glutInitDisplayMode(GLUT_RGBA);
	glutCreateWindow("project of openGL"); 
		//Ϊ��ǰ�������ú����ص������ڻ�ͼ
	glutDisplayFunc(&drawCube);
	//���ڸı�ʱ�ĺ���
	glutReshapeFunc(&threeD);
	glutMainLoop();

	return 0;
}