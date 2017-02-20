#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#define dx 10
#define dy 10
GLfloat R=0.0,G=0.0,B=0.0;
GLfloat X=0.0,Y=0.0,Z=0.0; 
void display()
{
GLint i,j;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(R,G,B);
for(i=0;i<300;i+=dx)

for(j=10;j<300;j+=dy)
{
glBegin(GL_LINE_LOOP);
glVertex2i(i,j);
glVertex2i(i+dx,j);
glVertex2i(i+dx,j+dy);
glVertex2i(i,j+dy);
glEnd();
}
glFlush();
}
int main(int argc, char **argv)
{
printf("enter R,G,B Color values");
scanf("%f%f%f",&R,&G,&B);
printf("enter X,Y,Z ClearColor values");
scanf("%f%f%f",&X,&Y,&Z);
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
glutInitWindowPosition(50,25);
glutInitWindowSize(500,250);
glutCreateWindow("rectangulur mesh");
glClearColor(X,Y,Z,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,500.0,0.0,500.0);
glutDisplayFunc(display);
glutMainLoop();
return 0;
} 
