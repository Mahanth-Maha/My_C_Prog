
#include <stdio.h>
#include <math.h>
#include <graphics.h>


struct point {
	int x;
	int y;
}c;

void recurse_surround_Check(struct point );
void recurse_surround_Check2(struct point );
void floodFill(int x,int y);

main()
{
    int gd=DETECT,gm;
    struct point start = {100,100};
    initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	//check for rectangle
	//rectangle(90,80,110,120);
	//recurse_surround_Check(start);
	//check for circle - NOT WORKING
	ellipse(100,90,0,360,20,20);
	//recurse_surround_Check2(start);
	floodFill(start.x,start.y);
    getch();
	closegraph();
	return 0;
}
// Tested both Recursive calls its killing it due to Stack overflow of Function Calls
// Lesson 1 : Dont use Recurssion eventhough its simple :)

void recurse_surround_Check(struct point s){
    int curr;
    int m,n;
    struct point newp;
    if((s.x <= getmaxx() && s.y >=0) && s.y <= getmaxy() && s.y >= 0){
        curr = getpixel(s.x,s.y);
        if(!curr)
            putpixel(s.x,s.y,12);
        delay(10);
        for(m = -1;m<=1;m++){
            for(n = -1;n<=1;n++){
                if(m == 0 && n == 0)
                    continue;
                newp.x = s.x + m;
                newp.y = s.y + n;
                curr = getpixel(newp.x, newp.y);
                if(!curr){
                    recurse_surround_Check(newp);
                }
            }
        }
    }
}
void recurse_surround_Check2(struct point s){
    int curr;
    int m,n;
    struct point newp;
    if((s.x <= getmaxx() && s.y >=0) && s.y <= getmaxy() && s.y >= 0){
        curr = getpixel(s.x,s.y);
        if(!curr)
            putpixel(s.x,s.y,12);
        delay(10);
        for(m = -1;m<=1;m++){
            for(n = -1;n<=1;n++){
                if(m == 0 || n == 0 )
                    continue;
                newp.x = s.x + m;
                newp.y = s.y + n;
                curr = getpixel(newp.x, newp.y);
                if(!curr){
                    recurse_surround_Check2(newp);
                }
            }
        }
    }
}
 
void floodFill(int x,int y){
	if(getpixel(x,y) == 0)
	{
		putpixel(x,y,12);
		floodFill(x+1,y);
		floodFill(x,y+1);
		floodFill(x-1,y);
		floodFill(x,y-1);
	}
}