#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <string.h>
#include<stdlib.h>


//level 1 is made level 2 at some code points

int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0; //countX level 2 targets

int count21 = 0, count22 = 0, count23 = 0, count24 = 0, count25 = 0; //count2X level 1 targets

int count31 = 0, count32 = 0, count33 = 0, count34 = 0, count35 = 0, count36 = 0;  //count3X level 3 targets

int pm1 = 0, pm2 = 0, pm3 = 0;//platform movement increase to decide win or not

int gs = 0; //game start to display m-> new level
//'ww' -> 'w' key working boolean
int ww1 = 0; //should w work for level one
int ww2 = 0;  //should w work for level tho
int ww3 = 0;  //should w work for level three
int pp = 6;   //platform position
int win = 0;  //win
int win2 = 0;  //win level 2
int win3 = 0;  //win level 3
int lev = 0;  //level 1 2 3
int ps = 0;  //IDK why I wrote this.
int fs = 1; //front screen

char dash[200] = "--------------------------------------------------------------------------------------------------------";

char college[100] = "J N N COLLEGE OF ENGINEERING SHIVAMOGGA";
char dept[100] = "DEPARTMENT OF COMPUTER SCIENCE & ENGINNERING";
char heading[100] = "SUBMITTED BY";
char name1[100] = "SANATH GOUTHAM                        4JN19CS089";
char name2[100] = "PRATHVI A NADIG                           4JN19CS071";
char name3[100] = "SAMRUDH H                                      4JN19CS087";
char name4[100] = "SHOAIB KALEEM SAYAD                4JN19CS090";
char heading2[100] = "UNDER THE GUIDANCE OF";
char lname[100] = "  Mrs.SUSHMA R B                                                Mr.Chakrapani D S ";
char ledu[100] = "B.E,M.Tech                                                       B.E,M.Tech";
char deptname[100] = "Asst.Prof., Dept. of CS&E                                    Asst.Prof., Dept. of CS&E";
char clgname[100] = " JNNCE, SHIMOGA                                               JNNCE, SHIMOGA";

char emsg[100] = "Press 't' to start the game";
char title[50] = "Archery game with no arrow";







void print_text(int x, int y, char str[], float r, float g, float b) {
    glRasterPos2i(x, y);                                                        //displays msg passed as parameter
    for (int i = 0; str[i] != '\0'; i++) {
        glColor3f(r, g, b);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
    }
}
void print_text1(int x, int y, char str[], float r, float g, float b) {
    glRasterPos2i(x, y);                                                        //displays msg passed as parameter
    for (int i = 0; str[i] != '\0'; i++) {
        glColor3f(r, g, b);
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, str[i]);
    }
}

void display_string(int x, int y, char* string, int font) {      //display the string passed as parameter
    int len, i;
    glColor3f(0.257, 0.446, 74.399);    //All the blue color of the game interface
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++) {
        if (font == 1)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
        if (font == 2)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
        if (font == 3)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, string[i]);
        if (font == 4)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10, string[i]);
    }
}

void reshape(int w, int h) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, w, 0.0, h);
    glViewport(0.0, 0.0, w, h);
}

