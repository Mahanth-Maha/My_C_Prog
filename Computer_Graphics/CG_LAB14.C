/*program to fill different types of geometric shapes 
using  Fill Algorithm*/

#include <stdio.h>
#include <math.h>
#include <graphics.h>

struct point {
	int x;
	int y;
}c;

void b_4_fill(struct point s,int ,int );
void face();

main()
{
	int gd=DETECT,gm;
	struct point start = {100,100};
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	ellipse(100,90,0,360,20,20);
	b_4_fill(start,RED,15);
	rectangle(150,170,200,210);
	start.x = 190;
	start.y = 200;
	b_4_fill(start,GREEN,15);
	face();
	start.x = 320;
	start.y = 150;
	b_4_fill(start,CYAN,15);
	getch();
	closegraph();
	return 0;
}

void face(void ){
	ellipse(320,150,0,360,20,30);
	ellipse(310,144,0,360,6,12);
	ellipse(330,144,0,360,6,12);
	line(320,152,322,155);
	line(322,155,318,160);
	ellipse(320,152,240,300,14,12);
	ellipse(320,152,240,300,12,14);
}

void b_4_fill(struct point s,int f_color,int b_color)
{
	if(getpixel(s.x,s.y)!=b_color && getpixel(s.x,s.y)!=f_color)
	{
		delay(2);
		putpixel(s.x,s.y,f_color);
		s.x++;
		b_4_fill(s,f_color,b_color);
		s.x--;
		s.y++;
		b_4_fill(s,f_color,b_color);
		s.y--;
		s.x--;
		b_4_fill(s,f_color,b_color);
		s.x++;
		s.y--;
		b_4_fill(s,f_color,b_color);
	}
}