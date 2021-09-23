/*
program to draw a ellipse using Polynomial Method
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
	//double
	while(run == 1)
	{
		printf("\nPolynomial Ellipse Algorithm\n");
		printf("Enter Center Point (x,y) : ");
		scanf("%d %d",&c.x,&c.y);
		flushall();
		printf("Enter a : ");
		scanf("%d",&a);
		printf("Enter b : ");
		scanf("%d",&b);
		flushall();
		initgraph(&gd,&gm,"c:\\turboc3\\BGI");//initializes the graph
		x=0;
		y=b;
		while(x<a)
		{
			delay(10);//for seeing the line drawing process slowly.
			putpixel(c.x+x,c.y+y,2);
			putpixel(c.x+x,c.y-y,4);
			putpixel(c.x-x,c.y+y,6);
			putpixel(c.x-x,c.y-y,8);
			x++;
			y=(int)(b*sqrt(((a*a)-(x*x*1.0))/(a*a)) + 0.5);
			//y = b * sqrt(((double)((a*a)-(x*x*1.0)))/(double)(a*a));
		}
		outtextxy(250,20,"Polynomial Method Ellipse Algorithm "); // for printing text at desired screen location.
		putpixel(c.x,c.y,WHITE);
		outtextxy(c.x+5,c.y+5,"C(x,y)");
		getch();
		closegraph();
		run = 0;
		if(run == 0){
			printf("To Re Run Enter 1 : ");
			scanf("%d",&run);
			run = (run == 1)?1:0;
		}
	}
	return 0;
}