/*program to draw a C-Curve of nth order*/

#include <stdio.h>
#include <math.h>
#include <graphics.h>

void C_Curve(struct point p,double len,double angle,int n);

struct point {
	double x;
	double y;
}p;

double ANGLE = M_PI / 180;

main()
{
	int gd=DETECT,gm;
	int n,run = 1;
	double l,a;
	while(run){
	run = 0;
	/*
	printf("Enter x value :");
	scanf("%d",&p.x);
	printf("Enter y value :");
	scanf("%d",&p.y);
	printf("Enter Line length - l value :");
	scanf("%d",&l);
	printf("Enter angle - a value :");
	scanf("%d",&a);
	*/
	printf("Enter the Order of C-Curve - n value :");
	scanf("%d",&n);
	//*/
	///*
	p.x = 200;
	p.y = 200;
	l = 100;
	a = 0;
	//n = 2;
	//*/
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	C_Curve(p,l,a,n);
	getch();
	closegraph();
	printf("To Run Again Press 1 :");
	scanf("%d",&run);
	}
	return 0;
}

void C_Curve(struct point p,double len,double angle,int n){
	if(n>0){
		len /= sqrt(2);
		C_Curve(p,len,angle + 45,n-1);
		p.x += len * cos(ANGLE*(angle+45));
		p.y += len * sin(ANGLE*(angle+45));
		C_Curve(p,len,angle - 45,n-1);
	}
	else{
		line(p.x,p.y,p.x+len * cos(ANGLE*angle),p.y+len * sin(ANGLE*angle));
	}
}
