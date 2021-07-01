//RECTANGLE using BLA

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <graphics.h>


struct point {
	int x;
	int y;
};

void maxxypoint(struct point *a,struct point  *b);
float slope (struct point a,struct point b);
float myabs(int m);
int absmax(int m,int n);
struct point * BLA_Positive_EqualTo_1(struct point * plots,struct point a,struct point b);
struct point * BLA_Negative_EqualTo_1(struct point * plots,struct point a,struct point b);
struct point * BLA_Negative_LessThan_1(struct point * plots,struct point a,struct point b);
struct point * BLA_Negative_GreaterThan_1(struct point * plots,struct point a,struct point b);
struct point * BLA_Positive_LessThan_1(struct point * plots,struct point a,struct point b);
struct point * BLA_Positive_GreaterThan_1(struct point * plots,struct point a,struct point b);
struct point * BLA(struct point a,struct point b);


main()
{
	struct point a,b ,* pixels,p1,p2,p3,p4;
	int i,n,d=5,run = 1;
	int gd = DETECT , gm;
	while(run == 1){
	run = 0;
	printf("BLA - RECTANGLE\n");
	printf("Enter Point 1 (x,y)");
	scanf("%d %d",&a.x,&a.y);
	printf("Enter Point 2 (x,y)");
	scanf("%d %d",&b.x,&b.y);
	printf("a (%d %d) b  (%d %d) ",a.x,a.y,b.x,b.y);
	maxxypoint(&a,&b);
	printf("a (%d %d) b  (%d %d) ",a.x,a.y,b.x,b.y);
	//printf("Slope is %6.2f",slope(a,b));
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");//initializes the graph
	if(!(a.x > b.x && a.y >b.y )){
		p1.x = a.x;
		p1.y = a.y;
		p2.x = b.x;
		p2.y = a.y;
		p3.x = b.x;
		p3.y = b.y;
		p4.x = a.x;
		p4.y = b.y;
		pixels = BLA(p1,p2);
		n = absmax(p2.x-p1.x,p2.y-p1.y);
		for(i=0;i<n;i++)
		{
		putpixel(pixels[i].x,pixels[i].y,RED);
		delay(d);
		}
		pixels = BLA(p2,p3);
		n = absmax(p3.x-p2.x,p3.y-p2.y);
		for(i=0;i<n;i++)
		{
		putpixel(pixels[i].x,pixels[i].y,GREEN);
		delay(d);
		}
		pixels = BLA(p1,p4);
		n = absmax(p4.x-p1.x,p4.y-p1.y);
		for(i=0;i<n;i++)
		{
		putpixel(pixels[i].x,pixels[i].y,YELLOW);
		delay(d);
		}
		pixels = BLA(p4,p3);
		n = absmax(p3.x-p4.x,p3.y-p4.y);
		for(i=0;i<n;i++)
		{
		putpixel(pixels[i].x,pixels[i].y,WHITE);
		delay(d);
		}
	}
	outtextxy(250,25,"RECTANGLE using BLA"); // for printing text at desired screen location.
	outtextxy(a.x+7,a.y-7,"(x1,y1)");
	outtextxy(b.x+7,b.y+7,"(x2,y2)");
	getch();
	closegraph();
	printf("To Re-Run Enter 1 : ");
	scanf("%d",&run);
	}
	return 0;
}


void maxxypoint(struct point *a,struct point  *b){
	struct point temp;
	if ((a->x > b->x && a->y > b->y )|| (a->x > b->x && a->y < b->y ) ){
	temp = *b;
	*b = *a;
	*a = temp;
	}
}
float slope (struct point a,struct point b){
	return (float)(b.y-a.y)/(float)(b.x-a.x);
}
float myabs(int m){
	return (m > 0)?m:(m*-1);
}
int absmax(int m,int n){
    return (abs(m)>abs(n))?m:n;
}

