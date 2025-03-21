#include <GL/glew.h>
#include <GL/glut.h>

void Display()
{
    glClearColor( 0, 0, 0, 1 );

    glClear( GL_COLOR_BUFFER_BIT );
    glBegin(GL_TRIANGLES);
    glColor3f( 1, 0, 0 ); // red
    glVertex2f( -0.8, -0.8 );
    glColor3f( 0, 1, 0 ); // green
    glVertex2f( 0.8, -0.8 );
    glColor3f( 0, 0, 1 ); // blue
    glVertex2f( 0, 0.9 );

    glEnd();

    glutSwapBuffers();
}


int main(int argc, char **argv )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("GL RGB Triangle");
    glutDisplayFunc(Display);

    glutMainLoop();

    return 0;
}