void target() {
    if (lev == 1) {
        if (count1 == 1) {
            glColor3f(1, 0, 0);
            glPointSize(30);
            glBegin(GL_POINTS);
            glVertex2d(125, 275);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(100, 250);
            glVertex2d(150, 250);
            glVertex2d(150, 300);
            glVertex2d(100, 300);
            glEnd();

        }

        if (count2 == 1) {
            glColor3f(1, 0, 0);
            glPointSize(30);
            glBegin(GL_POINTS);
            glVertex2d(125, 475);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(100, 450);
            glVertex2d(150, 450);
            glVertex2d(150, 500);
            glVertex2d(100, 500);
            glEnd();

        }
        if (count3 == 1) {
            glColor3f(1, 0, 0);
            glPointSize(30);
            glBegin(GL_POINTS);
            glVertex2d(175, 575);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(150, 550);
            glVertex2d(200, 550);
            glVertex2d(200, 600);
            glVertex2d(150, 600);
            glEnd();

        }if (count4 == 1) {
            glColor3f(1, 0, 0);
            glPointSize(30);
            glBegin(GL_POINTS);
            glVertex2d(275, 375);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(250, 350);
            glVertex2d(300, 350);
            glVertex2d(300, 400);
            glVertex2d(250, 400);
            glEnd();

        }
        if (count5 == 1) {
            glColor3f(1, 0, 0);
            glPointSize(30);
            glBegin(GL_POINTS);
            glVertex2d(325, 225);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(300, 200);
            glVertex2d(350, 200);
            glVertex2d(350, 250);
            glVertex2d(300, 250);
            glEnd();

        }
        if (count6 == 1) {
            glColor3f(1, 0, 0);
            glPointSize(30);
            glBegin(GL_POINTS);
            glVertex2d(375, 475);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(350, 450);
            glVertex2d(400, 450);
            glVertex2d(400, 500);
            glVertex2d(350, 500);
            glEnd();

        }
        if (count7 == 1) {
            glColor3f(1, 0, 0);
            glPointSize(30);
            glBegin(GL_POINTS);
            glVertex2d(425, 275);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(400, 250);
            glVertex2d(450, 250);
            glVertex2d(450, 300);
            glVertex2d(400, 300);
            glEnd();

        }
        if (count8 == 1) {
            glColor3f(1, 0, 0);
            glPointSize(30);
            glBegin(GL_POINTS);
            glVertex2d(475, 575);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(450, 550);
            glVertex2d(500, 550);
            glVertex2d(500, 600);
            glVertex2d(450, 600);
            glEnd();
        }
        glutPostRedisplay();
    }

    if (lev == 2) {
        if (count21 == 1) {
            glColor3f(0, 0, 1);
            glBegin(GL_POLYGON);
            glVertex2d(150, 250);
            glVertex2d(200, 250);
            glVertex2d(175, 300);
            glEnd();
        }
        if (count22 == 1) {
            glColor3f(0, 0, 1);
            glPointSize(30);
            glBegin(GL_POLYGON);
            glVertex2d(50, 400);
            glVertex2d(100, 400);
            glVertex2d(75, 450);
            glEnd();

        }
        if (count23 == 1) {
            glColor3f(0, 0, 1);
            glBegin(GL_POLYGON);
            glVertex2d(250, 550);
            glVertex2d(300, 550);
            glVertex2d(275, 600);
            glEnd();
        }



        if (count24 == 1) {
            glColor3f(0, 0, 1);
            glBegin(GL_POLYGON);
            glVertex2d(400, 450);
            glVertex2d(450, 450);
            glVertex2d(425, 500);
            glEnd();

        }
        if (count25 == 1) {
            glColor3f(0, 0, 1);
            glBegin(GL_POLYGON);
            glVertex2d(300, 300);
            glVertex2d(350, 300);
            glVertex2d(325, 350);
            glEnd();
        }
        glutPostRedisplay();
    }

    if (lev == 3) {
        if (count31 == 1) {
            glColor3f(0, 1, 1);
            glPointSize(15);
            glBegin(GL_POINTS);
            glVertex2d(125, 575);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(100, 575);   //+25y      the change required to convert the target from square to rhombus or someting idk
            glVertex2d(125, 600);    //-25x+50y
            glVertex2d(150, 575);    //-25y
            glVertex2d(125, 550);    //+25x-50y
            glEnd();

        }
        if (count32 == 1) {
            glColor3f(0, 1, 1);
            glPointSize(15);
            glBegin(GL_POINTS);
            glVertex2d(175, 425);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(150, 425);
            glVertex2d(175, 450);
            glVertex2d(200, 425);
            glVertex2d(175, 400);
            glEnd();

        }
        if (count33 == 1) {
            glColor3f(0, 1, 1);
            glPointSize(15);
            glBegin(GL_POINTS);
            glVertex2d(425, 475);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(400, 475);
            glVertex2d(425, 500);
            glVertex2d(450, 475);
            glVertex2d(425, 450);
            glEnd();

        }
        if (count34 == 1) {
            glColor3f(0, 1, 1);
            glPointSize(15);
            glBegin(GL_POINTS);
            glVertex2d(325, 425);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(300, 425);
            glVertex2d(325, 450);
            glVertex2d(350, 425);
            glVertex2d(325, 400);
            glEnd();

        }
        if (count35 == 1) {
            glColor3f(0, 1, 1);
            glPointSize(15);
            glBegin(GL_POINTS);
            glVertex2d(375, 325);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(350, 325);
            glVertex2d(375, 350);
            glVertex2d(400, 325);
            glVertex2d(375, 300);
            glEnd();

        }
        if (count36 == 1) {
            glColor3f(0, 1, 1);
            glPointSize(15);
            glBegin(GL_POINTS);
            glVertex2d(475, 575);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glVertex2d(450, 575);
            glVertex2d(475, 600);
            glVertex2d(500, 575);
            glVertex2d(475, 550);
            glEnd();

        }
        glutPostRedisplay();
    }
}

