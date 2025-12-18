////ShapTask
#pragma region Shaps
#include <windows.h>
#include<gl/gl.h>
#include<gl/glut.h>
void RenderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluOrtho2D(-300, 300, -300, 300);
	glBegin(GL_QUADS);
	glColor3f(0, 0, 1);
	glVertex2i(-50, 0);
	glColor3f(0, 1, 0);
	glVertex2i(0, 50);
	glColor3f(1, 1, 0);
	glVertex2i(50, 0);
	glColor3f(1, 0, 0);
	glVertex2i(0, -50);
	glEnd();

	// ----------------------------------------------------------------


	glPushMatrix();
	glTranslated(-150, 0, 0);
	glScaled(1.5, 1.5, 1);
	glBegin(GL_QUADS);
	glColor3f(0, 0, 1);
	glVertex2i(-50, 0);
	glColor3f(0, 1, 0);
	glVertex2i(0, 50);
	glColor3f(1, 1, 0);
	glVertex2i(50, 0);
	glColor3f(1, 0, 0);
	glVertex2i(0, -50);
	glEnd();
	glPopMatrix();

	// ----------------------------------------------------------------

	glPushMatrix();
	glTranslated(0, 150, 0); 
	glRotated(45, 0, 0, 1); 
	glBegin(GL_QUADS);
	glColor3f(0, 0, 1);
	glVertex2i(-50, 0);
	glColor3f(0, 1, 0);
	glVertex2i(0, 50);
	glColor3f(1, 1, 0);
	glVertex2i(50, 0);
	glColor3f(1, 0, 0);
	glVertex2i(0, -50);
	glEnd();
	glPopMatrix();

	glFlush();
}
void initgraphics(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutCreateWindow("Home-Task");
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(RenderScene);
	glutMainLoop();
}

#pragma region Main Method
int main(int argc, char* argv[]) {

	initgraphics(argc, argv);
	return 0;
}
#pragma endregion

#pragma endregion
