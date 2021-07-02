<<<<<<< HEAD
/*program to fill different types of geometric shapes 
using Flood Fill Algorithm*/

#include <stdio.h>
#include <math.h>
#include <graphics.h>

struct point {
	int x;
	int y;
}c;

void recur_4_fill(struct point,int);
void face();

main()
{
	int gd=DETECT,gm;
	struct point start = {100,100};
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	ellipse(100,90,0,360,20,20);
	recur_4_fill(start,3);
	rectangle(150,170,200,210);
	start.x = 190;
	start.y = 200;
	recur_4_fill(start,12);
	face();
	start.x = 320;
	start.y = 150;
	recur_4_fill(start,11);
	getch();
	closegraph();
	return 0;
}

void recur_4_fill(struct point s,int col){
	int curr = getpixel(s.x,s.y);
	struct point k = s;
	delay(1);
	if(curr == 0)
	{
		putpixel(s.x,s.y,col);
		k.x++;
		recur_4_fill(k,col);
		k.x--;
		k.y++;
		recur_4_fill(k,col);
		k.y--;
		k.x--;
		recur_4_fill(k,col);
		k.x++;
		k.y--;
		recur_4_fill(k,col);
	}
}
void face(void ){
	ellipse(320,150,0,360,20,30);
	ellipse(310,144,0,360,6,12);
	ellipse(330,144,0,360,6,12);
	line(320,152,322,155);
	line(322,155,318,160);
	ellipse(320,152,240,300,14,12);
	ellipse(320,152,240,300,12,14);
=======
/*program to fill different types of geometric shapes 
using Flood Fill Algorithm*/

#include <stdio.h>
#include <math.h>
#include <graphics.h>

struct point {
	int x;
	int y;
}c;

void recur_4_fill(struct point,int);
void face();

main()
{
	int gd=DETECT,gm;
	struct point start = {100,100};
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	ellipse(100,90,0,360,20,20);
	recur_4_fill(start,3);
	rectangle(150,170,200,210);
	start.x = 190;
	start.y = 200;
	recur_4_fill(start,12);
	face();
	start.x = 320;
	start.y = 150;
	recur_4_fill(start,11);
	getch();
	closegraph();
	return 0;
}

void recur_4_fill(struct point s,int col){
	int curr = getpixel(s.x,s.y);
	struct point k = s;
	delay(1);
	if(curr == 0)
	{
		putpixel(s.x,s.y,col);
		k.x++;
		recur_4_fill(k,col);
		k.x--;
		k.y++;
		recur_4_fill(k,col);
		k.y--;
		k.x--;
		recur_4_fill(k,col);
		k.x++;
		k.y--;
		recur_4_fill(k,col);
	}
}
void face(void ){
	ellipse(320,150,0,360,20,30);
	ellipse(310,144,0,360,6,12);
	ellipse(330,144,0,360,6,12);
	line(320,152,322,155);
	line(322,155,318,160);
	ellipse(320,152,240,300,14,12);
	ellipse(320,152,240,300,12,14);
>>>>>>> 3c8525462b19caa9badab577be89ca147fea8ef2
}