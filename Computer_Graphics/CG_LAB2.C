/*
2 . program to draw a line using Bresenham’s Line Algorithm (BLA) 
for lines with slopes negative and less than 1.
*/

#include <stdio.h>
#include <math.h>
#include <graphics.h>

struct point {
	int x;
	int y;
} temp;

struct point a,b;
main()
{
	int gd=DETECT,gm;
	int dx,dy,p,x,y,run = 1;
	while(run)
	{
		printf("\n\nBresenham Line Algorithm\n\tFor Slope Negative and Less than 1\n");
		printf("Enter Point 1 (x,y) : ");
		scanf("%d %d",&a.x,&a.y);
		printf("Enter Point 2 (x,y) : ");
		scanf("%d %d",&b.x,&b.y);
		dx = b.x-a.x ;
		dy = b.y-a.y ;
		//check dx and dy - slope 
		if((( dy < dx ) && ((dy > 0 && dx > 0 ) )||( ( dy > dx ) && (dy < 0 && dx < 0)) ) )
		{
			//if dy and sx negative -> exchange points and recaluculate dx dy
			if(( dy > dx ) && (dy < 0 && dx < 0)){
				temp = a;
				a = b;
				b = temp;
				dx = b.x-a.x ;
				dy = b.y-a.y ;
			}
			initgraph(&gd,&gm,"c:\\turboc3\\BGI");//initializes the graph
			p = (2 *dy) - dx;
			x = a.x ;
			y = a.y ;
			while(x<=b.x)
			{
				delay(5);                       //for seeing the line drawing process slowly.
				putpixel(x++,y,10);
				if(p<0)
					p = p + (2*dy);
				else{
					p = p + 2 * (dy- dx);
					y++;
				}
			}
			outtextxy(300,20,"Bresenham's Line Algorithm (BLA)"); // for printing text at desired screen location.
			outtextxy(a.x+5,a.y-5,"(x1,y1)");
			outtextxy(b.x-143,b.y-5," -ve slope -> (");
			outtextxy(b.x-150,b.y+15,"(and slope < 1)");
			outtextxy(b.x+5,b.y+5,"(x2,y2)");
			getch();
			closegraph();
		}
		else{
			printf("Slope is Not Negative and Not Less than 1\n\a");
		}
		printf("To Re Run Enter 1 : ");
		scanf("%d",&run);
		run = (run == 1)?1:0;
	}
	return 0;
}
