#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <windows.h>
#define PI 3.1416

int windowWidth=1000;
int windowHeight=600;
int cnt=1;
double xboat=0;
double yboat=0;
double xsun=0;
double cld=0;
double xcar=0;
double ycar=0;



bool flagScale=false;


void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
int i;
int triangleAmount = 20; //# of triangles used to draw circle
//GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;


glBegin(GL_TRIANGLE_FAN);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
}


//cloud 1
void cloud (void)
{
   glPushMatrix();
   glColor3f(1.000, 1.000, 1.000);
   glTranslatef(cld,0,0);
   drawFilledCircle(80,550,18);
   glPopMatrix();

   glPushMatrix();
   glColor3f(1.000, 1.000, 1.000);
   glTranslatef(cld,0,0);
   drawFilledCircle(116,550,18);
   glPopMatrix();

    glPushMatrix();
   glColor3f(1.000, 1.000, 1.000);
   glTranslatef(cld,0,0);
   drawFilledCircle(98,560,18);
   glPopMatrix();

    glPushMatrix();
   glColor3f(1.000, 1.000, 1.000);
   glTranslatef(cld,0,0);
   drawFilledCircle(94,540,18);
   glPopMatrix();
}


void pahar (void)
{
      glPushMatrix();
  glBegin(GL_TRIANGLES);

  glColor3f(0.000, 0.392, 0.000);
  glVertex2f(0,450);
  glVertex2f(70,450);
  glVertex2f(35,490);

   glEnd();
glPopMatrix();
}

//house1
void house1 (void){

glPushMatrix();
  glBegin(GL_QUADS);
 glColor3f(0.741, 0.718, 0.420);

  glVertex2f(100,300);
 glVertex2f(100,250);
  glVertex2f(200,250);
 glVertex2f(200,300);

  glEnd();
glPopMatrix();


glPushMatrix();
  glBegin(GL_TRIANGLES);
 glColor3f(0.502, 0.502, 0.000);

  glVertex2f(100,300);
 glVertex2f(200,300);
 glVertex2f(150,350);

   glEnd();
glPopMatrix();

glPushMatrix();
  glBegin(GL_QUADS);
 glColor3f(0.502, 0.502, 0.000);

  glVertex2f(130,280);
 glVertex2f(130,250);
  glVertex2f(170,250);
 glVertex2f(170,280);

  glEnd();
glPopMatrix();
}

//house 2
void house2(void)
{
//top
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.184, 0.310, 0.310);

  glVertex2f(226,142);
  glVertex2f(261,135);
  glVertex2f(255,121);
  glVertex2f(217.5,129);

 glEnd();
glPopMatrix();

//right triangle
  glPushMatrix();
  glBegin(GL_TRIANGLES);
  glColor3f(0.184, 0.310, 0.310);

  glVertex2f(261,135);
  glVertex2f(255,121);
  glVertex2f(269,123);

 glEnd();
glPopMatrix();

//right rectangle
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.400, 0.804, 0.667);

  glVertex2f(256.5,121.2);
  glVertex2f(256.5,100);
  glVertex2f(268,103);
  glVertex2f(268,123);

 glEnd();
glPopMatrix();

//large rectangle
  glPushMatrix();
  glBegin(GL_POLYGON);
glColor3f(0.400, 0.804, 0.667);

  glVertex2f(256.5,121.2);
  glVertex2f(255,121);
  glVertex2f(219,129);
  glVertex2f(219,110.5);
  glVertex2f(256.5,100);

 glEnd();
glPopMatrix();

//door
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.184, 0.310, 0.310);

  glVertex2f(232.7,124.5);
  glVertex2f(232.7,106.5);
  glVertex2f(240.3,104.4);
  glVertex2f(240.3,122.72);

 glEnd();
glPopMatrix();


//window 1
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.184, 0.310, 0.310);

  glVertex2f(222.3,115.5);
  glVertex2f(222.3,123.7);
  glVertex2f(229,122.5);
  glVertex2f(229,114);

   glEnd();
glPopMatrix();

//window 2
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.184, 0.310, 0.310);

  glVertex2f(244.8,110);
  glVertex2f(244.8,118.6);
  glVertex2f(251.5,117.2);
  glVertex2f(251.5,108.2);

   glEnd();
glPopMatrix();

//window 3
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.184, 0.310, 0.310);

  glVertex2f(259,117.2);
  glVertex2f(259,108.7);
  glVertex2f(266,110.3);
  glVertex2f(266,118.5);

   glEnd();
glPopMatrix();

//siri 1
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.184, 0.310, 0.310);

  glVertex2f(221,110);
  glVertex2f(220,108.2);
  glVertex2f(252.5,99);
  glVertex2f(253.5,100.8);

   glEnd();
glPopMatrix();

