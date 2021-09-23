/*
program to draw a Ellipse using MidPoint Algorithm
*/

#include <stdio.h>
#include <math.h>
#include <graphics.h>

struct point {
	int x;
	int y;
}c;

main()
{
	int gd=DETECT,gm;
	int a,b,x,y,run = 1;
	float p;
	while(run)
	{
		printf("\nMidPoint Ellipse Algorithm\n");
		printf("Enter Center Point (x,y) : ");
		scanf("%d %d",&c.x,&c.y);
		flushall();
		printf("Enter a : ");
		scanf("%d",&a);
		printf("Enter b : ");
		scanf("%d",&b);
		run =0;
		initgraph(&gd,&gm,"c:\\turboc3\\BGI");//initializes the graph
		p = b*b + ((float) a*a / (float)4)- (b*a*a);
		x=0;
		y=b;
		//R1
		while(2.0*x*b*b<=2.0*y*a*a)
		{
			delay(10);//for seeing the line drawing process slowly.
			putpixel(c.x+x,c.y+y,2);
			putpixel(c.x+x,c.y-y,4);
			putpixel(c.x-x,c.y+y,6);
			putpixel(c.x-x,c.y-y,8);
			x++;
			if(p>=0){
				//y--;
				p = p + b*b* ( 2.0 * x + 1.0) - 2.0*a*a*y;
				y--;
			}
			else{
				p = p + b*b* ( 2.0 * x + 1.0);
			}
		}
		p = b*b*(x +0.5)*(x+0.5)  + (float)a*a*(y-1)*(y-1) - (float)a*a*b*b;
		//R2
		while(y>0)
		{
			delay(10);//for seeing the line drawing process slowly.
			putpixel(c.x+x,c.y+y,2);
			putpixel(c.x+x,c.y-y,4);
			putpixel(c.x-x,c.y+y,6);
			putpixel(c.x-x,c.y-y,8);
			y--;
			if(p>0){
				p = p + a*a*(1.0-2.0*y);
			}
			else{
				//x++;
				p = p + b*b*(2.0*x) + a*a*(1.0-2.0*y);
				x++;
			}
		}
		outtextxy(300,20,"MidPoint Ellipse Algorithm "); // for printing text at desired screen location.
		putpixel(c.x,c.y,WHITE);
		outtextxy(c.x+5,c.y+5,"C(x,y)");
		getch();
		closegraph();
	}
	if(run == 0){
		printf("To Re Run Enter 1 : ");
		scanf("%d",&run);
		run = (run == 1)?1:0;
	}
	return 0;
}