struct point * BLA_Positive_EqualTo_1(struct point * plots,struct point a,struct point b)
{
    int plotindex = 0,x = a.x,y = a.y;
    //printf("\nPositive Equal To 1 => Q1 above\n");
    while(x<=b.x)
    {
	plots[plotindex].x = x++;
	plots[plotindex++].y = y++;
    }
    return plots;
}
struct point * BLA_Negative_EqualTo_1(struct point * plots,struct point a,struct point b)
{
    int plotindex = 0,x = a.x,y = a.y;
    //printf("\nNegative & Equal To 1 => Q1 below\n");
    while(x<=b.x)
    {
	plots[plotindex].x = x++;
	plots[plotindex++].y = y--;
    }
    return plots;
}
struct point * BLA_Negative_LessThan_1(struct point * plots,struct point a,struct point b)
{
    int dx = b.x-a.x , dy = b.y-a.y,p = (2 * dy) - dx,x =a.x ,y = a.y , plotindex = 0;
    //printf("\nNegative Less than 1 => Q1 below\n");
    while(x<=b.x)
    {
	plots[plotindex].x = x++;
	plots[plotindex++].y = y;
	if(p < 0)
	    p = p - (2*dy);
	else{
	    p = p - 2*(dy + dx);
	    y--;
	}
	//printf("p -> %d\n",p);
    }
    return plots;
}
struct point * BLA_Negative_GreaterThan_1(struct point * plots,struct point a,struct point b)
{
    int dx = b.x-a.x , dy = b.y-a.y,p = (2 *dy) - dx,x =a.x ,y = a.y , plotindex =0;
    //printf("\nNegative and Greaterthan 1 => Q2 above \n");
    while(y>=b.y)
    {
	plots[plotindex].y = y--;
	plots[plotindex++].x = x;
	if(p<0)
	    p = p + 2*dx;
	else{
	    p = p + 2*(dx + dy);
	    x++;
	}
	//printf("p -> %d (%d %d)\n",p,x-1,y);
    }
    return plots;
}
struct point * BLA_Positive_LessThan_1(struct point * plots,struct point a,struct point b)
{
    int dx = b.x-a.x , dy = b.y-a.y,p = (2 *dy) - dx,x =a.x ,y = a.y , plotindex =0;
    //printf("\nPositive Less than 1 => Q1 below \n");
    while(x<=b.x)
    {
	plots[plotindex].x = x++;
	plots[plotindex++].y = y;
	if(p<0)
	    p = p + (2*dy);
	else{
	    p = p + (2*dy) - (2*dx);
	    y++;
	}
	//printf("p -> %d\n",p);
    }
    return plots;
}
struct point * BLA_Positive_GreaterThan_1(struct point * plots,struct point a,struct point b)
{
    int dx = b.x-a.x , dy = b.y-a.y,p = (2 *dx) - dy,x =a.x ,y = a.y , plotindex =0;
    //printf("\nPositive and Greaterthan 1 => Q2 above \n");
    while(y<=b.y)
    {
	plots[plotindex].y = y++;
	plots[plotindex++].x = x;
	if(p<0)
	    p = p + 2*dx;
	else{
	    p = p + 2*(dx -dy);
	    x++;
	}
	//printf("p -> %d (%d %d)\n",p,x-1,y);
    }
    return plots;
}
struct point * BLA(struct point a,struct point b){
    int dx = b.x-a.x , dy = b.y-a.y,i;
    float m;
    struct point * plots = (struct point *)calloc(abs(absmax(dx,dy)),sizeof(struct point));
    for(i=0;i<absmax(b.x-a.x,b.y-a.y);i++) {
	plots[i].x = 0;
	plots[i].y = 0;
    }
    m =slope(a,b);
    if(m == 1){
	plots =  BLA_Positive_EqualTo_1(plots,a,b);
    }
    else if(m == -1)
    {
	plots = BLA_Negative_EqualTo_1(plots,a,b);
    }
    else if(m > 0 ){
	plots = ( m < 1 )?BLA_Positive_LessThan_1(plots,a,b):BLA_Positive_GreaterThan_1(plots,a,b);
    }
    else
    {
	plots = ( myabs(m) < 1 )?BLA_Negative_LessThan_1(plots,a,b):BLA_Negative_GreaterThan_1(plots,a,b);
    }
    return plots;
}