//siri 2
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.184, 0.310, 0.310);

  glVertex2f(220,108.2);
  glVertex2f(220,107.4);
  glVertex2f(252.5,98);
  glVertex2f(252.5,99);

   glEnd();
glPopMatrix();
}

//boat 1
void boat1 (void)
{
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.000, 0.000, 0.000);

  glVertex2f(xboat+303,yboat+25);
  glVertex2f(xboat+313,yboat+15);
  glVertex2f(xboat+337,yboat+15);
  glVertex2f(xboat+347,yboat+25);

 glEnd();
glPopMatrix();


  glPushMatrix();
  glBegin(GL_POLYGON);
  glColor3f(0.000, 0.502, 0.502);

  glVertex2f(xboat+313,yboat+25);
  glVertex2f(xboat+313,yboat+32);
  glVertex2f(xboat+325,yboat+35);
  glVertex2f(xboat+337,yboat+32);
  glVertex2f(xboat+337,yboat+25);
  glVertex2f(xboat+325,yboat+21);

 glEnd();
glPopMatrix();
}



//tree 1
void tree1 (void)
{
       glPushMatrix();
   glBegin(GL_QUADS);
   glColor3f(0.622, 0.425, 0.033);

   glVertex2f(40,503);
   glVertex2f(53,503);
   glVertex2f(53,440);
   glVertex2f(40,440);

 glEnd();
glPopMatrix();

   glPushMatrix();
   glColor3f(0.133, 0.545, 0.133);
   drawFilledCircle(33,505,18);
   glPopMatrix();

   glPushMatrix();
   glColor3f(0.133, 0.545, 0.133);
   drawFilledCircle(59,505,18);
   glPopMatrix();

    glPushMatrix();
   glColor3f(0.133, 0.545, 0.133);
   drawFilledCircle(46,521,18);
   glPopMatrix();
}


//car
void car (void)
{
  glPushMatrix();//body
  glBegin(GL_POLYGON);
  glColor3f(0.184, 0.310, 0.310);

  glVertex2f(xcar+63,ycar+78.5);
  glVertex2f(xcar+86.5,ycar+79.5);
  glVertex2f(xcar+86,ycar+83.5);
  glVertex2f(xcar+80,ycar+85.5);
  glVertex2f(xcar+77,ycar+89);
  glVertex2f(xcar+68,ycar+88);
  glVertex2f(xcar+65,ycar+84.5);
  glVertex2f(xcar+62,ycar+84);
  glEnd();
  glPopMatrix();


   glPushMatrix();//window1
  glBegin(GL_POLYGON);
  glColor3f(1.0, 1.0, 1.0);

  glVertex2f(xcar+79.3,ycar+84.3);
  glVertex2f(xcar+76.4,ycar+87.7);
  glVertex2f(xcar+72.6,ycar+87.5);
  glVertex2f(xcar+73.1,ycar+84);


   glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_POLYGON);//window2
glColor3f(1.0, 1.0, 1.0);

  glVertex2f(xcar+72,ycar+84);
  glVertex2f(xcar+71.6,ycar+87.5);
  glVertex2f(xcar+69,ycar+87);
  glVertex2f(xcar+66,ycar+83);

 glEnd();
glPopMatrix();

//chaka1
  glPushMatrix();
  glColor3f(0.961, 0.961, 0.961);
  glTranslatef(xcar+69,ycar+79,0);
  glRotatef(180,xcar+0,ycar+0,0);
  glutWireTorus(0.3, 2.5, 3, 30);
  glPopMatrix();

   glPushMatrix();
   glColor3f(0.000, 0.000, 0.000);
   drawFilledCircle(xcar+69,ycar+79,1.3);
   glPopMatrix();

//chaka2
  glPushMatrix();
  glColor3f(0.961, 0.961, 0.961);
  glTranslatef(xcar+80,ycar+79,0);
  glRotatef(180,xcar+0,ycar+0,0);
  glutWireTorus(0.3, 2.5, 3, 30);
  glPopMatrix();

     glPushMatrix();
   glColor3f(0.000, 0.000, 0.000);
   drawFilledCircle(xcar+80,ycar+79,1.3);
   glPopMatrix();
}

