# include <windows.h>
#include <GL/glut.h>
static int a=0,a1=0;
static int a2=0,a3=0,a4=0;

double c=0,cc=0,x = 0,y=0,xx=0,yy=0,zz=0, Sx = 0, Sy = 0, Sz = 0, tx = 0, ty = 0, tz = 0;
double posx = 0, posy = 0, posz = 2, eyex = 0, eyey = 0, eyez = 0, upx = 0, upy = 1, upz = 0;

void special(int key, int, int) {
  switch (key) {

    case GLUT_KEY_LEFT: x = (x - 0.1);
                        if(x<-1)
                        {
                            x = 3.5;
                        }
                        break;
    case GLUT_KEY_RIGHT: x = (x + 0.1);
                        if(x>3.5)
                        {
                            x = x-3.5;
                        }
                        break;

   case GLUT_KEY_UP: y = (y + 0.1);
                        if(y>3.5)
                        {
                            y = y-3.5;
                        }
                        break;

    case GLUT_KEY_DOWN: y= (y - 0.1);
                        if(y<-1)
                        {
                            y = 3.5;
                        }
                        break;

       case GLUT_KEY_F2: xx = (xx + 0.1);
                        if(xx>3.5)
                        {
                            xx = xx-3.5;
                        }
                        break;

       case GLUT_KEY_F3: xx = (xx - 0.1);
                        if(xx<-1)
                        {
                            xx = 3.5;
                        }
                        break;






    case GLUT_KEY_F1: (a -= 5) %= 360; break;

    case GLUT_KEY_F4: posx += 0.5; break;
    case GLUT_KEY_F5: posx -= 0.5; break;
    case GLUT_KEY_F6: posy += 0.5; break;
    case GLUT_KEY_F7: posy -= 0.5; break;
    case GLUT_KEY_F8: posz += 0.5; break;
    case GLUT_KEY_F9: posz -= 0.5; break;

    case GLUT_KEY_F10: (a2 = 20) %= 360; break;
    case GLUT_KEY_F11: (a2 = -20) %= 360; break;
    case GLUT_KEY_F12: (a3 = 20) %= 360; break;

    default: return;
  }
  glutPostRedisplay();
}

void animCloud(int value)
{
if(cc<6.20)
        cc+=0.01;
    else
        cc= -6.20;

    glutPostRedisplay();
    glutTimerFunc(5, animCloud, 0);

}

void cloud1()
{
    glColor3f (.90, .90, .90); //red
    glutSolidSphere(.1,20,2);

}
void cloud2()
{
      glColor3f (.90, .90, .90); //red
    glutSolidSphere(.1,.20,2);

}

void sun()
{
    glColor3f (1.0, 0.45, 0.29); //red
    glutSolidSphere(.15,36,2);

}
void road()
{
glColor3f(0.4f, 0.4f, 0.5f); //
glBegin(GL_POLYGON);
    glVertex3f(-1, -0.2,0);
    glVertex3f(1, -0.2,0);
    glVertex3f(1, -.6,0);
    glVertex3f(-1, -.6,0);
glEnd();
}

void road1()
{
glColor3f( 1, 1, 1 ); //
glBegin(GL_POLYGON);
    glVertex3f(-1, -.4,0);
    glVertex3f(1, -0.4,0);
    glVertex3f(1, -.42,0);
    glVertex3f(-1, -.42,0);
glEnd();
}