void platform(int pp) {
    if (pp == 1) {
        glColor3f(0, 1, 0);
        glBegin(GL_POLYGON);
        glVertex2i(0, 50);
        glVertex2i(50, 50);
        glVertex2i(50, 80);
        glVertex2i(0, 80);
        glEnd();
    }
    if (pp == 2) {
        glColor3f(0, 1, 0);
        glBegin(GL_POLYGON);
        glVertex2i(50, 50);
        glVertex2i(100, 50);
        glVertex2i(100, 80);
        glVertex2i(50, 80);
        glEnd();
    }
    if (pp == 3) {
        glColor3f(0, 1, 0);
        glBegin(GL_POLYGON);
        glVertex2i(100, 50);
        glVertex2i(150, 50);
        glVertex2i(150, 80);
        glVertex2i(100, 80);
        glEnd();
    }
    if (pp == 4) {
        glColor3f(0, 1, 0);
        glBegin(GL_POLYGON);
        glVertex2i(150, 50);
        glVertex2i(200, 50);
        glVertex2i(200, 80);
        glVertex2i(150, 80);
        glEnd();
    }
    if (pp == 5) {
        glColor3f(0, 1, 0);
        glBegin(GL_POLYGON);
        glVertex2i(200, 50);
        glVertex2i(250, 50);
        glVertex2i(250, 80);
        glVertex2i(200, 80);
        glEnd();
    }
    if (pp == 6) {
        glColor3f(0, 1, 0);
        glBegin(GL_POLYGON);
        glVertex2i(250, 50);
        glVertex2i(300, 50);
        glVertex2i(300, 80);
        glVertex2i(250, 80);
        glEnd();
    }
    if (pp == 7) {
        glColor3f(0, 1, 0);
        glBegin(GL_POLYGON);
        glVertex2i(300, 50);
        glVertex2i(350, 50);
        glVertex2i(350, 80);
        glVertex2i(300, 80);
        glEnd();
    }
    if (pp == 8) {
        glColor3f(0, 1, 0);
        glBegin(GL_POLYGON);
        glVertex2i(350, 50);
        glVertex2i(400, 50);
        glVertex2i(400, 80);
        glVertex2i(350, 80);
        glEnd();
    }
    if (pp == 9) {
        glColor3f(0, 1, 0);
        glBegin(GL_POLYGON);
        glVertex2i(400, 50);
        glVertex2i(450, 50);
        glVertex2i(450, 80);
        glVertex2i(400, 80);
        glEnd();
    }
    if (pp == 10) {
        glColor3f(0, 1, 0);
        glBegin(GL_POLYGON);
        glVertex2i(450, 50);
        glVertex2i(500, 50);
        glVertex2i(500, 80);
        glVertex2i(450, 80);
        glEnd();
    }
    if (pp == 11) {
        glColor3f(0, 1, 0);
        glBegin(GL_POLYGON);
        glVertex2i(500, 50);
        glVertex2i(550, 50);
        glVertex2i(550, 80);
        glVertex2i(500, 80);
        glEnd();
    }
    if (pp == 12) {
        glColor3f(0, 1, 0);
        glBegin(GL_POLYGON);
        glVertex2i(550, 50);
        glVertex2i(600, 50);
        glVertex2i(600, 80);
        glVertex2i(550, 80);
        glEnd();
    }
}

