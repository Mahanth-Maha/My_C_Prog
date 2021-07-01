/*
program to draw a circle using Bresenham’s Circle Algorithm.
*/

#include <stdio.h>
#include <math.h>
#include <graphics.h>

void Draw_Circle_BCA(struct point c,int r);
void Draw_Circle_MidPoint(struct point c,int r);

struct point {
	int x;
	int y;
}c;

main()
{
	int gd=DETECT,gm;
	int r,p,x,y,k,run = 1;
	while(run==1){
		run  = 0 ;
	printf("Circle Fill \n");
	printf("Enter Center Point (x,y) : ");
	scanf("%d %d",&c.x,&c.y);
	printf("Enter radius r : ");
	scanf("%d ",&r);
	flushall();
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");//initializes the graph
	for(k = 1; k<=r;k++)
		//Draw_Circle_BCA(c,k);
		Draw_Circle_BCA(c,k);
	outtextxy(300,20,"BCA circle Fill"); // for printing text at desired screen location.
	putpixel(c.x,c.y,WHITE);
	outtextxy(c.x-r,c.y+r+10,"Circle Filled");
	getch();
	closegraph();
	printf("Run Again - Enter 1 :");
	scanf("%d",&run);
	}
	return 0;
}

void Draw_Circle_BCA(struct point c,int r){
	int p,x,y;
	p = 3 - 2*r;
	x=0;
	y=r;
	while(x<y)
	{
		delay(20);//for seeing the line drawing process slowly.
		putpixel(c.x+x,c.y+y,1);
		putpixel(c.x-x,c.y+y,2);
		putpixel(c.x+x,c.y-y,3);
		putpixel(c.x-x,c.y-y,4);
		putpixel(c.x+y,c.y+x,5);
		putpixel(c.x-y,c.y+x,6);
		putpixel(c.x+y,c.y-x,7);
		putpixel(c.x-y,c.y-x,8);
		x++;
		if(p>0){
			p = p + 4*(x - y) + 10;
			y--;
		}
		else{
			p = p +4 * x + 6;
		}
	}
}
void Draw_Circle_MidPoint(struct point c,int r){
	int p,x,y;
	p = 5/4 - r;
	x=0;
	y=r;
	while(x<y)
	{
		delay(20);//for seeing the line drawing process slowly.
		putpixel(c.x+x,c.y+y,1);
		putpixel(c.x-x,c.y+y,2);
		putpixel(c.x+x,c.y-y,3);
		putpixel(c.x-x,c.y-y,4);
		putpixel(c.x+y,c.y+x,5);
		putpixel(c.x-y,c.y+x,6);
		putpixel(c.x+y,c.y-x,7);
		putpixel(c.x-y,c.y-x,8);
		x++;
		if(p>0){
			p = p + 2*(x - y) + 1;
			y--;
		}
		else{
			p = p + 2*x + 3;
		}
	}
}