void building(){

 //
glBegin(GL_POLYGON);
glColor3f( 1, 1, 1 );
    glVertex3f(-.9, -0.1,0);
    glVertex3f(-.8, -0.1,0);
    glVertex3f(-.8, -0.06,0);
    glVertex3f(-.9, -.06,0);
    glEnd();
glBegin(GL_POLYGON);
glColor3f( 1, 0, 0 );
    glVertex3f(-.9, -0.06,0);
    glVertex3f(-.8, -0.06,0);
    glVertex3f(-.8, 0.04,0);
    glVertex3f(-.9, .04,0);
    glEnd();
glBegin(GL_POLYGON);
glColor3f( 1, 1, 1 );
    glVertex3f(-.9, 0.04,0);
    glVertex3f(-.8, 0.04,0);
    glVertex3f(-.8, 0.1,0);
    glVertex3f(-.9, .1,0);


glEnd();

glBegin(GL_POLYGON);
glColor3f( 1, 1, 1 );
    glVertex3f(-.9, 0.1,0);
    glVertex3f(-.8, 0.1,0);
    glVertex3f(-.8, 0.15,0);
    glVertex3f(-.9, .15,0);

glEnd();
glBegin(GL_POLYGON);
glColor3f( 1, 0, 1 );
    glVertex3f(-.9, 0.15,0);
    glVertex3f(-.8, 0.15,0);
    glVertex3f(-.8, 0.2,0);
    glVertex3f(-.9, .2,0);

glEnd();
}

void building1(){

 //
glBegin(GL_POLYGON);
glColor3f( 0, 0, 0 );
    glVertex3f(-.8, -0.1,0);
    glVertex3f(-.7, -0.1,0);
    glVertex3f(-.7, -0.06,0);
    glVertex3f(-.8, -.06,0);
    glEnd();
glBegin(GL_POLYGON);
glColor3f( 1, 1, 1 );
    glVertex3f(-.8, -0.06,0);
    glVertex3f(-.7, -0.06,0);
    glVertex3f(-.7, 0.04,0);
    glVertex3f(-.8, .04,0);
    glEnd();
glBegin(GL_POLYGON);
glColor3f( 0, 0, 0 );
    glVertex3f(-.8, 0.04,0);
    glVertex3f(-.7, 0.04,0);
    glVertex3f(-.7, 0.1,0);
    glVertex3f(-.8, .1,0);


glEnd();

glBegin(GL_POLYGON);
glColor3f( 1, 1, 1 );
    glVertex3f(-.8, 0.1,0);
    glVertex3f(-.7, 0.1,0);
    glVertex3f(-.7, 0.15,0);
    glVertex3f(-.8, .15,0);

glEnd();
glBegin(GL_POLYGON);
glColor3f( 0, 0, 1 );
    glVertex3f(-.8, 0.15,0);
    glVertex3f(-.7, 0.15,0);
    glVertex3f(-.7, 0.2,0);
    glVertex3f(-.8, .2,0);

glEnd();


glBegin(GL_POLYGON);
glColor3f( 1, 0, 1 );
    glVertex3f(-.8, 0.2,0);
    glVertex3f(-.7, 0.2,0);
    glVertex3f(-.7, 0.25,0);
    glVertex3f(-.8, .25,0);

glEnd();

glBegin(GL_POLYGON);
glColor3f( 1, 1, 1 );
    glVertex3f(-.8, 0.25,0);
    glVertex3f(-.7, 0.25,0);
    glVertex3f(-.7, 0.3,0);
    glVertex3f(-.8, .3,0);

glEnd();
}

