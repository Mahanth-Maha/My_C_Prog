/*
program to draw a circle using MidPoint Circle Algorithm
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
	int r,p,x,y,run = 1;
	while(run)
	{
		printf("\nMidPoint Circle Algorithm\n");
		printf("Enter Center Point (x,y) : ");
		scanf("%d %d",&c.x,&c.y);
		printf("Enter radius r : ");
		scanf("%d",&r);
		//printf("Enter 1 To Continue ");
		if(run)
		{
			run = 0;
			flushall();
			initgraph(&gd,&gm,"c:\\turboc3\\BGI");//initializes the graph
			p = 5/4 - r;
			//p = 1 - r
			x=0;
			y=r;
			while(x<y)
			{
				delay(20);//for seeing the line drawing process slowly.
				putpixel(c.x+x,c.y+y,1);	//put pixels in all octenmts
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
			outtextxy(300,20,"MidPoint Circle Algorithm "); // for printing text at desired screen location.
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
	}
	return 0;
}