void front_page()
{
    char text[120];

        sprintf(text, "UNIVERSITY OF INFORMATION TECHNOLOGY & SCIENCE",5.00,8.00);
    glColor3f(0, 1, 0);
    glRasterPos2f( -35 , 55 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text, "Final Project Presentation",5.00,8.00);
    glColor3f(1, 1, 0);
    glRasterPos2f( -30 , 45 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

        sprintf(text, "NAME-Rokonuzzaman",5.00,8.00);
    glColor3f(0.0616, 0.375, 0.880);
    glRasterPos2f( -30 , 35 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, "ID-1914551072",5.00,8.00);
    glColor3f(0.0616, 0.375, 0.880);
    glRasterPos2f( -30 , 30 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "DEPARTMENT OF CSE",5.00,8.00);
    glColor3f(0.0616, 0.375, 0.880);
    glRasterPos2f( -30 , 25 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "SUBMITTED TO-",5.00,8.00);
    glColor3f(0.880, 0.233, 0.0176);
    glRasterPos2f( -30 , 17 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "SALIM SHADMAN ANKUR & PROPA PUNAM",5.00,8.00);
    glColor3f(0.880, 0.233, 0.0176);
    glRasterPos2f( -20 , 12 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "PRESS 'd' FOR DAY MODE",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -30 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, "PRESS 'n' FOR NIGHT MODE",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -30 , -5 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text, "PRESS 'f' FOR FRONT WINDOW",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -30 , -10 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

     sprintf(text, "PRESS 's' FOR ACTIVATING ANIMATION.",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -30 , -15 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text, "PRESS 'e' FOR DEACTIVATING ANIMATION.",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -30 , -20 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }



}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(1,1,1,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-70,70,-50,50);
    //glMatrixMode( GL_MODELVIEW );
    //glLoadIdentity();
    glPushMatrix();
    front_page();
    glEnd();
    glPopMatrix();
     glFlush();
    glutSwapBuffers();



}


void display_day(void)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glMatrixMode( GL_PROJECTION );
glLoadIdentity();
gluOrtho2D(0,1000,0,600);
glMatrixMode( GL_MODELVIEW );
glLoadIdentity();
glViewport(0, 0 ,windowWidth ,windowHeight);


//sky
glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(0.678, 0.847, 0.902);

    glVertex2f(0,600);
    glColor3f(0.678, 0.847, 0.902);
    glVertex2f(0,430);
    glColor3f(0.678, 0.847, 0.902);
    glVertex2f(1000,430);
    glColor3f(1.000, 1.000, 0.000);
    glVertex2f(1000,600);

     glEnd();
    glPopMatrix();

//sun
 glPushMatrix();
 glColor3f(1.000, 0.647, 0.000);
glTranslatef(xsun,0,0);
drawFilledCircle(600,550,20);
   glPopMatrix();


//cloud 2
cloud();
glPushMatrix();
glTranslatef(620,0, 0);
cloud();
glPopMatrix();


//field
glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(0.420, 0.557, 0.137);

    glVertex2f(0,450);
    glVertex2f(0,250);
    glVertex2f(1000,250);
    glVertex2f(1000,450);

     glEnd();
    glPopMatrix();


//pahar
pahar();

//pahar
glPushMatrix();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glPopMatrix();


//tree
tree1();
glPushMatrix();
glTranslatef(170,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glTranslatef(290,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glPopMatrix();

glPushMatrix();
glTranslatef(220,-25,0);
tree1();
glTranslatef(100,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glTranslatef(290,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glPopMatrix();


//road
glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(0.545, 0.271, 0.075);
    glVertex2f(0,300);
    glVertex2f(0,150);
    glVertex2f(1000,150);
    glVertex2f(1000,300);


   glEnd();
    glPopMatrix();


//rever
 glPushMatrix();
glBegin(GL_QUADS);

   glColor4f(0.0,1.0,1.0,1.0);

    glVertex2f(0,200);
    glColor3f(	0.118, 0.565, 1.000);
    glVertex2f(0,1);
    glColor3f(	0.118, 0.565, 1.000);
    glVertex2f(1000,1);
    glColor4f(0.0,1.0,1.0,1.0);
    glVertex2f(1000,200);

 glEnd();
    glPopMatrix();


//house 1
glPushMatrix();
glTranslatef(-30,130,0);
glScalef(1.1,1.1,1);
house1();
glPopMatrix();

//house 2
glPushMatrix();
glTranslatef(-110,60,0);
glScalef(3.3,3.3,1);
house2();
glPopMatrix();

//car
glPushMatrix();
glTranslatef(0,0,0);
glScalef(3.5,3.5,1);
car();
glPopMatrix();


//boat 1
glPushMatrix();
glTranslatef(-200,0,0);
glScalef(3,3,1);
boat1();
glPopMatrix();
//boat 2
glPushMatrix();
glTranslatef(-640,-10,0);
glScalef(3,3,1);
boat1();
glPopMatrix();


glFlush();
glutSwapBuffers();
}


void display_night(void)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glMatrixMode( GL_PROJECTION );
glLoadIdentity();
gluOrtho2D(0,1000,0,600);
glMatrixMode( GL_MODELVIEW );
glLoadIdentity();
glViewport(0, 0 ,windowWidth ,windowHeight);


//sky
glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0,600);
    glVertex2f(0,430);
    glVertex2f(1000,430);
    glVertex2f(1000,600);

     glEnd();
    glPopMatrix();

//moon
 glPushMatrix();
 glColor3f(1.000, 1.00, 1.000);
glTranslatef(xsun,0,0);
drawFilledCircle(600,550,15);
   glPopMatrix();


//cloud 2
cloud();
glPushMatrix();
glTranslatef(620,0, 0);
cloud();
glPopMatrix();


//field
glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(0.420, 0.557, 0.137);

    glVertex2f(0,450);
    glVertex2f(0,250);
    glVertex2f(1000,250);
    glVertex2f(1000,450);

     glEnd();
    glPopMatrix();


//pahar
pahar();

//pahar
glPushMatrix();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glPopMatrix();


//tree
tree1();
glPushMatrix();
glTranslatef(170,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glTranslatef(290,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glPopMatrix();

glPushMatrix();
glTranslatef(220,-25,0);
tree1();
glTranslatef(100,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glTranslatef(290,0,0);
tree1();
glTranslatef(100,0,0);
tree1();
glPopMatrix();


//road
glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(0.545, 0.271, 0.075);
    glVertex2f(0,300);
    glVertex2f(0,150);
    glVertex2f(1000,150);
    glVertex2f(1000,300);


   glEnd();
    glPopMatrix();


//rever
 glPushMatrix();
glBegin(GL_QUADS);

   glColor4f(0.0,1.0,1.0,1.0);

    glVertex2f(0,200);
    glColor3f(	0.118, 0.565, 1.000);
    glVertex2f(0,1);
    glColor3f(	0.118, 0.565, 1.000);
    glVertex2f(1000,1);
    glColor4f(0.0,1.0,1.0,1.0);
    glVertex2f(1000,200);

 glEnd();
    glPopMatrix();


//house 1
glPushMatrix();
glTranslatef(-30,130,0);
glScalef(1.1,1.1,1);
house1();
glPopMatrix();

//house 2
glPushMatrix();
glTranslatef(-110,60,0);
glScalef(3.3,3.3,1);
house2();
glPopMatrix();

//car
glPushMatrix();
glTranslatef(0,0,0);
glScalef(3.5,3.5,1);
car();
glPopMatrix();


//boat 1
glPushMatrix();
glTranslatef(-200,0,0);
glScalef(3,3,1);
boat1();
glPopMatrix();
//boat 2
glPushMatrix();
glTranslatef(-640,-10,0);
glScalef(3,3,1);
boat1();
glPopMatrix();


glFlush();
glutSwapBuffers();
}


void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 's':
        flagScale=true;
        break;
    case 'e':
        flagScale=false;
        break;
    case  'd':
            glutDestroyWindow(1);
            glutInitWindowSize(windowWidth, windowHeight);

            glutCreateWindow("village view");
            glutKeyboardFunc(myKeyboardFunc);
            glutDisplayFunc(display_day);
            break;

        case 'n':
            glutDestroyWindow(1);
            glutInitWindowSize(windowWidth, windowHeight);

            glutCreateWindow("village view");
            glutKeyboardFunc(myKeyboardFunc);
            glutDisplayFunc(display_night);

            glutPostRedisplay();
            break;

        case 'f':
            glutDestroyWindow(1);
            glutInitWindowSize(windowWidth, windowHeight);

            glutCreateWindow("Front Page");
            glutKeyboardFunc(myKeyboardFunc);
            glutDisplayFunc(display);

            glutPostRedisplay();
            break;


    case 27: // Escape key
        exit(1);
    }
    glutPostRedisplay();
}


void animate()
{
//sun
	if (flagScale == true)
	{
		xsun+= 0.05;
		if(xsun > 430){
			xsun = -690;

			cnt++;

        if(cnt%2!=0){

                    glutDisplayFunc(display_day);

		}
		else
                    glutDisplayFunc(display_night);

	}
	}
	if (flagScale == false)
	{
		xsun = 0;
	}


//cloud
    if (flagScale == true)
	{
		cld-= 0.07;
		if(cld < -745)
			cld = 920;
	}
	if (flagScale == false)
	{
		cld = 0;
	}
	glutPostRedisplay();


//boat
    if (flagScale == true)
	{
		xboat += 0.07;
		if(xboat > 260)
			xboat = -275;
	}
	if (flagScale == false)
	{
		xboat = 0;
	}
	glutPostRedisplay();


//car
    if (flagScale == true)
	{
		xcar += 0.1;
		if(xcar > 270)
			xcar = -90;

	}
	if (flagScale == false)
	{
		xcar = 0;
	}
	glutPostRedisplay();

}


int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowPosition(100,100);
glutInitWindowSize(windowWidth, windowHeight);
glutCreateWindow("Village View");
glutKeyboardFunc(myKeyboardFunc);
glutIdleFunc(animate);
glutDisplayFunc(display);
glDepthFunc(GL_LEQUAL);
glutMainLoop();
return 0;

}