void building2(){

 //
glBegin(GL_POLYGON);
glColor3f( 1, 0, 0 );
    glVertex3f(-.6, -0.1,0);
    glVertex3f(-.5, -0.1,0);
    glVertex3f(-.5, -0.06,0);
    glVertex3f(-.6, -.06,0);
    glEnd();
glBegin(GL_POLYGON);
glColor3f( 1, 0, 1 );
    glVertex3f(-.6, -0.06,0);
    glVertex3f(-.5, -0.06,0);
    glVertex3f(-.5, 0.04,0);
    glVertex3f(-.6, .04,0);
    glEnd();
glBegin(GL_POLYGON);
glColor3f( 0, 1, 0 );
    glVertex3f(-.6, 0.04,0);
    glVertex3f(-.5, 0.04,0);
    glVertex3f(-.5, 0.1,0);
    glVertex3f(-.6, .1,0);


glEnd();

glBegin(GL_POLYGON);
glColor3f( 1, 1, 1 );
    glVertex3f(-.6, 0.1,0);
    glVertex3f(-.5, 0.1,0);
    glVertex3f(-.5, 0.15,0);
    glVertex3f(-.6, .15,0);

glEnd();
glBegin(GL_POLYGON);
glColor3f( 0, 0, 1 );
    glVertex3f(-.6, 0.15,0);
    glVertex3f(-.5, 0.15,0);
    glVertex3f(-.5, 0.2,0);
    glVertex3f(-.6, .2,0);

glEnd();


glBegin(GL_POLYGON);
glColor3f( 1, 0, 1 );
    glVertex3f(-.6, 0.2,0);
    glVertex3f(-.5, 0.2,0);
    glVertex3f(-.5, 0.25,0);
    glVertex3f(-.6, .25,0);

glEnd();

glBegin(GL_POLYGON);
glColor3f( 0, 0, 1 );
    glVertex3f(-.6, 0.25,0);
    glVertex3f(-.5, 0.25,0);
    glVertex3f(-.5, 0.3,0);
    glVertex3f(-.6, .3,0);

glEnd();

glBegin(GL_POLYGON);
glColor3f( 1, 1, 1 );
    glVertex3f(-.6, 0.3,0);
    glVertex3f(-.5, 0.3,0);
    glVertex3f(-.5, 0.35,0);
    glVertex3f(-.6, .35,0);

glEnd();
}

void building3(){

 //
glBegin(GL_POLYGON);
glColor3f( 0, 0, 0 );
    glVertex3f(-.4, -0.1,0);
    glVertex3f(-.3, -0.1,0);
    glVertex3f(-.3, -0.06,0);
    glVertex3f(-.4, -.06,0);
    glEnd();
glBegin(GL_POLYGON);
glColor3f( 1, 1, 1 );
    glVertex3f(-.4, -0.06,0);
    glVertex3f(-.3, -0.06,0);
    glVertex3f(-.3, 0.04,0);
    glVertex3f(-.4, .04,0);
    glEnd();
glBegin(GL_POLYGON);
glColor3f( 0, 0, 0 );
    glVertex3f(-.4, 0.04,0);
    glVertex3f(-.3, 0.04,0);
    glVertex3f(-.3, 0.1,0);
    glVertex3f(-.4, .1,0);


glEnd();

glBegin(GL_POLYGON);
glColor3f( 1, 1, 1 );
    glVertex3f(-.4, 0.1,0);
    glVertex3f(-.3, 0.1,0);
    glVertex3f(-.3, 0.15,0);
    glVertex3f(-.4, .15,0);

glEnd();
glBegin(GL_POLYGON);
glColor3f( 0, 0, 1 );
    glVertex3f(-.4, 0.15,0);
    glVertex3f(-.3, 0.15,0);
    glVertex3f(-.3, 0.2,0);
    glVertex3f(-.4, .2,0);

glEnd();


glBegin(GL_POLYGON);
glColor3f( 1, 0, 1 );
    glVertex3f(-.4, 0.2,0);
    glVertex3f(-.3, 0.2,0);
    glVertex3f(-.3, 0.25,0);
    glVertex3f(-.4, .25,0);

glEnd();

glBegin(GL_POLYGON);
glColor3f( 1, 0, 1 );
    glVertex3f(-.4, 0.25,0);
    glVertex3f(-.3, 0.25,0);
    glVertex3f(-.3, 0.3,0);
    glVertex3f(-.4, .3,0);

glEnd();

glBegin(GL_POLYGON);
glColor3f( 1, 1, 1 );
    glVertex3f(-.4, 0.3,0);
    glVertex3f(-.3, 0.3,0);
    glVertex3f(-.3, 0.35,0);
    glVertex3f(-.4, .35,0);

glEnd();
}

