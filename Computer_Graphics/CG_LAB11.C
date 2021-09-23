/*
program to draw a ellipse using Trigonometric Method
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
	int a,b,x,y,run = 1,A;
	double padding = 0.5;
	//1 degree = 2*pi / r
	double n = M_PI / 180;

	while(run == 1)
	{
		printf("\nTrigonometric Ellipse Algorithm\n");
		printf("Enter Center Point (x,y) : ");
		scanf("%d %d",&c.x,&c.y);
		flushall();
		printf("Enter value a : ");
		scanf("%d",&a);
		flushall();
		printf("Enter value b : ");
		scanf("%d",&b);
		flushall();
		initgraph(&gd,&gm,"c:\\turboc3\\BGI");//initializes the graph
		//Q1 belw teta -> 0 - 45
		for( A =0; A<= 90 ;A++)
		{
			x = (int) (a*sin(n * A) + padding);
			y = (int) (b*cos(n * A) + padding);
			delay(10);//for seeing the line drawing process slowly.
			//put pixels in all octenmts
			putpixel(c.x+x,c.y+y,2);
			putpixel(c.x+x,c.y-y,4);
			putpixel(c.x-x,c.y+y,6);
			putpixel(c.x-x,c.y-y,8);
		}            
		outtextxy(250,20,"Trigonometric Method Ellipse Algorithm "); // for printing text at desired screen location.
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