void winF() {
    if (win == 8) {
        char ch[120] = "YOU CLEARED LEVEL 2";
        display_string(20, 300, ch, 1);
        pm1 = 0;
        //platform movement counter of level 1 is set to zero when won
        char ch1[120] = "PRESS n TO PLAY AGAIN";
        display_string(20, 100, ch1, 2);
        char ch2[120] = "PRESS b TO PLAY NEXT LEVEL";
        display_string(20, 80, ch2, 2);
        char chk[100] = "PRESS q TO EXIT";
        display_string(20, 60,chk , 2);
        glutIdleFunc(NULL);
    }
    if (win2 == 5) {
        char j[200] = "YOU CLEARED LEVEL 1!";
        display_string(20, 300,j, 1);
        pm2 = 0;
                      //platform movement counter of level 2 is set to zero when won
        char k[200] = "PRESS m TO PLAY AGAIN";
        display_string(20, 100,k, 2);
        char km[200] = "PRESS n TO PLAY NEXT LEVEL";
        display_string(20, 80,km , 2);
        char kk[200] = "PRESS q TO EXIT";
        display_string(20, 60,kk , 2);
        glutIdleFunc(NULL);
    }
    if (win3 == 6) {
        char s[200] = "YOU CLEARED LEVEL 3!";
        display_string(20, 300, s, 1);
        char lk[200] = "YOU CLEARED THE GAME!";
        display_string(20, 270,lk , 1);
        pm3 = 0;
        char hb[200] = "PRESS b TO PLAY AGAIN";//platform movement counter of level 3 is set to zero when won
        display_string(20, 100, hb, 2);
        char lss[200] = "PRESS q TO EXIT";
        display_string(20, 80,lss, 2);
        glutIdleFunc(NULL);
    }
}

void loss() {
    if (pm1 >= 11) {
        char ps[200] = "YOU LOST LEVEL 2!!!!(you ran out of moves)";
        display_string(20, 300,ps , 1);
        char kkm[200] = "PRESS n TO PLAY AGAIN";
        display_string(20, 100,kkm, 2);
        char mxn[200] = "PRESS q TO EXIT";
        display_string(20, 80, mxn, 2);
        //int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0;    Not required
        ww1 = 1; //make the w key unusable
        glutPostRedisplay();
        glutIdleFunc(NULL);
    }
    if (pm2 >= 12) {
        char ksn[200] = "YOU LOST LEVEL 1!!!!(you ran out of moves)";
        display_string(20, 300,ksn , 1);
        char kxb[200] = "PRESS m TO PLAY AGAIN";
        display_string(20, 100, kxb, 2);
        char muey[200] = "PRESS q TO EXIT";
        display_string(20, 80, muey, 2);
        //int count21=0,count22=0,count23=0,count24=0,count25=0;   Not required
        ww2 = 1;  //make the w key unusable
        glutPostRedisplay();
        glutIdleFunc(NULL);
    }

    if (pm3 >= 11) {
        char kss[200] = "YOU LOST LEVEL 3!!!!(you ran out of moves)";
        display_string(20, 300,kss , 1);
        char nbx[200] = "PRESS b TO PLAY AGAIN";
        display_string(20, 100, nbx, 2);
        char nxb[200] = "PRESS q TO EXIT";
        display_string(20, 80,nxb , 2);
        ww3 = 1;   //make the w key unusable
        //int count31=0,count32=0,count33=0,count34=0,count35=0,count36=0;     Not required
        glutPostRedisplay();
        glutIdleFunc(NULL);
    }
}