void tree()
{

    glBegin(GL_TRIANGLES);
        //front
        glColor3f(0.0,1.0,0.0);
        glVertex3f(.2,0.0,0);
        glVertex3f(.7, -0.0,0.0);
        glVertex3f(0.4,0.4,0);

    glEnd();




}

//int m,tx,ty;
void car1()
{

glBegin(GL_QUADS);

glColor3f(1,0,0);
/// Fornt
glVertex3f (-1.20, -0.3, 0.25);
glVertex3f (1.0, -0.3, .25);
glVertex3f (1.0, 0.45, 0.25);
glVertex3f (-1.20, 0.45, .25);

///Left
 glVertex3f (1, -0.3, 0.25);
glVertex3f (1.0, -0.3, -.25);
glVertex3f (1.0, 0.45, -0.25);
glVertex3f (1, 0.45, .25);

///Rignt

 glVertex3f (-1.25, -0.3, 0.25);
glVertex3f (-1.25, -0.3, -.25);
glVertex3f (-1.25, 0.45, -0.25);
glVertex3f (-1.25,.45, .25);

///top

glVertex3f (-1.25, 0.45, -0.25);
glVertex3f (1.0, 0.45, -.25);
glVertex3f (1.0, 0.45, 0.25);
glVertex3f (-1.25, 0.45, .25);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
/// Fornt
glVertex3f (-.70, 1.1, 0.25);
glVertex3f (.45, 1.1, .25);
glVertex3f (.75, 0.45, 0.25);
glVertex3f (-1.0, 0.45, .25);

///Right
glVertex3f (-.70, 1.1, 0.25);
glVertex3f (-.70, 1.1, -.25);
glVertex3f (-1.0, 0.45, -0.25);
glVertex3f (-1.0, 0.45, .25);
///Left
glVertex3f (.45, 1.1, 0.25);
glVertex3f (0.45, 1.1, -.25);
glVertex3f (.75, 0.45, -0.25);
glVertex3f (.75, 0.45, .25);

///Top

glVertex3f (.45, 1.1, 0.25);
glVertex3f (0.45, 1.1, -.25);
glVertex3f (-.70, 1.1, -0.25);
glVertex3f (-.70, 1.1, .25);

glEnd();

glColor3f(0,0,0);
 glPushMatrix();
        glTranslatef(.70, -.3, .14);
        glutSolidSphere(0.33,39,4);
    glPopMatrix();

glColor3f(0,0,0);
 glPushMatrix();
        glTranslatef(-1.0, -.3, .14);
        glutSolidSphere(0.33,39,4);
    glPopMatrix();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex3f (1.0, 0.45, 0.25);
glVertex3f (-1.25, 0.45, .25);
glEnd();
glBegin(GL_QUADS);
/// window1
glColor3f(0,0,0);
glVertex3f (-.58, .98, 0.25);
glVertex3f (-.15, .98, .25);
glVertex3f (-.15, 0.57, 0.25);
glVertex3f (-.78, 0.57, .25);
///window2
glColor3f(0,0,0);
glVertex3f (.33, .98, 0.25);
glVertex3f (-.10, .98, .25);
glVertex3f (-.10, 0.57, 0.25);
glVertex3f (.53, 0.57, .25);
glVertex3f (.56, 0.56, .56);
glEnd();
glFlush();


glEnd();
}



void tree1(){

glBegin(GL_POLYGON);
glColor3f( 0, 0, 0 );
    glVertex3f(-.9, -0.99,0);
    glVertex3f(-.85, -0.99,0);
    glVertex3f(-.85, -0.8,0);
    glVertex3f(-.9, -0.8,0);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f( 1, 1, 1 );
    glVertex3f(-.99, -0.8,0);
    glVertex3f(-.74, -0.8,0);
    glVertex3f(-.74, -0.55,0);
    glVertex3f(-.99, -0.55,0);

    glEnd();


}

void tree2(){



}



