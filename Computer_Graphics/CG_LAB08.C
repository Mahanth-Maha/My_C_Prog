/*
program to draw a circle using Trigonometric Method
*/

#include <stdio.h>
#include <math.h>
#include <graphics.h>

//#define M_PI        3.14159265358979323846

struct point {
	int x;
	int y;
}c;

main()
{
	int gd=DETECT,gm;
	int r,p,x,y,run = 1,padding=0.5,T;
	//1 degree = 2*pi / r
	double n = M_PI / 180;

	while(run == 1)
	{
		printf("\nTrigonometric Circle Algorithm\n");
		printf("Enter Center Point (x,y) : ");
		scanf("%d %d",&c.x,&c.y);
		flushall();
		printf("Enter radius r : ");
		scanf("%d",&r);
		flushall();
		initgraph(&gd,&gm,"c:\\turboc3\\BGI");//initializes the graph
		//Q1 belw teta -> 0 - 45
		for( T =0; T<= 45 ;T++)
		{
			x = (int) (r*sin(n * T) + padding);
			y = (int) (r*cos(n * T) + padding);
			delay(10);//for seeing the line drawing process slowly.
			putpixel(c.x+x,c.y+y,1);	//put pixels in all octenmts
			putpixel(c.x-x,c.y+y,2);
			putpixel(c.x+x,c.y-y,3);
			putpixel(c.x-x,c.y-y,4);
			putpixel(c.x+y,c.y+x,5);
			putpixel(c.x-y,c.y+x,6);
			putpixel(c.x+y,c.y-x,7);
			putpixel(c.x-y,c.y-x,8);
		}
		outtextxy(250,20,"Trigonometric Method Circle Algorithm "); // for printing text at desired screen location.
		putpixel(c.x,c.y,WHITE);
		outtextxy(c.x+5,c.y+5,"C(x,y)");
		getch();
		closegraph();
		run =0;
		if(run == 0){
			printf("To Re Run Enter 1 : ");
			scanf("%d",&run);
			run = (run == 1)?1:0;
		}
	}
	return 0;
}