void alwaysDisplay() {
    if (gs == 0) {
        char ni[200] = "PRESS m TO START NEW GAME";
        display_string(150, 700,ni, 1);
        char n8[200] = "Rules:";
        display_string(100, 620,n8, 1);
        char n0[200] = ">>There are 3 Levels in the game";
        display_string(100, 590, n0, 1);
        char m2[200] = ">>Press 'w' to shoot the arrow which is invisible";
        display_string(100, 570,m2 , 1);
        char m9[200] = ">>Press 'a' to move the platform left";
        display_string(100, 550,m9 , 1);
        char m27[200] = ">>Press 'd' to move the platform right";
        display_string(100, 530, m27, 1);
        char m77[200]="The twist in the game is:";
        display_string(100, 510,m77 , 1);
        char m22[200] = ">>There are infinite invisible arrows";
        display_string(100, 490, m22, 1);
        char m21[200] = ">>The challenge is to destroy the targets ";
        display_string(100, 470, m21, 1);
        char m210[200] = "within given moves";
        display_string(100, 450,m210 , 1);

    }
    if (lev == 2) {   //lev1 and lev2 was interchanged
        char jj[200] = "LEVEL 1";
        display_string(250, 700, jj, 1);
        char n[200] = "Total Moves:11";
        display_string(480, 700, n, 2);
    }
    if (lev == 1) {   //lev1 and lev2 was interchanged
        char kkh[200] = "LEVEL 2";
        display_string(250, 700,kkh , 1);
        char lm[200] = "Total Moves:12";
        display_string(480, 700, lm, 2);
    }
    if (lev == 3) {   //lev1 and lev2 was interchanged
        char mx[200] = "LEVEL 3";
        display_string(250, 700, mx, 1);
        char x9[200] = "Total Moves:11";
        display_string(480, 700,x9 , 2);
    }

    //code for border 2 line loops
    glColor3b(1, 1, 1);
    glBegin(GL_LINE_LOOP);
    glLineWidth(5);
    glVertex2d(10, 10);
    glVertex2d(10, 740);
    glVertex2d(640, 740);
    glVertex2d(640, 10);
    glVertex2d(10, 10);
    glEnd();
    glColor3b(0, 1, 0);
    glBegin(GL_LINE_LOOP);
    glLineWidth(5);
    glVertex2d(15, 15);
    glVertex2d(15, 735);
    glVertex2d(635, 735);
    glVertex2d(635, 15);
    glVertex2d(15, 15);
    glEnd();
}

void frontscreen()
{
    glClear(GL_COLOR_BUFFER_BIT);

    print_text(184, 480, college, 0.0, 0.0, 1.0);              //displays college name
    print_text(180, 450, dept, 0.7, 0.0, 1.0);                 //displays dept.
    print_text(210, 390, title, 0.0, 0.0, 0.0);             //displays project name
    print_text(20, 375, dash, 0.0, 0.0, 0.0);              //displays dashes
    print_text(130, 355, heading, 0.0, 0.0, 0.0);
    print_text(20, 340, dash, 0.0, 0.0, 0.0);//displays heading of table
    print_text(130, 320, name1, 0.0, 0.0, 0.0);           //displays  name1 in table
    print_text(130, 295, name2, 0.0, 0.0, 0.0);           //displays name2 in table
    print_text(130, 273, name3, 0.0, 0.0, 0.0);           //displays name3 in table
    print_text(130, 248, name4, 0.0, 0.0, 0.0);            //displays name4 in table
    print_text(20, 230, dash, 0.0, 0.0, 0.0);//displays dashes
    print_text(130, 210, heading2, 0.0, 0.0, 0.0);
    print_text(20, 190, dash, 0.0, 0.0, 0.0);
    print_text(130, 170, lname, 0.0, 0.0, 0.0);
    print_text1(200, 150, ledu, 0.0, 0.0, 0.0);
    print_text1(135, 135, deptname, 0.0, 0.0, 0.0);
    print_text1(130, 118, clgname, 0.0, 0.0, 0.0);
    print_text(200, 80, emsg, 1.0, 0.1, 1.0);                 //displays "enter msg"
    glFlush();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    if (fs == 1) {               //fs-> front screen if it is 1 then the project is set to display only the frontpage
        frontscreen();         //code block(function) written to display the content of front page
    }
    else {                   //'fs' is set to zero when 't' key is pressed on the keyboard
        target();           //The code block(function) where the targets(blocks) fro every level is present in
        platform(pp);       //the code block(function) where the code for 12 positions of platform is written in pp->platform position
        winF();               //code to check if any level has been won
        loss();                 //code to check if any level has been lost
        alwaysDisplay();        //alwaysDisplay which display total moves & border of the game
        glFlush();
    }
}

void init()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 0);
    glLoadIdentity();
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 600, 0, 600);
}

