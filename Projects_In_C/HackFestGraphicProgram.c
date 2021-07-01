#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

//********************************      SCREEN  RESOLUTION     639->X-Axis;   479->Y-Axis   ******************************** 
void main(void)
{
    int gdriver = DETECT, gmode;
    clrscr();
	//To Run this Program it is required to mention TurboC\BGI folder to make the compiler link program , so check the folder position and mention below.
    initgraph(&gdriver, &gmode, "c:\\TURBOC3\\BGI");
	//Code Goe here
	
    getch();
    closegraph();
}



void human(int xc,int yc)
{
	ellipse(134+xc,306+yc,0,360,4,5);
	line(130+xc,306+yc,124+xc,306+yc);
	line(130+xc,306+yc,124+xc,306+yc);
	line(130+xc,306+yc,124+xc,306+yc);
	line(130+xc,306+yc,124+xc,306+yc);
	line(130+xc,306+yc,124+xc,306+yc);
	line(130+xc,306+yc,124+xc,306+yc);
	line(130+xc,306+yc,124+xc,306+yc);
	line(130+xc,306+yc,124+xc,306+yc);
	line(130+xc,306+yc,124+xc,306+yc);
}