void mydisplay()
{
glClear(GL_COLOR_BUFFER_BIT);



glBegin(GL_POLYGON);
glColor3f(.5294,.80784,.9803);
glVertex2f(-1,.3);
glVertex2f(1,.3);
glVertex2f(1,1);
glVertex2f(-1,1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(.2,.8,.2);
glVertex2f(-1,.3);
glVertex2f(1,.3);
glVertex2f(1,-1);
glVertex2f(-1,-1);
glEnd();

 ///road


glPushMatrix();
glScalef(1,1,1);
glTranslatef(0,.3,0);
road();
glPopMatrix();
///building
glPushMatrix();
glScalef(1,1,1);
glTranslatef(0,.3,0);
building();
glPopMatrix();

///building1
glPushMatrix();
glScalef(1,1,1);
glTranslatef(0,.3,0);
building1();
glPopMatrix();
///building2
glPushMatrix();
glScalef(1,1,1);
glTranslatef(0,.3,0);
building2();
glPopMatrix();

///building3
glPushMatrix();
glScalef(1,1,1);
glTranslatef(0,.3,0);
building3();
glPopMatrix();

///tree1
glPushMatrix();

glScalef(1,1,1);
glTranslatef(0,.3,0);
tree1();
glPopMatrix();
///road1
glPushMatrix();
glScalef(1,1,1);
glTranslatef(0,.3,0);
road1();
glPopMatrix();

///tree

glPushMatrix();
glScalef(1,1,1);
glTranslatef(0,0.3,0);
tree();
glPopMatrix();





glPushMatrix();
glScalef(.70,.70,.70);
glTranslatef(0,.3,0);
//house();
glPopMatrix();

glPushMatrix();
glScalef(1,1,1);
glTranslatef(-.8+tx,+.8,0);
cloud1();
glPopMatrix();


glPushMatrix();
glScalef(1,1,1);
glTranslatef(-.7+xx,+.8,0);
cloud1();
glPopMatrix();


glPushMatrix();
glScalef(1,1,1);
glTranslatef(-.7+xx,+.7,0);
cloud1();
glPopMatrix();

glPushMatrix();
glScalef(1,1,1);
glTranslatef(-.8+xx,+.7,0);
cloud1();
glPopMatrix();



///megh 2

glPushMatrix();
glScalef(1,1,1);
glTranslatef(-.5+tx,0.85,0);
cloud2();
glPopMatrix();


glPushMatrix();
glScalef(1,1,1);
glTranslatef(-.40+tx,+.86,0);
cloud2();
glPopMatrix();


glPushMatrix();
glScalef(1,1,1);
glTranslatef(-.5+tx,0.70,0);
cloud2();
glPopMatrix();



///sun
glPushMatrix();
glScalef(1,1,1);
glTranslatef(.80,.8,0);
sun();
glPopMatrix();

///tree
glPushMatrix();
glScalef(1,1,1);
glTranslatef(.80,.8,0);
//tree1();
glPopMatrix();

///road2
glPushMatrix();
glScalef(1,1,1);
glTranslatef(0,.3,0);
//road2();
glPopMatrix();

///car1

glPushMatrix();
    glScalef(.3,.2,.6);
    glTranslatef(0.1+ cc,0,0);
    glColor3f(0.2,0.3,0.1);
    //glutSpecialFunc(special);

    car1();
  glPopMatrix();
glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  gluLookAt(posx, posy, posz, eyex, eyey, eyez, upx, upy, upz);

  glFlush();
}
void init() {

  glClearColor (0.4, 0.85, 1.0, 0.0);
  glColor3f(1.0, 1.0, 1.0);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(60.0, 4.0/3.0, 1, 20);



}

int main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutCreateWindow("simple");
glutDisplayFunc(mydisplay);
glutSpecialFunc(special);
init();
road();
road1();
tree1();
tree();
cloud1();
cloud2();
sun();
glutTimerFunc(25, animCloud, 0);

glutMainLoop();
}