void keys(unsigned char k, int x, int y)
{
    switch (k) {
    case 'n': /* new game */

        lev = 1;
        //set the win or loss counter to zero
        win2 = 0;  //all win needs to be set to zero or the remain in same position even when new game is clicked
        win = 0;          //same
        win3 = 0;     //same
        pp = 6;       //pp -> platform position should be set to the middle of the screen which is 6th position/12 positions
        pm2 = 0;      //platform movement counter should be reset
        pm1 = 0;      //platform movement counter should be reset
        pm3 = 0;      //platform movement counter should be reset

        ww1 = 0; //make the w key usable
        //The level 2 targets are set to '1' which means they are all present
        count1 = 1, count2 = 1, count3 = 1, count4 = 1, count5 = 1, count6 = 1, count7 = 1, count8 = 1;

        break;
    case 'a':
        if (lev == 1) {     //In level one, increase the count(movement of blocks) pm->Platform movemnt
            pm1++;
        }
        if (lev == 2) {     //In level two, increase the count(movement of blocks) pm->Platform movemnt
            pm2++;
        }
        if (lev == 3) {     //In level three, increase the count(movement of blocks) pm->Platform movemnt
            pm3++;
        }
        pp = pp - 1;
        glutPostRedisplay();
        break;
    case 'd':
        if (lev == 1) {
            pm1++;
        }
        if (lev == 2) {
            pm2++;
        }
        if (lev == 3) {
            pm3++;
        }
        pp = pp + 1;
        glutPostRedisplay();
        break;
    case 'm':
        gs = 1;    //the m-> new game should disappear
        lev = 2;
        win2 = 0;  //all win needs to be set to zero or the remain in same position even when new game is clicked
        win = 0;   //same
        win3 = 0;  //same
        pp = 6;
        pm2 = 0;
        pm1 = 0;
        pm3 = 0;
        count21 = 1, count22 = 1, count23 = 1, count24 = 1, count25 = 1;
        ww2 = 0;
        glutPostRedisplay();
        break;

    case 'b':
        lev = 3;
        win2 = 0;  //all win needs to be set to zero or the remain in same position even when new game is clicked
        win = 0;          //same
        win3 = 0;     //same
        pp = 6;
        pm2 = 0;
        pm1 = 0;
        pm3 = 0;
        ww3 = 0;
        count31 = 1, count32 = 1, count33 = 1, count34 = 1, count35 = 1, count36 = 1;
        break;
    case 't':
        fs = 0;

    case 'w': //fire arrow (destroy targets)
        //pp->platform position and countXX ->block present('1') or not('0')
        //level 1 destroy blocks
        if (ww1 == 0) {
            if (pp == 3 && count1 == 1) {
                count1 = 0;
                win += 1;
            }
            if (pp == 3 && count2 == 1) {
                count2 = 0;
                win += 1;
            }
            if (pp == 4 && count3 == 1) {
                count3 = 0;
                win += 1;
            }
            if (pp == 6 && count4 == 1) {
                count4 = 0;
                win += 1;
            }
            if (pp == 7 && count5 == 1) {
                count5 = 0;
                win += 1;
            }
            if (pp == 8 && count6 == 1) {
                count6 = 0;
                win += 1;
            }
            if (pp == 9 && count7 == 1) {
                count7 = 0;
                win += 1;
            }
            if (pp == 10 && count8 == 1) {
                count8 = 0;
                win += 1;
            }
            glutPostRedisplay();
        }
        //level 2 destroy blocks
        if (ww2 == 0) {
            if (pp == 4 && count21 == 1) {
                count21 = 0;
                win2 += 1;
            }
            if (pp == 2 && count22 == 1) {
                count22 = 0;
                win2 += 1;
            }
            if (pp == 6 && count23 == 1) {
                count23 = 0;
                win2 += 1;
            }
            if (pp == 7 && count25 == 1) {
                count25 = 0;
                win2 += 1;
            }
            if (pp == 9 && count24 == 1) {
                count24 = 0;
                win2 += 1;
            }
            glutPostRedisplay();
        }

        //level 3 destroy blocks

        if (ww3 == 0) {
            if (pp == 3 && count31 == 1) {
                count31 = 0;
                win3 += 1;
            }
            if (pp == 4 && count32 == 1) {
                count32 = 0;
                win3 += 1;
            }

            if (pp == 9 && count33 == 1) {
                count33 = 0;
                win3 += 1;
            }
            if (pp == 7 && count34 == 1) {
                count34 = 0;
                win3 += 1;
            }
            if (pp == 8 && count35 == 1) {
                count35 = 0;
                win3 += 1;
            }
            if (pp == 10 && count36 == 1) {
                count36 = 0;
                win3 += 1;
            }
            glutPostRedisplay();
        }
        break;
    case 'q':		/* quit game */
        exit(0);
    }
}

int main(int argc, char** argv)       //main function of the game
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(650, 750);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Archery Game With A Twist");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keys);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
