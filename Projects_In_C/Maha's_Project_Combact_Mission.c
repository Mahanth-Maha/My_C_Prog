#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>




/////////////////SCREEN RESOLUTION 639->X-Axis;479->Y-Axis////////////////////
void main(void)
{
    int xc,xy,i,j,ey;               //variable declaration


    //functions Declaration
    void heli(int xc,int xy);
    void thread(int xc,int yc);
    void jump(int xc,int yc);
    void hlpad(int xc,int yc);
    void hero(int xc,int yc);
    void legsp1(int xc,int yc);
    void legsp2(int xc,int yc);
    void gun1(int xc,int yc);
    void gun2(int xc,int yc);
    void e1blt(int xc,int yc);
    void heroblt(int xc,int yc);
    void enemy1(void);
    void enemy2(int xc,int yc);
    void e2p1(int xc,int yc);
    void e2p2(int xc,int yc);
    void e2blt(int xc,int yc);
    void stone1(int xc,int yc);
    void stone2(int xc,int yc);
    void crate(int xc,int yc);
    void sun(int xc,int yc);
    void bush(int xc,int yc);
    void plant1(int xc,int yc);
    void plant2(int xc,int yc);
    void hide1(int xc,int xy);
    void hide2(int xc,int xy);
    void grass(int xc,int xy);
    void tree1(int x,int y);
    void clouds1(int xc,int xy);
    void clouds2(int xc,int xy);
    void cloudb1(int xc,int xy);
    void cloudb2(int xc,int xy);
    void tnt(int xc,int yc);
    void enemydb(int xc,int yc);
    void enemyds(int xc,int yc);
    void alert(void);
    void fence(int xc,int yc);
    void cctv(int xc,int yc);
    void maincc(int xc,int yc);
    void maincb(int xc,int yc);
    void para(int xc,int yc);
    void heropara(int xc,int yc);
    void tent(int xc,int yc);
    void alarm(void);
    void panzer(int xc,int yc);
    void pzrbig(int xc,int yc);
    void pzrd(int xc,int yc);

    void scene6(int x);
    void scene7(int x);
    void scene8(void);

    void msncmp(void);
    void end1(void);
    void end2(void);

    int gdriver = DETECT, gmode;
    clrscr();
    initgraph(&gdriver, &gmode, "c:\\TC\\BGI");
///////////////////////+++++++++++++ SCENES +++++++++++///////////////////////
    //SCENE 1 : The HELICOPTER TAKEOFF
    //SCENE 2 : JUMPING OUT
    //SCENE 3 : JUMPING HERO FROM HELI
    //SCENE 4 : OPENING PARACHUTE AND LANDING
    //SCENE 5 : GOING TOWARDS TERRORIST
    //SCENE 6 : SHOOTING ENEMY1 (FIRING AND APPRAOCH)
    //SCENE 7 : SHOOTING CC TV AT FENCE
    //SCENE 8 : ENTER INTO FENCE KILLING ENMEMY2
    //SCENE 9 : ALARM AND PICKING TNT
    //SCENE 10 : ALARM SCENE "ALERT" SYMBOL
    //SCENE 11 : PANZERS  ENTRY
    //SCENE 12 : DESTROY PANZERS
    //SCENE 13 : DESTROY ALL ENEMY TENTS
    //SCENE 14 : SOS-BACK TO HOME BY HELI (RE ENTRY)-ROPE-CLIMB-MOVE
    //SCENE 15 : CARD "MISSION COMPLETED"
    //SCENE 16 : DESCRIPTION  '''NAMES''    ---MAHA---
    //SCENE 17 : DESCRIPTION  '''NAMES''  ---Team Mates---
    //SCENE 18 : THE END -  THANK YOU
////////////////*************     THE PROGRAM    *************////////////////////

///////////////-------  SCENE 1 : The HELI TAKEOFF  ------------/////////////


     for(i=0;i<=200;i=i+5)
     {
      hero(0+i,-20);
      gun1(0+i,-20);
      if(i%2==0)
      {
       legsp1(0+i,-20);
      }
      else
      {
       legsp2(0+i,-20);
      }

      hlpad(100,50);
      heli(90,120);
      grass(0,0);
      grass(30,20);
      grass(400,100);
      grass(-45,-30);
      grass(-10,30);
      grass(350,50);
      grass(500,90);
      grass(-85,30);
      bush(-300,-40);
      bush(300,50);
      delay(250);

      cleardevice();

     }

      hlpad(100,50);
      heli(90,120);
      grass(0,0);
      grass(30,20);
      grass(400,100);
      grass(-45,-30);
      grass(-10,30);
      grass(350,50);
      grass(500,90);
      grass(-85,30);
      bush(-300,-40);
      bush(300,50);

    delay(600-i);
    for(i=1;i<=200;i=i+5)
    {
     sound(0+i);
     delay(50);
     nosound();
    }
    nosound();
    delay(50);
    cleardevice();
    nosound();
    for(i=0;i<=100;i=i+5)
    {
     hlpad(100,50);
     heli(90,120-i);
     if(i%20==0)
      {
      setcolor(CYAN);
      setlinestyle(1,1,1);
      arc(95,213-i,290,330,17);
      arc(95,213-i,105,170,30);
      setlinestyle(0,1,1);
      }
     grass(0,0);
     grass(30,20);
     grass(400,100);
     grass(-45,-30);
     grass(-10,30);
     grass(350,50);
     grass(500,90);
     grass(-85,30);
     bush(-300,-40);
     bush(300,50);

     sound(200+i);
     delay(50);
     cleardevice();
     nosound();
    }

    for(i=0;i<=300;i=i+5)
    {
     hlpad(100,50);
     heli(90+i,20-i);
     if(i%2==0)
      {
      setcolor(CYAN);
      setlinestyle(1,1,1);
      arc(95+i,113-i,290,330,17);
      arc(95+i,113-i,105,170,30);
      setlinestyle(0,1,1);
      }
     grass(0,0);
     grass(30,20);
     grass(400,100);
     grass(-45,-30);
     grass(-10,30);
     grass(350,50);
     grass(500,90);
     grass(-85,30);
     bush(-300,-40);
     bush(300,50);

     sound(300);
     delay(50);
     cleardevice();
     nosound();
    }


///////////////-------------  SCENE 2 : JUMPING OUT  -----------/////////////////
     for(i=0;i<=300;i=i+5)
    {
       heli(-310+i,300-i);
       if(i%20==0)
      {
      setcolor(CYAN);
      setlinestyle(1,1,1);
      arc(-275+i,390-i,290,330,17);
      arc(-275+i,390-i,105,180,30);
      setlinestyle(0,1,1);
      }
       sound(300);
       clouds1(100,200);
       delay(50);
       nosound();
       cleardevice();

    }
    for(i=-10;i<=600;i=i+5)
    {
      if(i%20==0)
      {
	 ey=-2;
      }
      else
      {
	 ey=2;
      }
      if(i%20==0)
      {
      setcolor(CYAN);
      setlinestyle(1,1,1);
      arc(10+i,93+ey,290,330,17);
      arc(10+i,93+ey,105,180,30);
      setlinestyle(0,1,1);
      }
      heli(i,ey);
      clouds1(100,70);
      cloudb1(100,50);
      clouds2(-20,-40);
      sound(300);
      delay(50);
      nosound();

      cleardevice();
    }
    for(i=-200;i<=300;i=i+5)
    {
      if(i%20==0)
      {
	 ey=-2;
      }
      else
      {
	 ey=2;
      }
      if(i%20==0)
      {
      setcolor(CYAN);
      setlinestyle(1,1,1);
      arc(10+i,93+ey,290,330,17);
      arc(10+i,93+ey,75,180,30);
      setlinestyle(0,1,1);
      }
      heli(i,ey);
      clouds1(-100,100);
      clouds2(-30,-80);
      cloudb1(-100,40);
      clouds2(500,270);
      sound(300);
      delay(50);
      nosound();
      cleardevice();

    }



/////////--------- SCENE 3 : JUMPING HERO FROM HELI ---------//////////////////


    for(i=0;i<=200;i++){
    sound(600);
    heli(300,0);
    clouds1(-100,100);
    clouds2(-30,-80);
    cloudb1(-100,40);
    clouds2(500,270);
    delay(2);
    nosound();          }

    for(i=0;i<=400;i=i+5)
    {
     jump(400-i,140+i);
     delay(1);
     heli(300+i,5-i);
     clouds1(-100,100);
     clouds2(-30,-80);
     cloudb1(-100,40);
     clouds2(500,270);
     sound(500);
     delay(50);
     cleardevice();
     nosound();
    }

    for(i=0;i<=400;i++)
    {
    jump(400-i,-60+i);
    clouds1(-120,-100);
    clouds2(-30,-80);
    clouds1(200,-40);
    clouds2(500,270);
    clouds1(-200,60);
    clouds2(430,-10);
    cloudb1(50,0);
    clouds2(-10,270);
    delay(10);
    sound(300);
    cleardevice();
    }


    nosound();









////////-------- SCENE 4 : OPENING PARACHUTE AND LANDING ------/////////////
    for(i=0;i<=200;i++)
    {
     jump(400-i,-60+i);
     clouds1(-120,-100);
     clouds2(-30,-80);
     clouds1(200,-40);
     clouds2(500,270);
     clouds1(-200,60);
     clouds2(430,-10);
     cloudb1(50,0);
     clouds2(-10,270);
     delay(10);
     sound(300);
     cleardevice();
    }
    nosound();
    sound(3000);
     jump(200,140);
     clouds1(-120,-100);
     clouds2(-30,-80);
     clouds1(200,-40);
     clouds2(500,270);
     clouds1(-200,60);
     clouds2(430,-10);
     cloudb1(50,0);
     clouds2(-10,270);
    delay(500);
    nosound();

    for(i=0;i<=300;i=i+5)
    {
     clouds1(-120,-100);
     clouds2(-30,-80);
     clouds1(200,-40);
     clouds2(500,270);
     clouds1(-200,60);
     clouds2(430,-10);
     cloudb1(50,0);
     clouds2(-10,270);
     para(-100-i,30+i);
     heropara(-100-i,30+i);
     if(i==0)
     {
       sound(3000);
       delay(1000);
       nosound();
     }
     delay(100);
     cleardevice();

    }

      for(i=1;i<=500;i=i+5)
      {
	para(0-i,-100+i);
	heropara(0-i,-100+i);
	//clouds1(-120,-100);
	clouds2(-30+i/5,-80);
	//clouds1(220,-40);
	clouds2(450+i/20,270);
	clouds1(-200+i/5,60+i/50);
	clouds2(430+i/5,-10);
	cloudb1(70,0);
	clouds2(10,270);

	delay(100);
	cleardevice();
      }

    for(i=1;i<=500;i=i+5)
    {
	 para(300-i,-400+i);
	 heropara(300-i,-400+i);
     clouds2(-30+i/30,-80+i/100);
     clouds1(200+i/5,-40);
     clouds2(500+i/20,20+i/50);
     clouds1(-200+i/5,-160);
     clouds2(430+i/5,-10);

     clouds2(40+i/15,70);
     grass(387,45);
     grass(252,15);
     grass(453,-15);
     grass(267,31);
     grass(134,-18);
     grass(187,22);
     grass(215,-25);
     grass(347,23);
     grass(225,27);
     grass(347,35);
     grass(457,54);
     grass(612,32);
     grass(547,-5);
     grass(87,45);
     grass(-52,15);
     grass(-53,-15);
     grass(67,31);
     grass(-34,-18);
     grass(187,22);
     grass(-15,-25);
     grass(47,23);
     grass(-25,27);
     grass(-47,35);
     grass(57,54);
     grass(112,32);
     grass(47,-5);
     grass(-87,28);
     bush(200,40);
     plant2(100,10);
	 delay(100);
	 cleardevice();
   }

    for(i=0;i<=100;i=i+5);
    {
     heropara(-200-i,100);
     para(-200-i,100);
     clouds2(0+i/5,0-i/25);
     clouds1(-100+i/5,-200-i/25);
     clouds2(-30+i/30,-80+i/100);
     clouds1(200+i/5,-40);
     clouds2(500+i/20,20+i/50);
     clouds1(-200+i/5,-160);
     clouds2(430+i/5,-10);
     clouds2(40+i/20,70);
     grass(387,45);
     grass(387,45);
     grass(252,15);
     grass(453,-15);
     grass(267,31);
     grass(134,-18);
     grass(187,22);
     grass(215,-25);
     grass(347,23);
     grass(225,27);
     grass(347,35);
     grass(457,54);
     grass(612,32);
     grass(547,-5);
     grass(87,45);
     grass(-52,15);
     grass(-53,-15);
     grass(67,31);
     grass(-34,-18);
     grass(187,22);
     grass(-15,-25);
     grass(47,23);
     grass(-25,27);
     grass(-47,35);
     grass(57,54);
     grass(112,32);
     grass(47,-5);
     grass(-87,28);
     bush(400,40);
     plant2(100,10);
     bush(200,40);
     plant1(400,-10);
     bush(-40,11);
       delay(100);
       cleardevice();
    }

   for(i=1;i<=500;i=i+5)
    {
     hero(0-i/50,0+i/50);
     legsp1(0-i/50,0+i/50);
     clouds2(-30+i/30,-80+i/100);
     clouds1(200+i/5,-40);
     clouds2(500+i/20,20+i/50);
     clouds1(-200+i/5,-160);
     clouds2(430+i/5,-10);
     clouds2(40,70);
     grass(387,45);
     grass(252,15);
     grass(453,-15);
     grass(267,31);
     grass(134,-18);
     grass(187,22);
     grass(215,-25);
     grass(347,23);
     grass(225,27);
     grass(347,35);
     grass(457,54);
     grass(612,32);
     grass(547,-5);
     grass(87,45);
     grass(-52,15);
     grass(-53,-15);
     grass(67,31);
     grass(-34,-18);
     grass(187,22);
     grass(-15,-25);
     grass(47,23);
     grass(-25,27);
     grass(-47,35);
     grass(57,54);
     grass(112,32);
     grass(47,-5);
     grass(-87,28);
     bush(200,40);
     plant1(400,-10);
     bush(-40,11);

      para(-300-i,100+i/5);
      delay(100);
      cleardevice();
    }






      cleardevice();
///////////------ SCENE 5 : GOING TOWARDS TERRORIST ----------//////////////////////////

    for(i=1;i<=200;i=i+5)
    {
     clouds2(-30+i/30,-80+i/100);
     clouds1(200+i/5,-40);
     clouds2(500+i/20,20+i/50);
     clouds1(-200+i/5,-160);
     clouds2(430+i/5,-10);
     clouds2(40+i/5,70);
      hero(0+i,50);
      gun1(0+i,50);
      if(i%2==0)
      {
       legsp1(0+i,50);
      }
      else
      {
       legsp2(0+i,50);
      }
       tree1(200,30);
      tree1(500,-30);

      grass(0,0);
      grass(30,20);
      grass(400,100);
      grass(-45,-30);
      grass(-10,30);
      grass(350,50);
      grass(500,90);

     grass(387,45);
     grass(252,15);
     grass(453,-15);
     grass(267,31);
     grass(134,-18);
     grass(187,22);
     grass(215,-25);
     grass(347,23);
     grass(225,27);
     grass(347,35);
     grass(457,54);
     grass(612,32);
     grass(547,-5);
     grass(87,45);
     grass(-52,15);
     grass(-53,-15);
     grass(67,31);
     grass(-34,-18);
     grass(187,22);
     grass(-15,-25);
     grass(47,23);
     grass(-25,27);
     grass(-47,35);
     grass(57,54);
     grass(112,32);
     grass(47,-5);
     grass(-87,28);

      delay(200);
      cleardevice();
    }

     for(i=1;i<=50;i=i+5)
    {
     clouds2(-20+i/30,-80+i/100);
     clouds1(210+i/5,-40);
     clouds2(510+i/20,25+i/50);
     clouds1(-220+i/5,-160);
     clouds2(450+i/5,-10);
     clouds2(50+i/5,70);
      hero(200+i,50-i);
      gun1(200+i,50-i);
      if(i%2==0)
      {
       legsp1(200+i,50-i);
      }
      else
      {
       legsp2(200+i,50-i);
      }
      tree1(200,30);
      tree1(500,-30);
      grass(0,0);
      grass(30,20);
      grass(400,100);
      grass(-45,-30);
      grass(-10,30);
      grass(350,50);
      grass(500,90);

     grass(387,45);
     grass(252,15);
     grass(453,-15);
     grass(267,31);
     grass(134,-18);
     grass(187,22);
     grass(215,-25);
     grass(347,23);
     grass(225,27);
     grass(347,35);
     grass(457,54);
     grass(612,32);
     grass(547,-5);
     grass(87,45);
     grass(-52,15);
     grass(-53,-15);
     grass(67,31);
     grass(-34,-18);
     grass(187,22);
     grass(-15,-25);
     grass(47,23);
     grass(-25,27);
     grass(-47,35);
     grass(57,54);
     grass(112,32);
     grass(47,-5);
     grass(-87,28);

      delay(200);
      cleardevice();
    }
    for(i=100;i<=300;i=i+5)
    {
     clouds2(0+i/30,-80+i/100);
     clouds1(250+i/50,-40);
     clouds2(600+i/70,20+i/50);
     clouds1(-100+i/50,-160);
     clouds2(530+i/50,-10);
     clouds2(80+i/50,70);
      hero(250-i/20,0);
      gun1(250-i/20,0);
      if(i%2==0)
      {
       legsp1(250-i/20,0);
      }
      else
      {
       legsp2(250-i/20,0);
      }

       tree1(200-i,30);
      tree1(500-i,-30);
      grass(0-i,0);
      grass(30-i,20);
      grass(400-i,100);
      grass(-45-i,-30);
      grass(-10-i,30);
      grass(350-i,50);
      grass(500-i,90);

     grass(387-i,45);
     grass(252-i,15);
     grass(453-i,-15);
     grass(267-i,31);
     grass(134-i,-18);
     grass(187-i,22);
     grass(215-i,-25);
     grass(347-i,23);
     grass(225-i,27);
     grass(347-i,35);
     grass(457-i,54);
     grass(612-i,32);
     grass(547-i,-5);
     grass(87-i,45);
     grass(-52-i,15);
     grass(-53-i,-15);
     grass(67-i,31);
     grass(-34-i,-18);
     grass(187-i,22);
     grass(-15-i,-25);
     grass(47-i,23);
     grass(-25-i,27);
     grass(-47-i,35);
     grass(57-i,54);
     grass(112-i,32);
     grass(47-i,-5);
     grass(-87-i,28);
      scene6(630-i);

      delay(200);
      cleardevice();
    }

    for(i=300;i<=630;i=i+5)
    {
     clouds2(0+i/30,-80+i/100);
     clouds1(250+i/50,-40);
     clouds2(600+i/70,20+i/50);
     clouds1(-100+i/50,-160);
     clouds2(530+i/50,-10);
     clouds2(80+i/50,70);
      hero(535-i,0);
      gun1(535-i,0);
      if(i%2==0)
      {
       legsp1(535-i,0);
      }
      else
      {
       legsp2(535-i,0);
      }

       tree1(200-i,30);
      tree1(500-i,-30);
      grass(0-i,0);
      grass(30-i,20);
      grass(400-i,100);
      grass(-45-i,-30);
      grass(-10-i,30);
      grass(350-i,50);
      grass(500-i,90);

     grass(387-i,45);
     grass(252-i,15);
     grass(453-i,-15);
     grass(267-i,31);
     grass(134-i,-18);
     grass(187-i,22);
     grass(215-i,-25);
     grass(347-i,23);
     grass(225-i,27);
     grass(347-i,35);
     grass(457-i,54);
     grass(612-i,32);
     grass(547-i,-5);
     grass(87-i,45);
     grass(-52-i,15);
     grass(-53-i,-15);
     grass(67-i,31);
     grass(-34-i,-18);
     grass(187-i,22);
     grass(-15-i,-25);
     grass(47-i,23);
     grass(-25-i,27);
     grass(-47-i,35);
     grass(57-i,54);
     grass(112-i,32);
     grass(47-i,-5);
     grass(-87-i,28);
      scene6(630-i);
      if(i>600)
      {
	enemy1();
      }
      delay(200);
      cleardevice();
    }


///////----- SCENE 6 : SHOOTING ENEMY1 (FIRING AND APPRAOCH) -----////////////

    clouds2(600,20);
    clouds1(-100,-160);
    clouds2(530,-10);
    clouds2(80,70);
    hero(-45,30);
    gun1(-45,30);
    legsp1(-45,30);
    enemy1();
    scene6(0);
    delay(1000);
    cleardevice();



    for(i=0;i<=150;i=i+5)
    {
      scene6(0);

      if(i%10==0)
      {
	j=4;
      }
      else
      {
	 j=-4;
      }
      hero(-45,30+j);
      gun1(-45,30+j);
      if(i%2==0)
      {
       legsp1(-45,30+j);
      }
      else
      {
       legsp2(-45,30+j);
      }
      clouds2(600+i/70,20+i/50);
      clouds1(-100+i/50,-160);
      clouds2(530+i/50,-10);
      clouds2(80+i/50,70);
      if(i<=100)
      {
	heroblt(0+i*4,50);
	sound(4444);
	delay(100);
	nosound();
      }
      if(i>100)
      {
	//sound(444);
	enemyds(500,0);
	delay(200);
	nosound();
      }
      else
      {
	enemy1();
	enemy1();
      }

      e1blt(0-i*4,0);


      delay(200);
      cleardevice();
    }

     for(i=0;i<=500;i=i+5)
    {
      scene6(0);

      hero(-45+i,30);
      gun1(-45+i,30);
      if(i%2==0)
      {
       legsp1(-45+i,30);
      }
      else
      {
       legsp2(-45+i,30);
      }
      clouds2(600+i/70,20+i/50);
      clouds1(-100+i/50,-160);
      clouds2(530+i/50,-10);
      clouds2(80+i/50,70);
      enemyds(500,0);

      delay(200);

      cleardevice();
    }


///////----- SCENE 7 : SHOOTING CC TV AT THE FENCE -------////////////////
     scene7(0);
     for(i=0;i<=100;i=i+5)
    {
      scene7(0);
      tnt(350,-70);
      tnt(376,-82);

      maincc(120,-30);
      rectangle(370,415,380,280);
      hero(-200+i,30);
      gun1(-200+i,30);
      gun2(460,-60);
      if(i%2==0)
      {
       legsp1(-200+i,30);
      }
      else
      {
       legsp2(-200+i,30);
      }
      clouds2(600+i/70,20+i/50);
      clouds1(-100+i/50,-160);
      clouds2(530+i/50,-10);
      clouds2(80+i/50,70);
      delay(200);
      cleardevice();
    }
    for(i=0;i<=220;i=i+5)
    {
      hero(-100,0);
      legsp1(-100,0);
      gun1(-100,0);
      gun2(460,-60);
      heroblt(-100+i*2,0-i/2);
      tnt(350,-70);
      tnt(376,-82);
      scene7(0);
      rectangle(370,415,380,280);
      maincc(120,-30);
      delay(100);
      cleardevice();
    }

      hero(-100,0);
      legsp2(-100,0);
      gun1(-100,0);
      gun2(460,-60);
      scene7(0);
      rectangle(370,415,380,280);
      maincb(120,-30);
      sound(1000);
      delay(500);
      nosound();
      cleardevice();
  j=0;
  while(j<4)
  {
    for(i=0;i<=150;i=i+5)
    {
      hero(-100,0);
      legsp2(-100,0);
      gun1(-100,0);
      gun2(460,-60);
      heroblt(-100+i*2,0);
      tnt(350,-70);
      tnt(376,-82);
      scene7(0);
      rectangle(370,415,380,280);
      maincb(120,-30);
      delay(50);
      cleardevice();
    }
    j++;
   }
   for(i=0;i<=120;i=i+10)
    {
      hero(-100,0);
      legsp1(-100,0);
      gun1(-100,0);
      scene7(0);
      gun2(460,-60);
      maincb(120,-30);
      tnt(350,-70);
      tnt(376,-82);
      line(380,415,380+i,280+i);
      line(370+i,280+i,380+i,280+i);
      line(370,415,370+i,280+i);
      line(370,415,380,415);
      clouds2(0-i/30,-80-i/100);
     clouds1(250-i/50,-40);
     clouds2(600-i/70,20-i/50);
     clouds1(-100-i/50,-160);
     clouds2(530-i/50,-10);
     clouds2(80-i/50,70);



      delay(100);
      cleardevice();

    }





   for(i=0;i<=500;i=i+5)
    {
      hero(-100+i,0);
      if(i%2==0)
      {
	legsp1(-100+i,0);
      }
      else
      {
	legsp2(-100+i,0);
      }
      gun1(-100+i,0);
      gun2(460,-60);
      scene7(0);
      tnt(350,-70);
      tnt(376,-82);

      maincb(120,-30);
      line(380,415,500,400);
      line(490,400,500,400);
      line(370,415,490,400);
      line(370,415,380,415);

      delay(200);
      cleardevice();

    }

    for(i=0;i<=60;i=i+5)
    {
      hero(400+i,0-i);
      if(i%2==0)
      {
	legsp1(400+i,0-i);
      }
      else
      {
	legsp2(400+i,0-i);
      }
      gun1(400+i,0-i);
      gun2(460,-60);
      scene7(0);
      tnt(350,-70);
      tnt(376,-82);

      maincb(120,-30);
      line(380,415,500,400);
      line(490,400,500,400);
      line(370,415,490,400);
      line(370,415,380,415);

      delay(200);
      cleardevice();

    }
    for(i=0;i<=60;i=i+5)
    {
      hero(460-i,-60+i);
      if(i%2==0)
      {
	legsp1(460-i,-60+i);
      }
      else
      {
	legsp2(460-i,-60+i);
      }
      gun1(460-i,-60+i);
      gun2(460-i,-60+i);
      scene7(0);
      tnt(360-i,-80+i);
      tnt(376,-82);

      maincb(120,-30);
      line(380,415,500,400);
      line(490,400,500,400);
      line(370,415,490,400);
      line(370,415,380,415);

      delay(200);
      cleardevice();

    }

    for(i=0;i<=200;i=i+5)
    {
      hero(400+i,0);
      if(i%2==0)
      {
	legsp1(400+i,0);
      }
      else
      {
	legsp2(400+i,0);
      }
      gun1(400+i,0);
      gun2(400+i,0);
      scene7(0);
      tnt(300+i,-20);
      tnt(376,-82);

      maincb(120,-30);
      line(380,415,500,400);
      line(490,400,500,400);
      line(370,415,490,400);
      line(370,415,380,415);

      delay(200);
      cleardevice();

    }





   cleardevice();
/////---------- SCENE 8 : ENTER INTO FENCE KILLING ENMEMY2 -----//////////////

    for(i=0;i<=50;i=i+5)
    {
      hero(-100+i,0);
      if(i%2==0)
      {
	legsp1(-100+i,0);
      }
      else
      {
	legsp2(-100+i,0);
      }
      gun1(-100+i,0);
      gun2(-100+i,0);
      scene8();
      enemy2(60,40);
      enemy2(200,60);
      e2p1(60,40);
      e2p1(200,60);
      tnt(-200+i,-20);
      delay(200);
      cleardevice();
    }
    j=1;
    for(i=0;i<=400;i=i+5)
    {
      hero(-50,0+j);
      if(i%2==0)
      {
	legsp1(-50,0+j);
      }
      else
      {
	legsp2(-50,0+j);
      }
      gun1(-50,0+j);
      gun2(-50,0+j);
      scene8();
      tnt(-150,-20+j);
      j=j+1;
      ey=0;
      if(i>=100 && i<220)
      {
	 heroblt(-150+i,20);
      }
      if(i>=150 && i<380)
      {
	 heroblt(-150+i,50);
      }
      if(i>=100 && i<150)
      {
	 enemy2(60,40);
	 enemy2(200,60);
	 e2p2(60,40);
	 e2p1(200,60);
	 e2blt(160-i,40);

      }
      else if(i>=150 && i<200)
      {
	 enemy2(60,40);
	 enemy2(200,60);
	 e2p2(60,40);
	 e2p2(200,60);
	 e2blt(210-i,40);
      }
      else if(i>=200)
      {
	if(i<=220)
	{
	 enemy2(60,40);
	 e2p2(60,40);
	}
	else
	{
	 enemyds(160,50);
	}
	 enemy2(200,60);

	 e2p2(200,60);
	 e2blt(210-i,40);
	 e2blt(50-i*2,60);
      }
      else
      {
      enemy2(60,40);
      enemy2(200,60);
      e2p1(60,40);
      e2p1(200,60);
      }
      delay(200);
      cleardevice();

    }



/////////////------------- SCENE 9 : ALARM  -----------------/////////////////////
      alarm();
      cleardevice();

//////////--------- SCENE 10 : ALARM SCENE "ALERT" SYMBOL ----------///////////
      alert();
      cleardevice();



///////////////------------SCENE 11 : PANZERS  ENTRY -------------//////////////
      for(i=0;i<=900;i=i+20)
      {
	pzrbig(500-i,0);
	if(i%40==0)
	{
	 circle(155+500-i,320,20);
	 circle(230+500-i,320,20);
	 circle(305+500-i,320,20);
	 circle(380+500-i,320,20);
	 circle(455+500-i,320,20);
	 circle(530+500-i,320,20);
	}
       for(j=-100;j<=700;j=j+25)
       {
	grass(-12+j,10);
	grass(-26+j,17);
	grass(-31+j,13);
       }
       clouds2(300,-30);
	 sound(100+i/100);
	 delay(200);
	 cleardevice();
     }
     j=0;
      for(i=0;i<=700;i=i+5)
      {
	panzer(300-i-j,0);
	 if(i%2==0)
	 {

	 circle(365+300-i-j,360,5);
	 circle(390+300-i-j,360,5);
	 circle(415+300-i-j,360,5);
	 circle(440+300-i-j,360,5);
	 circle(465+300-i-j,360,5);
	 }
	 panzer(500-i-j,0);
	 if(i%2==0)
	 {

	 circle(365+500-i-j,360,5);
	 circle(390+500-i-j,360,5);
	 circle(415+500-i-j,360,5);
	 circle(440+500-i-j,360,5);
	 circle(465+500-i-j,360,5);
	 }

       for(ey=-100;ey<=700;ey=ey+25)
       {
	grass(-12+ey,0);
	grass(-26+ey,3);

       }
       sun(0,0);
       clouds2(-20,0);
       clouds1(100,-100);
       clouds2(200,15);
       clouds2(450,10);
       clouds2(344,2);
       clouds2(600,1);
       tree1(100,-40);

	 if(i<400)
	 sound(444+j);
	 else if(i<550)
	 sound(333+i/10);
	 else
	 sound(222+j/5);
	 delay(200);
	 cleardevice();
	 j=j+2;
     }
     nosound();


/////////////--------  SCENE 12 : DESTROY PANZERS  with TNT ------------------
//----------------------------------&-------------------------------------------
//--------- SCENE 13 : DESTROY ALL ENEMY TENTS  with MISSILE LANCHER----////////


    for(i=0;i<=180;i=i+5)
    {
    hero(50-i/5,60-i/10);
    //gun1(50,60);
    if(i%2==0)
    {
    legsp1(50-i/5,60-i/10);
    }
    else
    {
    legsp2(50-i/5,60-i/10);
    }
    gun2(50-i/5,60-i/10);
    if(i<=80)
    {
    tnt(50+i,-10-i/5);
    }
    if(i>80 && i<=150)
    {
     tnt(50+i,-10-16+i/5);
    }
    if(i>150)
    {
     tnt(50+150-i/30,-10+i/5);
    }
    //else

    scene8();
    setcolor(WHITE);
    rectangle(549,200,551,375);
    rectangle(545,200,555,190);
    line(545,190,545,183);
    line(555,190,555,183);
    ellipse(550,183,0,180,5,7);
    maincc(100,-10);
    line(405+100,220-10,440+100,240-10);
    line(415+100,220-10,445+100,230-10);
    line(545,220,548,225);
    line(540,230,548,235);
    line(545,220,540,230);
    enemyds(160,30);
    enemydb(110,60);
	 panzer(300-i,30);
	 if(i%2==0)
	 {

	 circle(365+300-i,390,5);
	 circle(390+300-i,390,5);
	 circle(415+300-i,390,5);
	 circle(440+300-i,390,5);
	 circle(465+300-i,390,5);
	 }
	 panzer(400-i,90);
	 if(i%2==0)
	 {

	 circle(365+400-i,450,5);
	 circle(390+400-i,450,5);
	 circle(415+400-i,450,5);
	 circle(440+400-i,450,5);
	 circle(465+400-i,450,5);
	 }


     delay(200);

     cleardevice();
    }

  for(i=0;i<=300;i=i+5)
    {
    hero(14,42);
    gun1(14,42);
    legsp1(14,42);
    gun2(14,42);
    tnt(50+150,-10+34);
    scene8();
    panzer(300-180,30);
    panzer(400-180,90);
    setcolor(WHITE);
    rectangle(549,200,551,375);
    rectangle(545,200,555,190);
    line(545,190,545,183);
    line(555,190,555,183);
    ellipse(550,183,0,180,5,7);
    maincc(100,-10);

    line(405+100,220-10,440+100,240-10);
    line(415+100,220-10,445+100,230-10);
    line(545,220,548,225);
    line(540,230,548,235);
    line(545,220,540,230);
    enemyds(160,30);
    enemydb(110,60);
    if(i>100 && i<250)
    {
    sound(50+i);
    }
    if(i>250)
    {
    sound(300-i);
    }
    setcolor(YELLOW);
    circle(410,395,i/5);
   // setfillstyle(SOLID_FILL,YELLOW);
    //floodfill(410,395,15);
    if(i>100)
    setcolor(RED);
    circle(460,325,i);
    circle(460,325,i+2);
    circle(460,325,i+3);
    circle(460,325,i+4);
    circle(460,325,i+1);
    circle(360,325,i);
    circle(360,325,i+1);
    circle(360,325,i+2);
    circle(360,325,i+3);
    circle(360,325,i+4);
    circle(360,325,i+5);
    cloudb1(0,-i/5);
    cloudb2(-25,-i/5);
    cloudb2(25,-i/5);
    //cleardevice();
    }
    nosound();
   cleardevice();
   for(i=0;i<=100;i=i+5)
   {
    pzrd(300-180,30);
    pzrd(400-180,90);
    line(405+100,220-10,440+100,240-10);
    line(415+100,220-10,445+100,230-10);
    line(545,220,548,225);
    line(540,230,548,235);
    line(545,220,540,230);
    rectangle(549,200,551,375);
    rectangle(545,200,555,190);
    line(545,190,545,183);
    line(555,190,555,183);
    tree1(130,30);
    tree1(-10,-66);
    tree1(100,-50);
    tree1(578,-78);
    tree1(530,-50);
    tree1(160,60);
    hero(14-i/5,42);
    gun1(14-i/5,42);
    if(i%2==0)
    {
    legsp1(14-i/5,42);
    }
    else
    {
    legsp2(14-i/5,42);
    }
    gun2(14-i/5,42);

    delay(200);
    cleardevice();

   }

   for(i=0;i<=600;i=i+5)
   {
    pzrd(300-180-i,30);
    pzrd(400-180-i,90);
    line(405+100-i,220-10,440+100-i,240-10);
    line(415+100-i,220-10,445+100-i,230-10);
    line(545-i,220,548-i,225);
    line(540-i,230,548-i,235);
    line(545-i,220,540-i,230);
    rectangle(549-i,200,551-i,375);
    rectangle(545-i,200,555-i,190);
    line(545-i,190,545-i,183);
    line(555-i,190,555-i,183);
    tree1(130-i,30);
    tree1(-10-i,-66);
    tree1(100-i,-50);
    tree1(578-i,-78);
    tree1(530-i,-50);
    tree1(160-i,60);

    tree1(310-i,-66);
    tree1(700-i,-50);
    tree1(878-i,-78);
    tree1(1130-i,-50);
    tree1(860-i,60);

    tree1(410-i,-66);
    tree1(600-i,-50);
    tree1(1078-i,-78);
    tree1(930-i,-50);
    tree1(860-i,60);

    hero(-4+i/2,42);
    gun1(-4+i/2,42);
    if(i%2==0)
    {
    legsp1(-4+i/2,42);
    }
    else
    {
    legsp2(-4+i/2,42);
    }
    gun2(-4+i/2,42);

    delay(200);
    cleardevice();

   }
////--- SCENE 14 : SOS-BACK TO HOME BY HELI (RE ENTRY)-ROPE-CLIMB-MOVE ---////

    for(i=-200;i<=500;i=i+5)
    {
      if(i%20==0)
      {
	 ey=-2;
      }
      else
      {
	 ey=2;
      }
      if(i%20==0)
      {
      setcolor(CYAN);
      setlinestyle(1,1,1);
      arc(10+i,93+ey,290,330,17);
      arc(10+i,93+ey,75,180,30);
      setlinestyle(0,1,1);
      }
      heli(i,ey);
      clouds1(-100,100);
      clouds2(-30,-80);
      cloudb1(-100,40);
      clouds2(500,270);
      sound(300);
      delay(50);
      nosound();
      cleardevice();

    }

    for(i=-200;i<=400;i=i+5)
    {
      if(i%20==0)
      {
	 ey=-2;
      }
      else
      {
	 ey=2;
      }
      if(i%20==0)
      {
      setcolor(CYAN);
      setlinestyle(1,1,1);
      arc(10+i,93+ey+i,290,330,17);
      arc(10+i,93+ey+i,75,180,30);
      setlinestyle(0,1,1);
      }
      heli(i,ey+i);
      clouds1(-100,100);
      clouds2(-30,-80);
      cloudb1(-100,40);
      clouds2(500,270);
      sound(300);
      delay(50);
      nosound();
      cleardevice();

    }

   for(j=0;j<=500;j=j+5)
   {
    i=600;
    pzrd(300-180-i,30);
    pzrd(400-180-i,90);
    line(405+100-i,220-10,440+100-i,240-10);
    line(415+100-i,220-10,445+100-i,230-10);
    line(545-i,220,548-i,225);
    line(540-i,230,548-i,235);
    line(545-i,220,540-i,230);
    rectangle(549-i,200,551-i,375);
    rectangle(545-i,200,555-i,190);
    line(545-i,190,545-i,183);
    line(555-i,190,555-i,183);
    tree1(130-i,30);
    tree1(-10-i,-66);
    tree1(100-i,-50);
    tree1(578-i,-78);
    tree1(530-i,-50);
    tree1(160-i,60);

    tree1(310-i,-66);
    tree1(700-i,-50);
    tree1(878-i,-78);
    tree1(1130-i,-50);
    tree1(860-i,60);

    tree1(410-i,-66);
    tree1(600-i,-50);
    tree1(1078-i,-78);
    tree1(930-i,-50);
    tree1(860-i,60);


    if(j<50)
    {
      if(i%20==0)
      {
      setcolor(CYAN);
      setlinestyle(1,1,1);
      arc(10+j,93+j,290,330,17);
      arc(10+j,93+j,75,180,30);
      setlinestyle(0,1,1);
      }
      heli(j,j);
      hero(-4+i/2-j,42);
    gun1(-4+i/2-j,42);
    if(j%2==0)
    {
    legsp1(-4+i/2-j,42);
    }
    else
    {
    legsp2(-4+i/2-j,42);
    }
    gun2(-4+i/2-j,42);

    }

   if(j>50 && j<150)
    {
      if(i%20==0)
      {
	 ey=-2;
      }
      else
      {
	 ey=2;
      }
      if(j%20==0)
      {
      setcolor(CYAN);
      setlinestyle(1,1,1);
      arc(10+j,93+ey,290,330,17);
      arc(10+j,93+ey,75,180,30);
      setlinestyle(0,1,1);
      }
      heli(j,ey);
      hero(-64+i/2,42);
    gun1(-64+i/2,42);
    if(i%2==0)
    {
    legsp1(-64+i/2,42);
    }
    else
    {
    legsp2(-64+i/2,42);
    }
    gun2(-64+i/2,42);

    }

   if(j>150 && j<300)
    {
      if(i%20==0)
      {
	 ey=-2;
      }
      else
      {
	 ey=2;
      }
      if(j%20==0)
      {
      setcolor(CYAN);
      setlinestyle(1,1,1);
      arc(10+150,93+ey,290,330,17);
      arc(10+150,93+ey,75,180,30);
      setlinestyle(0,1,1);
      }
      heli(150,ey);
      thread(150,0);
      hero(-64+i/2,42-j+150);
   // gun1(-4+i/2,42-j);
    if(i%2==0)
    {
    legsp1(-64+i/2,42-j+150);
    }
    else
    {
    legsp2(-64+i/2,42-j+150);
    }
    gun2(-64+i/2,42-j+150);


    }

   if(j>300 && j<400)
    {
      if(j%20==0)
      {
	 ey=-2;
      }
      else
      {
	 ey=2;
      }
      if(j%20==0)
      {
      setcolor(CYAN);
      setlinestyle(1,1,1);
      arc(10+j,93+ey,290,330,17);
      arc(10+j,93+ey,75,180,30);
      setlinestyle(0,1,1);
      }
      heli(j,ey);
    }


   if(j>400 && j<500)
    {

      if(j%20==0)
      {
      setcolor(CYAN);
      setlinestyle(1,1,1);
      arc(10+j,93+ey-j,290,330,17);
      arc(10+j,93+ey-j,75,180,30);
      setlinestyle(0,1,1);
      }
      heli(j,ey-j);
    }
    sound(300);
    delay(50);

    nosound();


    cleardevice();
   }


///////////-------- SCENE 15 : CARD "MISSION COMPLETED" ---------////////////

      msncmp();

      cleardevice();
////////--------SCENE 16 : DESCRIPTION  '''NAMES'' ---MAHA---  -----///////////
       setcolor(GREEN);
       settextstyle(3,0,5);
       outtextxy(100,50,"<<< PROJECT BY >>>");
       delay(1000);
       setcolor(LIGHTCYAN);
       settextstyle(7,0,5);
       setlinestyle(1,0,2);
       outtextxy(50,150,"Þ  Y  M A H A N T H Þ");
       line(160,185,165,190);
       line(155,190,160,185);
       line(160,195,165,190);
       line(155,190,160,195);
       delay(1000);
      setcolor(LIGHTMAGENTA);
      settextstyle(1,0,4);
      outtextxy(200,250,"......AND TEAM......  ");
       delay(6000);
       cleardevice();

///////------ SCENE 17 : DESCRIPTION  '''NAMES''  ---Team Mates--- -----///////

       setcolor(LIGHTBLUE);
       settextstyle(1,0,4);
       outtextxy(0,50,"< < < T e a m   M e m b e r s > > >");
       setcolor(YELLOW);
       settextstyle(7,0,3);
       outtextxy(100,150,"M . S i v a   T e j a");
       delay(200);
       outtextxy(100,190,"S . B . S u d h e e r");
       delay(200);
       outtextxy(100,230,"G . S a i   K r i s h n a");
       delay(200);
       outtextxy(100,270,"K . S a i   V a m s i");
       delay(200);
       outtextxy(100,310,"P . V . S u m a n t h");
       delay(200);
       outtextxy(100,350,"A . C h e t h a n ");
       delay(3000);
       cleardevice();




/////////////-------- SCENE 18 : THE END -  THANK YOU -------------////////////////

	   end1();
	   cleardevice();

	   for(i=1;i<=2;i++)
	   {
	     setlinestyle(4,2,2);
	     sound(800-i*150);
	     cleardevice();
	     end2();
	     delay(50);
	   }
	   for(i=1;i<=2;i++)
	   {
	     setlinestyle(4,2,2);
	     sound(400);
	     cleardevice();
	     end2();
	     delay(100);
	   }

	   for(i=1;i<=5;i++)
	   {
	     setlinestyle(4,2,2);
	     sound(400-i*50);
	     cleardevice();
	     end2();
	     delay(50);
	   }
	   nosound();
	   end2();

////////////////*****************  THE END  *********************////////////////
    nosound();
    getch();
    closegraph();
}






//helicopter
void heli(int xc,int yc)
{
    int k,l;

    int parr1[10]={275,168,267,143,234,143,234,168,275,168};
    int parr2[10]={265,140,260,113,235,113,235,140,265,140};
    for(l=0;l<10;l++)
    {
       if(l%2==0)
	{
	  parr2[l]=parr2[l] + xc;
	}
	else
	{
	  parr2[l]=parr2[l] + yc;
	}
    }

    for(k=0;k<10;k++)
    {
	if(k%2==0)
	{
	    parr1[k]=parr1[k] + xc;
	}
	else
	{
	    parr1[k]=parr1[k] + yc;
	}
    }
    setcolor(LIGHTCYAN);
    rectangle(100+xc,50+yc,300+xc,52+yc);
    rectangle(196+xc,47+yc,204+xc,49+yc);
    rectangle(193+xc,52+yc,207+xc,75+yc);
    rectangle(190+xc,105+yc,215+xc,130+yc);
    rectangle(140+xc,105+yc,187+xc,172+yc);
    rectangle(143+xc,107+yc,184+xc,130+yc);
    rectangle(181+xc,153+yc,183+xc,154+yc);
    line(140+xc,75+yc,225+xc,75+yc);
    line(230+xc,85+yc,225+xc,75+yc);
    line(230+xc,85+yc,240+xc,85+yc);
    ellipse(270+xc,155+yc,340,100,40,50);
    line(305+xc,175+yc,280+xc,170+yc);
    line(280+xc,170+yc,265+xc,105+yc);
    arc(240+xc,105+yc,0,90,20);
    line(265+xc,105+yc,260+xc,103+yc);

    line(277+xc,170+yc,262+xc,110+yc);
    line(262+xc,110+yc,232+xc,110+yc);
    line(232+xc,110+yc,232+xc,170+yc);
    line(232+xc,170+yc,277+xc,170+yc);

    drawpoly(5,parr1);   //down
    drawpoly(5,parr2);   //upper

    ellipse(312+xc,183+yc,260,100,12,10);
    line(310+xc,192+yc,130+xc,190+yc);

    line(110+xc,135+yc,125+xc,185+yc);        //tail
    arc(130+xc,185+yc,180,270,5);
    line(110+xc,105+yc,140+xc,75+yc);

    line(110+xc,135+yc,95+xc,134+yc);
    line(110+xc,105+yc,95+xc,106+yc);

    line(95+xc,106+yc,18+xc,107+yc);          //tail---starts
    line(95+xc,134+yc,15+xc,125+yc);
    arc(15+xc,107+yc,200,270,17);

    line(18+xc,107+yc,0+xc,75+yc);
    line(0+xc,115+yc,-5+xc,75+yc);
    line(-5+xc,75+yc,0+xc,75+yc);
    circle(2+xc,90+yc,5);
    circle(2+xc,90+yc,2);

    //small fan upper wing
    line(8+xc,84+yc,10+xc,87+yc);
    line(8+xc,84+yc,28+xc,62+yc);
    line(10+xc,87+yc,40+xc,65+yc);
    line(40+xc,65+yc,28+xc,62+yc);

    //small fan lower wing
    line(-6+xc,93+yc,-7+xc,97+yc);
    line(-6+xc,93+yc,-32+xc,110+yc);
    line(-7+xc,97+yc,-29+xc,120+yc);
    line(-32+xc,110+yc,-29+xc,120+yc);

    rectangle(120+xc,230+yc,300+xc,227+yc);       //atmost bottom
    arc(314+xc,220+yc,0,180,3);
    //line(310,220,317,220);
    arc(300+xc,217+yc,270,355,10);
    arc(303+xc,217+yc,257,355,13);


    rectangle(150+xc,227+yc,153+xc,190+yc);
    rectangle(290+xc,227+yc,293+xc,193+yc);

    rectangle(154+xc,210+yc,289+xc,213+yc);
}
//helicopter thread to climb
void thread(int xc,int yc)
{
    setcolor(BROWN);
    //floodfill(222,200,15);
    rectangle(220+xc,191+yc,224+xc,260+yc);
    ellipse(222+xc,265+yc,0,360,10,5);
    rectangle(220+xc,270+yc,224+xc,300+yc);
    ellipse(222+xc,305+yc,0,360,10,5);
    rectangle(220+xc,310+yc,224+xc,330+yc);
}
//helipad to stay or land
void hlpad(int xc,int yc)
{

   setcolor(BLUE);
   ellipse(250+xc,300+yc,0,360,200,60);
   ellipse(250+xc,300+yc,0,360,180,54);
   setcolor(WHITE);
   bar(220+xc,250+yc,235+xc,350+yc);
   bar(280+xc,250+yc,265+xc,350+yc);
   bar(225+xc,305+yc,275+xc,295+yc);

}
//hero jumpng from Helicopter
void jump(int xc,int yc)
{
     int k;
     int jarr1[10]={180,100,190,130,250,90,245,82,180,100};
     for(k=0;k<10;k++)
    {
	if(k%2==0)
	{
	    jarr1[k]=jarr1[k] + xc;
	}
	else
	{
	    jarr1[k]=jarr1[k] + yc;
	}
    }

     setcolor(LIGHTBLUE);
     ellipse(85+xc,120+yc,0,210,20,15);      //helmet
     line(85+xc,120+yc,66+xc,125+yc);
     line(85+xc,120+yc,90+xc,132+yc);
     line(66+xc,125+yc,73+xc,136+yc);
     line(73+xc,136+yc,90+xc,132+yc);
     line(73+xc,136+yc,78+xc,140+yc);
     line(78+xc,140+yc,92+xc,138+yc);                     //head end
     line(92+xc,138+yc,105+xc,120+yc);                   //collor
     line(105+xc,120+yc,108+xc,123+yc);
     line(95+xc,141+yc,108+xc,123+yc);
     line(95+xc,141+yc,92+xc,138+yc);                    //collor end
     line(95+xc,141+yc,100+xc,143+yc);
     line(100+xc,143+yc,110+xc,150+yc);
     line(110+xc,150+yc,190+xc,130+yc);         //body
     line(190+xc,130+yc,180+xc,100+yc);
     line(180+xc,100+yc,108+xc,123+yc);
     line(108+xc,123+yc,118+xc,107+yc);
     line(118+xc,107+yc,155+xc,95+yc);           //bag
     line(155+xc,95+yc,175+xc,100+yc);
     drawpoly(5,jarr1);          //pant
     line(250+xc,90+yc,261+xc,102+yc);        //shoe
     line(261+xc,102+yc,259+xc,88+yc);
     line(259+xc,88+yc,256+xc,80+yc);
     line(256+xc,80+yc,247+xc,84+yc);

     line(120+xc,140+yc,110+xc,135+yc);
     line(120+xc,140+yc,165+xc,125+yc);
     line(110+xc,135+yc,118+xc,127+yc);
     line(118+xc,127+yc,163+xc,117+yc);

     line(165+xc,125+yc,163+xc,117+yc);

     line(163+xc,117+yc,167+xc,111+yc);
     line(167+xc,111+yc,168+xc,115+yc);
     line(167+xc,117+yc,168+xc,115+yc);
     line(167+xc,117+yc,172+xc,119+yc);
     line(168+xc,119+yc,171+xc,122+yc);
     //line(169,122,176,125);
     line(171+xc,122+yc,165+xc,125+yc);
     line(155+xc,95+yc,175+xc,80+yc);
     ellipse(180+xc,75+yc,0,360,5,3);
     line(175+xc,80+yc,178+xc,75+yc);

}
//HERO BODY &HEAD
void hero(int xc,int yc)
{



   //////////////////////////////////////hero///////////////////////////////
   /////////////////////////////////////////////////////////////////////////
   ///////////////////////////ONE MAN Army /////////////////////////////////
   setcolor(LIGHTBLUE);
   line(105+xc,340+yc,105+xc,325+yc);       //back
   line(105+xc,340+yc,107+xc,343+yc);
   line(107+xc,343+yc,107+xc,345+yc);       //side straight line
   //line(107+,345,104+xc,349);
	 //thigh
   line(107+xc,343+yc,120+xc,343+yc);    //belt
   line(107+xc,345+yc,120+xc,345+yc);
   //setcolor();
   line(120+xc,343+yc,122+xc,333+yc);      //Stomach

   line(112+xc,327+yc,128+xc,335+yc);      //Hand
   line(112+xc,327+yc,112+xc,324+yc);
   line(112+xc,324+yc,116+xc,319+yc);
   line(116+xc,319+yc,119+xc,318+yc);
   line(118+xc,319+yc,122+xc,324+yc);

   line(122+xc,324+yc,131+xc,328+yc);       //shoulder
   line(131+xc,328+yc,132+xc,328+yc);
   line(132+xc,328+yc,141+xc,322+yc);

   line(128+xc,335+yc,132+xc,335+yc); 	 //down line of Hand
   line(132+xc,335+yc,143+xc,327+yc);

   line(105+xc,325+yc,109+xc,317+yc);	  //Neck
   line(109+xc,316+yc,117+xc,316+yc);
   line(117+xc,316+yc,118+xc,314+yc);
   line(118+xc,314+yc,119+xc,318+yc);       // chestline

   line(109+xc,316+yc,109+xc,308+yc);       //head
   line(106+xc,308+yc,122+xc,308+yc);

   ellipse(114+xc,308+yc,10,220,9,10);    //healmet
   line(122+xc,308+yc,122+xc,311+yc);
   line(122+xc,311+yc,113+xc,311+yc);
   line(113+xc,311+yc,112+xc,308+yc);
   line(120+xc,311+yc,122+xc,314+yc);            //nose
   line(122+xc,314+yc,120+xc,314+yc);
   line(120+xc,314+yc,118+xc,318+yc);

}
//HERO LEGS POSITION1
void legsp1(int xc,int yc)
 {
///////////////////legs///////////////////////////////////
   //leg1
   setcolor(LIGHTBLUE);
   line(107+xc,345+yc,104+xc,349+yc);

   line(104+xc,349+yc,104+xc,351+yc);
   line(104+xc,351+yc,112+xc,360+yc);       //leg
   line(112+xc,360+yc,102+xc,371+yc);
   setcolor(BROWN);
   line(102+xc,371+yc,98+xc,374+yc);       //shoe
   line(98+xc,374+yc,103+xc,379+yc);
   line(103+xc,379+yc,106+xc,379+yc);
   line(106+xc,379+yc,106+xc,376+yc);
   line(106+xc,376+yc,105+xc,374+yc);
   line(105+xc,374+yc,102+xc,371+yc);

   //leg2
   setcolor(LIGHTBLUE);
   line(103+xc,374+yc,120+xc,363+yc);
   line(120+xc,363+yc,120+xc,358+yc);     //mark st line
   line(120+xc,358+yc,110+xc,345+yc);       //middle of two legs
   line(113+xc,350+yc,114+xc,346+yc);


   line(120+xc,343+yc,121+xc,345+yc);

   line(121+xc,345+yc,130+xc,360+yc);   //thigh 2
   line(130+xc,360+yc,130+xc,363+yc);   //mark st pt 2
   line(130+xc,363+yc,128+xc,373+yc);
   line(120+xc,358+yc,123+xc,363+yc);
   line(123+xc,363+yc,123+xc,374+yc);   //leg2 end

   setcolor(BROWN);
   line(128+xc,373+yc,136+xc,374+yc);     //shoe2
   line(123+xc,374+yc,124+xc,377+yc);
   line(124+xc,377+yc,134+xc,376+yc);
   line(134+xc,376+yc,136+xc,374+yc);
   line(128+xc,373+yc,123+xc,374+yc);

}
//HERO LEGS POSITON 2
void legsp2(int xc,int yc)
{
   int p,o;
   p=8,o=3;
   //leg1
   setcolor(LIGHTBLUE);
   line(100+xc+p,344+yc+o,104+xc+p,351+yc+o);       //thigh
   line(104+xc+p,351+yc+o,116+xc+p,360+yc+o);       //leg
   line(116+xc+p,360+yc+o,114+xc+p,371+yc+o);
   setcolor(BROWN);
   line(114+xc+p,371+yc+o,112+xc+p,374+yc+o);       //shoe
   line(112+xc+p,374+yc+o,118+xc+p,376+yc+o);
   line(118+xc+p,376+yc+o,121+xc+p,376+yc+o);
   line(121+xc+p,376+yc+o,121+xc+p,374+yc+o);
   line(121+xc+p,374+yc+o,120+xc+p,373+yc+o);
   line(120+xc+p,373+yc+o,117+xc+p,371+yc+o);

   //leg2
   setcolor(LIGHTBLUE);
   line(118+xc+p,373+yc+o,123+xc+p,361+yc+o);
   line(123+xc+p,361+yc+o,121+xc+p,355+yc+o);     //mark st line
   line(121+xc+p,355+yc+o,110+xc+p,343+yc+o);       //middle of two legs
  // line(113,350,114,346);
   setcolor(BROWN);
   line(100+xc+p,373+yc+o,104+xc+p,375+yc+o);     //shoe2
   line(104+xc+p,375+yc+o,108+xc+p,372+yc+o);
   line(108+xc+p,372+yc+o,104+xc+p,370+yc+o);
   line(104+xc+p,370+yc+o,102+xc+p,368+yc+o);
   line(98+xc+p,368+o+yc,97+xc+p,374+o+yc);
   line(97+xc+p,374+o+yc,100+xc+p,373+o+yc);
   setcolor(LIGHTBLUE);
   line(98+xc+p,368+o+yc,102+xc+p,355+o+yc);
   line(102+xc+p,368+o+yc,110+xc+p,359+o+yc);
   line(110+xc+p,359+o+yc,111+xc+p,356+o+yc);
   line(102+xc+p,355+o+yc,99+xc+p,348+o+yc);
   line(99+xc+p,348+o+yc,99+xc+p,345+o+yc);
   line(99+xc+p,345+o+yc,99+xc+p,342+o+yc);
}
//Machine GUN in hand
void gun1(int xc,int yc)
{

   ///////////////////////Machine Gun//////////////////////////
   setcolor(LIGHTCYAN);
   line(180+xc,310+yc,180+xc,314+yc);	//gun shooting pt
   line(180+xc,314+yc,176+xc,314+yc);
   line(180+xc,310+yc,176+xc,310+yc);
   line(175+xc,313+yc,170+xc,313+yc);       //barrel
   line(175+xc,311+yc,168+xc,311+yc);
   line(168+xc,311+yc,168+xc,305+yc);
   line(167+xc,305+yc,167+xc,307+yc);
   line(167+xc,307+yc,166+xc,308+yc);
   line(166+xc,308+yc,160+xc,308+yc);
   line(170+xc,314+yc,170+xc,316+yc);
   line(170+xc,316+yc,160+xc,316+yc);
   line(160+xc,316+yc,160+xc,319+yc);
   line(160+xc,319+yc,157+xc,319+yc);
   line(150+xc,319+yc,146+xc,319+yc);
   rectangle(150+xc,312+yc,157+xc,345+yc);
   line(146+xc,319+yc,146+xc,321+yc);
   line(160+xc,308+yc,160+xc,306+yc);
   line(160+xc,306+yc,140+xc,306+yc);

   line(140+xc,306+yc,139+xc,304+yc);
   line(139+xc,304+yc,138+xc,306+yc);
   ellipse(134+xc,306+yc,180,360,4,5);
   line(130+xc,306+yc,124+xc,306+yc);

   line(147+xc,324+yc,141+xc,324+yc);
   line(141+xc,324+yc,139+xc,330+yc);
   line(139+xc,330+yc,135+xc,330+yc);
   line(135+xc,330+yc,135+xc,328+yc);
   line(135+xc,328+yc,137+xc,328+yc);
   line(137+xc,328+yc,140+xc,316+yc);
   line(140+xc,316+yc,132+xc,316+yc);
   line(132+xc,316+yc,130+xc,318+yc);
   line(130+xc,318+yc,122+xc,318+yc);
   ellipse(143+xc,321+yc,0,180,3,1);
   line(153+xc,306+yc,153+xc,306+yc);
   line(153+xc,306+yc,158+xc,304+yc);
   line(158+xc,304+yc,158+xc,302+yc);
   rectangle(153+xc,301+yc,158+xc,302+yc);
   setcolor(YELLOW);
   rectangle(150+xc,314+yc,157+xc,318+yc);
   rectangle(150+xc,322+yc,157+xc,326+yc);
   rectangle(150+xc,330+yc,157+xc,334+yc);
   rectangle(150+xc,338+yc,157+xc,342+yc);
   setcolor(WHITE);
}
//Missile GUN on back
void gun2(int xc,int yc)
{
    int k;
    int garr1[22]={95,270,92,270,92,280,87,295,92,305,92,310,95,310,95,305,100,295,95,280,95,270};
    for(k=0;k<22;k++)
    {
     garr1[k]+=5;
    }

    for(k=0;k<22;k++)
    {
	if(k%2==0)
	{
	    garr1[k]=garr1[k] + xc;
	}
	else
	{
	    garr1[k]=garr1[k] + yc;
	}
    }
    setcolor(YELLOW);
    drawpoly(11,garr1);       //BUllET
    setcolor(LIGHTCYAN);
    line(97+xc,315+yc,95+xc,318+yc);
    line(100+xc,315+yc,103+xc,318+yc);
    rectangle(95+xc,318+yc,103+xc,342+yc);
    rectangle(95+xc,340+yc,85+xc,334+yc);
    rectangle(95+xc,336+yc,88+xc,338+yc);
    rectangle(95+xc,328+yc,80+xc,324+yc);
    rectangle(95+xc,318+yc,90+xc,324+yc);
    rectangle(93+xc,320+yc,92+xc,322+yc);
    rectangle(97+xc,342+yc,101+xc,360+yc);

    line(97+xc,360+yc,92+xc,362+yc);
    line(101+xc,360+yc,106+xc,362+yc);
    line(92+xc,362+yc,106+xc,362+yc);
    setcolor(WHITE);
}
//bullet of enemy gun
void e1blt(int xc,int yc)
{
   //bullet of enemy
   setcolor(RED);
   rectangle(450+xc,347+yc,457+xc,349+yc);  //body
   line(450+xc,347+yc,448+xc,348+yc);
   line(448+xc,348+yc,450+xc,349+yc);
}
//Bullet from hero GUN1
void heroblt(int xc,int yc)
{
   //bullet   of hero
   setcolor(CYAN);
   rectangle(180+xc,310+yc,184+xc,314+yc);
   rectangle(184+xc,311+yc,190+xc,313+yc);
   line(190+xc,310+yc,190+xc,314+yc);
   line(190+xc,313+yc,194+xc,312+yc);
   line(190+xc,311+yc,194+xc,312+yc);
}
//ENEMY @ HIDEOUT IN SCN 1
void enemy1(void)
{

//gun of enemy
    setcolor(LIGHTRED);
    line(550,347,583,347);  //body
    line(550,347,550,348);
    line(550,348,560,348);
    line(560,348,562,350);
    line(562,350,565,350);
    line(565,343,580,343);   //scope
    line(565,345,580,345);
    line(565,345,562,346);
    line(565,343,562,341);
    line(562,341,562,346);
    line(580,343,580,345);

    line(565,352,565,346);   //hand palm part
    line(565,346,569,346);
    line(569,346,569,352);
    line(565,352,569,352);

    line(569,350,580,350);       //down line of gun

    //line(583,347,585,345);      //gun shot pt
    line(585,345,584,348);
    line(584,348,588,350);

    line(588,350,595,351);     //gun back
    line(585,352,592,354);
    line(592,354,595,351);    // guncovered!

    rectangle(580,350,585,355);      //hand palm backpart
    rectangle(587,340,592,343);      //eyes of enemy
    rectangle(584,341,597,340);      //helmet
    ellipse(591,341,0,180,6,7);       //helmet up
    line(596,340,596,347);            //back of head
    ellipse(594,345,0,360,0,1);      //ear of enemy
    line(587,341,585,343);           //nose of enemy
   // line(585,343,588,343);
   // line(588,343,587,348);

   floodfill(349,563,BROWN);
   floodfill(349,578,BROWN);
   line(585,355,590,358);         //hand left
   line(590,358,596,356);
   line(596,356,600,350);

   line(565,352,580,358);         //right hand
   line(569,352,579,355);         //up line
   line(578,358,588,353);
   line(580,358,578,358);         //line to gun
   line(579,355,580,350);
   line(580,360,575,364);
   line(575,364,577,373);
   line(577,373,580,373);
   rectangle(573,373,582,375);   //shoe
   line(580,360,589,365);

   line(580,365,580,373);
   line(580,367,588,372);
   line(585,358,585,362);
   line(592,365,587,373);   //leg left
   line(587,373,589,375);
   line(592,375,594,372);    //leg    part
   line(594,372,596,371);
   line(596,371,600,365);
   line(600,365,600,350);
   line(596,375,599,373);
   line(599,373,600,375);
   line(603,375,603,368);
   line(603,368,601,368);
   line(601,368,601,370);
   line(601,370,597,371);

   line(592,365,600,368);  //shirt pant divi line


   line(600,350,594,347);  //neck

   //floodfill(555,370,15);
   //floodfill(555,360,15);

   ellipse(555,370,0,360,15,5);     //hide out
   //fillellipse(555,370,15,5);
   ellipse(555,360,0,360,15,5);
   //fillellipse(555,360,15,5);

   line(557,348,553,355);	//guns support
   line(557,348,559,355);


}
//ENEMY @TENT LEGS AND HEAD
void enemy2(int xc,int yc)
{
   setcolor(LIGHTRED);
   ellipse(217+xc,285+yc,0,180,8,6);
   rectangle(205+xc,285+yc,230+xc,286+yc);
   //rectangle(210+xc,287+yc,224+xc,293+yc);
   line(225+xc,287+yc,224+xc,294+yc);
   line(224+xc,294+yc,220+xc,297+yc);
   line(210+xc,294+yc,215+xc,297+yc);
   line(209+xc,287+yc,210+xc,294+yc);
   line(214+xc,298+yc,221+xc,298+yc);  //neck

   //leg
   line(206+xc,323+yc,206+xc,328+yc);
   line(227+xc,323+yc,227+xc,335+yc);
   // line(206,331,206,335);
   rectangle(206+xc,335+yc,227+xc,337+yc); //belt
   line(206+xc,335+yc,208+xc,368+yc);
   line(227+xc,337+yc,225+xc,368+yc);
   line(208+xc,368+yc,215+xc,368+yc); //left leg pant
   line(225+xc,368+yc,218+xc,368+yc); //right leg pant
   line(215+xc,368+yc,217+xc,345+yc);
   line(218+xc,368+yc,216+xc,345+yc);
   line(224+xc,368+yc,224+xc,371+yc); //foot
   line(214+xc,368+yc,214+xc,371+yc);
   line(217+xc,368+yc,217+xc,371+yc);
   line(209+xc,368+yc,209+xc,371+yc);
   ellipse(222+xc,373+yc,0,360,3,4);
   line(224+xc,374+yc,217+xc,374+yc);
   ellipse(212+xc,373+yc,0,360,3,4);
   line(214+xc,374+yc,209+xc,374+yc);
   line(210+xc,299+yc,216+xc,305+yc);
   line(225+xc,299+yc,217+xc,305+yc);
   line(216+xc,305+yc,211+xc,308+yc);
   line(217+xc,305+yc,222+xc,308+yc);
   line(211+xc,308+yc,208+xc,298+yc);
   line(222+xc,308+yc,225+xc,298+yc);
}
//ENEMY @TENT GUN HOLD PSTN
void e2p1(int xc,int yc)
{
   setcolor(LIGHTRED);
   rectangle(210+xc,287+yc,224+xc,293+yc);
   line(214+xc,298+yc,205+xc,300+yc);  //shoulders
   line(221+xc,298+yc,230+xc,300+yc);
   line(205+xc,300+yc,197+xc,310+yc);  //hand-left
   line(197+xc,310+yc,196+xc,317+yc);
   line(196+xc,317+yc,203+xc,321+yc);
   line(206+xc,308+yc,206+xc,314+yc);  //shoulder down  triangle
   line(206+xc,308+yc,204+xc,312+yc);
   line(206+xc,314+yc,204+xc,312+yc);
   line(203+xc,321+yc,212+xc,325+yc);
   line(260+xc,297+yc,215+xc,320+yc);   //gun barrel
   line(215+xc,320+yc,212+xc,325+yc);
   line(212+xc,325+yc,202+xc,331+yc);
   line(202+xc,331+yc,205+xc,337+yc);
   line(214+xc,329+yc,205+xc,337+yc);
   line(214+xc,329+yc,219+xc,325+yc);
   line(219+xc,325+yc,229+xc,320+yc);
   line(229+xc,320+yc,233+xc,314+yc);
   line(233+xc,314+yc,258+xc,301+yc);
   line(258+xc,301+yc,260+xc,300+yc);
   line(260+xc,300+yc,261+xc,297+yc);     //gun barrel ending
   line(230+xc,300+yc,238+xc,308+yc);
   line(227+xc,307+yc,227+xc,312+yc);   //sholder triangle
   line(227+xc,307+yc,231+xc,311+yc);
   line(233+xc,315+yc,237+xc,320+yc);
   line(237+xc,320+yc,240+xc,323+yc);
   line(240+xc,323+yc,245+xc,325+yc);
   line(245+xc,325+yc,247+xc,320+yc);
   line(247+xc,320+yc,247+xc,310+yc);
}
//ENEMY @TENT GUN SHOT PSTN
void e2p2(int xc,int yc)
{
   setcolor(LIGHTRED);
   rectangle(210+xc,287+yc,218+xc,291+yc);
   line(218+xc,291+yc,222+xc,296+yc);

   line(206+xc,320+yc,206+xc,340+yc);
   line(229+xc,320+yc,227+xc,340+yc);

   line(214+xc,298+yc,205+xc,300+yc);  //shoulders
   line(221+xc,298+yc,230+xc,300+yc);
   line(230+xc,300+yc,240+xc,304+yc);
   ellipse(236+xc,312+yc,290,70,12,8);   //ellbow
   line(240+xc,320+yc,215+xc,318+yc);
   line(230+xc,308+yc,235+xc,310+yc);    //shoulder triangle nx 3 lines
   line(218+xc,311+yc,235+xc,310+yc);    //hand up line
   line(230+xc,308+yc,229+xc,310+yc);

   line(205+xc,300+yc,190+xc,306+yc);      //2nd shoulder +hand
   line(190+xc,306+yc,187+xc,308+yc);
   line(187+xc,308+yc,180+xc,315+yc);
   line(207+xc,309+yc,197+xc,313+yc);    //sholder traingle
   line(207+xc,309+yc,208+xc,312+yc);
   //line(180,315,177,+xc320);
   line(170+xc,315+yc,174+xc,320+yc);        //hand h0lding
   line(174+xc,320+yc,182+xc,320+yc);
   line(182+xc,320+yc,178+xc,315+yc);
   line(182+xc,320+yc,187+xc,316+yc);

   line(160+xc,312+yc,205+xc,312+yc);        // gun @ shooting position
   line(160+xc,312+yc,160+xc,314+yc);
   line(160+xc,314+yc,185+xc,314+yc);
   line(185+xc,314+yc,190+xc,318+yc);
   line(190+xc,318+yc,200+xc,318+yc);
   ellipse(210+xc,312+yc,180,280,5,3);     //gun clicking pt

   line(211+xc,315+yc,220+xc,316+yc);
   line(220+xc,324+yc,220+xc,316+yc);
   line(220+xc,324+yc,210+xc,320+yc);
   line(210+xc,320+yc,207+xc,320+yc);

   ellipse(205+xc,318+yc,180,350,4,2); //trigger
   //gun ends
   line(225+xc,318+yc,210+xc,320+yc);
   line(210+xc,320+yc,204+xc,319+yc);

   line(218+xc,311+yc,212+xc,314+yc);


}
//BULLET OF ENEMY@TENT GUN
void e2blt(int xc,int yc)
{
   setcolor(RED);
   rectangle(155+xc,312+yc,160+xc,314+yc);
   ellipse(155+xc,313+yc,90,270,5,1);
}
//STONE OF SIZE 1
void stone1(int xc,int yc)
{
   setcolor(BROWN);
   ellipse(306+xc,375+yc,0,120,10,12);
   ellipse(287+xc,370+yc,30,170,16,15);
   line(273+xc,375+yc,315+xc,375+yc);
   line(273+xc,375+yc,269+xc,365+yc);
}
//STONE IN ELLIPSE
void stone2(int xc,int yc)
{
    setcolor(BROWN);
    ellipse(400+xc,369+yc,0,360,18,8);
    ellipse(418+xc,375+yc,0,360,4,2);
}
//CRATES OF GUNS
void crate(int xc,int yc)
{
   setcolor(BROWN);
   rectangle(300+xc,365+yc,330+xc,375+yc);
   rectangle(308+xc,368+yc,312+xc,372+yc);
   rectangle(321+xc,368+yc,325+xc,372+yc);
   line(300+xc,365+yc,310+xc,360+yc);
   line(310+xc,360+yc,342+xc,360+yc);
   line(342+xc,360+yc,342+xc,370+yc);
   line(330+xc,365+yc,342+xc,360+yc);
   line(330+xc,375+yc,342+xc,370+yc);
   line(334+xc,362+yc,311+xc,362+yc);
   line(308+xc,363+yc,330+xc,363+yc);
   line(330+xc,364+yc,334+xc,361+yc);
   line(300+xc,369+yc,308+xc,369+yc);
   line(300+xc,371+yc,308+xc,371+yc);
   line(312+xc,369+yc,321+xc,369+yc);
   line(312+xc,371+yc,321+xc,371+yc);
   line(330+xc,369+yc,342+xc,364+yc);
   line(325+xc,371+yc,330+xc,371+yc);
   line(325+xc,369+yc,330+xc,369+yc);
   line(330+xc,371+yc,342+xc,366+yc);

}
//SUN @ TOP
void sun(int xc,int yc)
{
   setcolor(RED);
   //floodfill(600,30,15);
   //setfillstyle(SOLID_FILL,RED);
   //floodfill(600,30,15);
   circle(600+xc,30+yc,20);
   setcolor(YELLOW);
   line(600+xc,5+yc,600,0);
   line(610+xc,10+yc,615+xc,5+yc);
   line(620+xc,20+yc,625+xc,15+yc);
   line(625+xc,30+yc,630+xc,30+yc);
   line(620+xc,40+yc,625+xc,45+yc);
   line(610+xc,50+yc,615+xc,55+yc);
   line(590+xc,50+yc,585+xc,55+yc);
   line(580+xc,40+yc,575+xc,45+yc);
   line(575+xc,30+yc,570+xc,30+yc);
   line(580+xc,20+yc,575+xc,15+yc);
   line(590+xc,10+yc,585+xc,5+yc);
   line(600+xc,55+yc,600+xc,60+yc);
}
//BUSHES 1
void bush(int xc,int yc)
{
   setcolor(LIGHTGREEN);
   ellipse(285+xc,379+yc,0,80,25,35);
   ellipse(345+xc,375+yc,100,180,25,35);
   ellipse(342+xc,370+yc,100,150,28,30);
   ellipse(289+xc,374+yc,30,80,28,30);
   ellipse(333+xc,357+yc,110,180,20,30);
   ellipse(333+xc,367+yc,105,160,16,42);
   //ellipse(310+xc,395+yc,40,85,16,62);
   ellipse(298+xc,370+yc,20,80,14,40);
   ellipse(292+xc,363+yc,35,70,27,34);
}
//BUSHES OF DESERT
void plant2(int xc,int yc)
{
   setcolor(YELLOW);
   ellipse(100+xc,375+yc,0,80,5,40);
   ellipse(112+xc,375+yc,110,180,5,35);
   ellipse(97+xc,335+yc,0,360,4,2);
   ellipse(113+xc,342+yc,0,360,3,2);
   ellipse(100+xc,375+yc,0,90,6,60);
   line(100+xc,315+yc,94+xc,316+yc);
   line(100+xc,315+yc,97+xc,318+yc);
   line(94+xc,316+yc,92+xc,329+yc);
   line(97+xc,318+yc,92+xc,329+yc);
}
//BUSHES IN FOREST
void plant1(int xc,int yc)
{
   setcolor(LIGHTGREEN);
   ellipse(100+xc,375+yc,0,80,5,40);
   ellipse(111+xc,375+yc,110,180,5,35);
   ellipse(97+xc,335+yc,0,360,4,2);
   ellipse(112+xc,342+yc,0,360,3,2);
}
//HIDE OUT OF ROCKS
void hide1(int xc,int yc)
{
    setcolor(CYAN);
    setfillstyle(SOLID_FILL,CYAN);
    bar3d(500+xc,325+yc,510+xc,375+yc,20,1);
    //rectangle(530+xc,310+yc,560+xc,360+yc);
    //floodfill(535+xc,330+yc,15);
    //setfillstyle(SOLID_FILL,CYAN);
    //line(560,310,555,308);
    //line(555,308,530,308);
    //line(530,308,529,310);
    bar3d(530+xc,310+yc,560+xc,360+yc,5,1);

}
//HIDE OUT OF ELLIPSE
void hide2(int xc,int yc)
{
    setcolor(YELLOW);
    ellipse(100+xc,362+yc,30,150,15,5);
    ellipse(100+xc,358+yc,210,330,15,5);
    ellipse(100+xc,352+yc,30,150,15,5);
    ellipse(100+xc,348+yc,210,330,15,5);
    ellipse(100+xc,342+yc,30,150,15,5);
    ellipse(100+xc,338+yc,210,330,15,5);
}
//GRASS SMALL ONE
void grass(int xc,int yc)
{
    setcolor(LIGHTGREEN);
    line(98+xc,375+yc,96+xc,370+yc);
    line(96+xc,370+yc,98+xc,372+yc);
    line(98+xc,372+yc,100+xc,369+yc);
    line(100+xc,369+yc,101+xc,373+yc);
    line(101+xc,373+yc,102+xc,360+yc);
    line(102+xc,360+yc,104+xc,371+yc);
    line(104+xc,371+yc,105+xc,368+yc);
    line(105+xc,368+yc,108+xc,367+yc);
    line(108+xc,367+yc,105+xc,369+yc);
    line(105+xc,369+yc,109+xc,371+yc);
    line(109+xc,371+yc,104+xc,375+yc);
}
//TREES
void tree1(int x,int y)
{
    setcolor(BROWN);
    line(35+x,425+y,45+x,425+y);	//ground
    line(35+x,425+y,35+x,400+y);         //side
    line(45+x,425+y,45+x,400+y);
    setcolor(GREEN);
    line(35+x,400+y,20+x,400+y);        //downside
    line(45+x,400+y,60+x,400+y);
    line(60+x,400+y,45+x,380+y);      //first slope
    line(20+x,400+y,35+x,380+y);
    line(35+x,380+y,25+x,380+y);
    line(45+x,380+y,55+x,380+y);
    line(55+x,380+y,45+x,370+y);      //second slope
    line(25+x,380+y,35+x,370+y);
    line(45+x,370+y,50+x,370+y);
    line(35+x,370+y,30+x,370+y);
    line(50+x,370+y,40+x,355+y);
    line(30+x,370+y,40+x,355+y);      //tip of tree
}
//CLOUDS
//MEDIUM CLOUDS
void clouds1(int xc,int yc)
{
    setcolor(LIGHTBLUE);
    ellipse(200+xc,200+yc,30,240,25,20);
    ellipse(250+xc,175+yc,350,210,35,26);
    ellipse(290+xc,190+yc,330,110,20,15);
    ellipse(320+xc,210+yc,230,110,25,19);
    ellipse(175+xc,220+yc,90,310,27,20);
    ellipse(225+xc,205+yc,230,300,50,40);
    ellipse(260+xc,205+yc,250,335,50,40);
}
// SMALL CLOUDS
void clouds2(int xc,int yc)
{
   setcolor(LIGHTBLUE);
   ellipse(100+xc,110+yc,10,165,25,20);   //upper
   ellipse(130+xc,115+yc,240,125,15,10);
   ellipse(105+xc,120+yc,210,350,30,20);   //down arc
   ellipse(75+xc,120+yc,60,290,25,15);
}
//BIG CLOUD WITH INSIDE CLOUDS
void cloudb1(int xc,int yc)
{
    setcolor(LIGHTBLUE);
    ellipse(400+xc,300+yc,350,200,40,35);
    ellipse(340+xc,345+yc,55,210,50,35);
    ellipse(500+xc,390+yc,220,90,50,35);
    ellipse(460+xc,340+yc,330,120,44,40);
    ellipse(410+xc,398+yc,220,340,55,44);
    ellipse(334+xc,392+yc,240,310,55,44);
    ellipse(285+xc,395+yc,75,315,50,40);

    ellipse(410+xc,345+yc,310,190,40,25);
    ellipse(350+xc,375+yc,50,230,35,30);

}
//BIG CLOUDS CLEAR
void cloudb2(int xc,int yc)
{
    setcolor(LIGHTBLUE);
    ellipse(400+xc,300+yc,350,200,40,35);
    ellipse(340+xc,345+yc,55,210,50,35);
    ellipse(500+xc,390+yc,220,90,50,35);
    ellipse(460+xc,340+yc,330,120,44,40);
    ellipse(410+xc,398+yc,220,340,55,44);
    ellipse(334+xc,392+yc,240,310,55,44);
    ellipse(285+xc,395+yc,75,315,50,40);

}
//     TNT--- THE BOMB
void tnt(int xc,int yc)
{
    setcolor(RED);
    ellipse(203+xc,352+yc,0,360,3,2);   //top of tnt
    ellipse(209+xc,352+yc,0,360,3,2);
    ellipse(215+xc,351+yc,0,360,3,2);
    ellipse(206+xc,350+yc,0,360,3,1);
    ellipse(212+xc,350+yc,0,360,3,1);
    line(200+xc,352+yc,200+xc,375+yc);  //side of tnt
    line(212+xc,352+yc,212+xc,375+yc);
    line(218+xc,352+yc,218+xc,375+yc);

    line(206+xc,352+yc,206+xc,357+yc);
    line(206+xc,371+yc,206+xc,375+yc);
    ellipse(203+xc,375+yc,180,360,3,2);  //down of tnt
    ellipse(209+xc,375+yc,180,360,3,2);
    ellipse(215+xc,374+yc,180,360,3,2);
    setcolor(LIGHTGRAY);
    circle(206+xc,364+yc,7);             //watch in tnt
    circle(206+xc,364+yc,4);
    line(206+xc,364+yc,206+xc,361+yc);
    line(206+xc,364+yc,209+xc,368+yc);
    setcolor(BLUE);
    circle(199+xc,367+yc,2);             //cables
    circle(197+xc,364+yc,2);
    circle(197+xc,361+yc,2);
    circle(197+xc,358+yc,2);
    circle(198+xc,356+yc,2);
    circle(199+xc,354+yc,2);
    arc(200+xc,354+yc,20,190,3);
}
//ALERT SYMBOL
void alert(void)
{
    int j,k;
    for(j=0;j<=50;j=j+5)
    {
	setfillstyle(SOLID_FILL,9);
	rectangle(100,100,500,370);     //outer
	rectangle(105,110,495,360);     //inner
	floodfill(103,103,15);
	rectangle(240,130,360,170);     //alert box

	line(250,370,230,390);
	line(350,370,370,390);
	line(230,390,200,400);
	line(370,390,400,400);
	line(280,370,270,380);
	line(320,370,330,380);
	line(270,380,330,380);
	line(200,400,400,400);
	floodfill(260,373,15);


	setcolor(LIGHTRED);
	settextstyle(8,0,4);
	outtextxy(220,10," I S I S ");
	setcolor(BLUE);
	settextstyle(2,0,5);
	outtextxy(100,50,"C O M M A N D   R O O M  / C O N T R O L   R O O M");
	setcolor(WHITE);
	bar3d(540,110,630,400,60,1);        //cpu
	setfillstyle(SOLID_FILL,8);
	bar(20,260,30,400);
	bar(0,400,639,405);

      if(j%2==0)
       {
	setfillstyle(SOLID_FILL,9);
       }
       else
       {
	setfillstyle(SOLID_FILL,4);
       }
       line(10,259,40,259);
       line(10,259,10,240);
       line(40,259,40,240);
       ellipse(25,241,0,180,15,20);
       floodfill(15,243,15);
       setfillstyle(SOLID_FILL,14);
       line(300,200,400,341);          //outer triangle
       line(300,200,200,341);
       line(400,341,200,341);
       floodfill(300,210,15);
       setfillstyle(SOLID_FILL,4);
       line(300,220,372,321);          //inner triangle
       line(300,220,228,321);
       line(372,321,228,321);
       floodfill(300,210,15);
       setfillstyle(SOLID_FILL,0);
       rectangle(295,240,305,295);
       floodfill(300,245,15);
       circle(300,304,7);
       floodfill(300,304,15);


       if(j%25==0)
       {
       setcolor(RED);
       settextstyle(3,0,4);
       outtextxy(255,130,"ALERT!");
       settextstyle(6,0,2);
       outtextxy(390,170,"'SECTOR 4'");
       setcolor(WHITE);
       }
       for(k=1;k<=150;k++)
       {
       sound(444+k);
       delay(2);
       }
       delay(100);
       cleardevice();
       nosound();

    }
}
//SCENE 6 BACKGROUNG
void scene6(int x)
{
   int k;
  tree1(0+x,0);
  tree1(170+x,45);
  tree1(220+x,-80);
  tree1(235+x,50);
  tree1(475+x,-53);
  tree1(350+x,-70);
  tree1(525+x,40);
  tree1(-30+x,20);
   for(k=0;k<=700;k=k+24)
   {
   grass(-200+k+x,30);
   k=k+5;
   }

   for(k=0;k<=700;k=k+24)
   {
   grass(-200+10+k+x,20);
   k=k+5;
   }

   for(k=0;k<=700;k=k+24)
   {
   grass(-200+5+k+x,28);
   k=k+5;
   }
    setcolor(LIGHTRED);
    line(550+x,347,583+x,347);  //body
    line(550+x,347,550+x,348);
    line(550+x,348,560+x,348);
    line(560+x,348,562+x,350);
    line(562+x,350,565+x,350);
    line(565+x,343,580+x,343);   //scope
    line(565+x,345,580+x,345);
    line(565+x,345,562+x,346);
    line(565+x,343,562+x,341);
    line(562+x,341,562+x,346);
    line(580+x,343,580+x,345);

    line(565+x,352,565+x,346);   //hand palm part
    line(565+x,346,569+x,346);
    line(569+x,346,569+x,352);
    line(565+x,352,569+x,352);

    line(569+x,350,580+x,350);       //down line of gun

    //line(583,347,585+x,345);      //gun shot pt
    line(585+x,345,584+x,348);
    line(584+x,348,588+x,350);

    line(588+x,350,595+x,351);     //gun back
    line(585+x,352,592+x,354);
    line(592+x,354,595+x,351);    // guncovered!

    ellipse(555+x,370,0,360,15,5);     //hide out
   //fillellipse(555,370,15,5);
    ellipse(555+x,360,0,360,15,5);
   //fillellipse(555,360,15,5);

   line(557+x,348,553+x,355);	//guns support
   line(557+x,348,559+x,355);



}
//DIED ENEMY big
void enemydb(int xc,int yc)
{
   setcolor(LIGHTRED);
   ellipse(300+xc,365+yc,90,310,12,15); ///helmet
   rectangle(300+xc,347+yc,302+xc,380+yc);       //hel
   rectangle(302+xc,350+yc,310+xc,365+yc);        //head
   line(310+xc,350+yc,315+xc,348+yc);
   line(315+xc,348+yc,315+xc,350+yc);
   line(315+xc,350+yc,320+xc,353+yc);
   rectangle(320+xc,353+yc,327+xc,373+yc);        //collor
   line(304+xc,378+yc,320+xc,373+yc);             //upper body
   line(327+xc,353+yc,375+xc,354+yc);
   line(327+xc,373+yc,345+xc,377+yc);
   line(345+xc,377+yc,375+xc,377+yc);
   rectangle(375+xc,354+yc,378+xc,377+yc);    //belt
   line(378+xc,354+yc,400+xc,356+yc);
   line(378+xc,377+yc,410+xc,376+yc);
   line(400+xc,356+yc,420+xc,361+yc);
   line(400+xc,376+yc,420+xc,377+yc);
   line(420+xc,361+yc,420+xc,377+yc);
   setcolor(BROWN);
   line(420+xc,361+yc,425+xc,352+yc);
   line(425+xc,352+yc,427+xc,377+yc);
   line(427+xc,377+yc,420+xc,377+yc);
   setcolor(LIGHTRED);
   line(329+xc,365+yc,337+xc,373+yc);
   line(337+xc,373+yc,363+xc,368+yc);
   line(329+xc,362+yc,337+xc,357+yc);
   line(337+xc,357+yc,363+xc,357+yc);
   line(363+xc,370+yc,363+xc,357+yc);

   rectangle(363+xc,357+yc,370+xc,368+yc);
   line(370+xc,360+yc,368+xc,360+yc);
   line(370+xc,363+yc,368+xc,363+yc);
   line(370+xc,366+yc,368+xc,366+yc);
   //line(327,373,327,377);
   //line(345,377,350,365);
   //line(345,377,348,380);
}
//enemy died small
void enemyds(int xc,int yc)
{    setcolor(LIGHTRED);
     ellipse(100+xc,370+yc,90,290,6,5);    //head
     rectangle(100+xc,363+yc,102+xc,375+yc);
     rectangle(102+xc,365+yc,105+xc,370+yc);
     line(105+xc,365+yc,107+xc,367+yc);
     line(107+xc,367+yc,107+xc,373+yc);
     line(107+xc,373+yc,102+xc,373+yc);
     //body
     line(107+xc,367+yc,110+xc,365+yc);
     line(110+xc,365+yc,125+xc,366+yc);
     line(107+xc,373+yc,109+xc,375+yc);
     line(109+xc,375+yc,125+xc,375+yc);
     rectangle(125+xc,365+yc,127+xc,375+yc);
     line(127+xc,365+yc,148+xc,367+yc);
     line(127+xc,375+yc,148+xc,374+yc);
     line(148+xc,374+yc,148+xc,367+yc);
     //shoes
     setcolor(BROWN);
     line(148+xc,367+yc,150+xc,365+yc);
     line(150+xc,365+yc,151+xc,364+yc);
     line(151+xc,364+yc,151+xc,374+yc);
     line(151+xc,374+yc,148+xc,374+yc);
     //hands
     setcolor(LIGHTRED);
     line(110+xc,367+yc,110+xc,373+yc);
     line(110+xc,367+yc,124+xc,369+yc);
     line(110+xc,373+yc,123+xc,373+yc);
     line(123+xc,373+yc,124+xc,369+yc);
     setcolor(WHITE);
}
//fence
void fence(int xc,int yc)
{
     setcolor(LIGHTGRAY);
     rectangle(403+xc,250+yc,400+xc,375+yc);
     line(400+xc,250+yc,375+xc,220+yc);
     line(403+xc,250+yc,378+xc,220+yc);
     line(375+xc,220+yc,378+xc,220+yc);

     line(400+xc,250+yc,425+xc,220+yc);
     line(403+xc,250+yc,428+xc,220+yc);
     line(425+xc,220+yc,428+xc,220+yc);

    // floodfill(405+xc,245+yc,15);
     //putpixel(388,233,4);
    // floodfill(388+xc,233+yc,15);
}
void maincc(int xc,int yc)
{
     setcolor(LIGHTGRAY);
     line(380+xc,200+yc,430+xc,190+yc);
     line(430+xc,190+yc,420+xc,212+yc);
     line(420+xc,212+yc,390+xc,220+yc);
     line(390+xc,220+yc,380+xc,200+yc);
     //ellipse(385,210,0,360,5,10);
     setcolor(RED);
     line(384+xc,198+yc,384+xc,195+yc);
     line(388+xc,197+yc,388+xc,195+yc);
     ellipse(386+xc,196+yc,0,180,2,3);

     ellipse(410+xc,219+yc,0,360,5,3);


}
void maincb(int xc,int yc)
{
     setcolor(LIGHTGRAY);
     line(375+xc,215+yc,420+xc,180+yc);
     line(420+xc,180+yc,425+xc,207+yc);
     line(425+xc,207+yc,395+xc,225+yc);
     line(395+xc,225+yc,375+xc,215+yc);
     //ellipse(385,210,0,360,5,10);
     setcolor(RED);
    // line(3+xc,198+yc,384+xc,195+yc);
    // line(388+xc,197+yc,388+xc,195+yc);
    // ellipse(386+xc,196+yc,0,180,2,3);

     //ellipse();
     //ellipse();
}
void cctv(int xc,int yc)
{
     setcolor(WHITE);
    // setfillstyle(SOLID_FILL,4);
    // floodfill(386+xc,196+yc,15);
    // tnt(100+xc,-50+yc);
     crate(260+xc,-50+yc);
     crate(300+xc,-50+yc);
     setcolor(WHITE);
     ellipse(410+xc,219+yc,0,360,5,3);
     line(405+xc,220+yc,440+xc,240+yc);
     line(415+xc,220+yc,445+xc,230+yc);

     ellipse(442+xc,236+yc,0,360,5,6);
     line(437+xc,237+yc,425+xc,260+yc);
     line(447+xc,237+yc,435+xc,260+yc);

     line(425+xc,260+yc,435+xc,260+yc);
    // setfillstyle(SOLID_FILL,DARKGRAY);
     rectangle(425+xc,261+yc,535+xc,360+yc);  //crate place building
    // floodfill(435+xc,340+yc,15);
    // setfillstyle(SOLID_FILL,BLACK);
     rectangle(445+xc,300+yc,495+xc,360+yc);
    // floodfill(450+xc,340+yc,15);


    /* setfillstyle(SOLID_FILL,DARKGRAY);
     floodfill(410+xc,210+yc,15);
     setfillstyle(SOLID_FILL,LIGHTGRAY);
     floodfill(410+xc,219+yc,15);
     setfillstyle(SOLID_FILL,LIGHTGRAY);
     floodfill(442+xc,236+yc,15);
     setfillstyle(SOLID_FILL,DARKGRAY);
     floodfill(430+xc,257+yc,15);
     setfillstyle(SOLID_FILL,DARKGRAY);
     floodfill(430+xc,230+yc,15);


		  */
}
//scene of cctv
void scene7(int x)
{
    setcolor(BROWN);
    crate(300,-50);
    crate(275,-70);
    crate(250,-50);
   // setfillstyle(SOLID_FILL,WHITE);
    fence(-20+x,40);
    fence(-30+x,-30);
    fence(100+x,100);
    fence(80+x,-80);
    cctv(120+x,-30);
    setcolor(RED);
    line(370+x,245,480+x,196);
    line(380+x,300,500+x,370);
    line(480+x,196,660+x,196);
    line(500+x,370,660+x,370);

    line(370+x,275,480+x,226);
    line(380+x,330,500+x,400);
    line(480+x,226,549+x,226);
    line(500+x,400,660+x,400);

    line(370+x,305,480+x,256);
    line(380+x,360,500+x,430);
    line(480+x,256,545+x,256);
    line(500+x,430,660+x,430);

    line(370+x,325,480+x,276);
    line(380+x,380,500+x,450);
    line(480+x,276,545+x,276);
    line(500+x,450,660+x,450);

    plant2(0+x,0);
    tree1(0,0);
    tree1(100,-40);
    tree1(150,20);
    tree1(-20,-50);
    tree1(190,40);
    tree1(78,21);

    clouds2(0+x,0);
    clouds1(0+x,-150);
}
//parachute
void para(int xc,int yc)
{
     setcolor(YELLOW);
     ellipse(500+xc,150+yc,10,100,120,120);
     ellipse(460+xc,160+yc,10,100,120,120);
     line(577+xc,141+yc,617+xc,131+yc);
     line(525+xc,60+yc,565+xc,50+yc);
     line(543+xc,75+yc,583+xc,65+yc);
     line(563+xc,95+yc,603+xc,85+yc);
     line(574+xc,115+yc,613+xc,105+yc);
     line(489+xc,45+yc,528+xc,35+yc);
     line(509+xc,51+yc,550+xc,41+yc);
     line(441+xc,40+yc,478+xc,33+yc);
     line(465+xc,41+yc,518+xc,30+yc);

     line(577+xc,141+yc,470+xc,220+yc);     //front down
     line(617+xc,131+yc,470+xc,220+yc);     //back down
     line(441+xc,40+yc,450+xc,200+yc);      //front up
     line(472+xc,40+yc,450+xc,200+yc);      //back up

}
//man on parachute
void heropara(int xc,int yc)
{
     setcolor(LIGHTBLUE);
     ellipse(450+xc,220+yc,0,360,10,12);    //head
     arc(470+xc,200+yc,200,250,32);         //healmet
     line(470+xc,220+yc,465+xc,218+yc);           //4 lines holding thread
     line(470+xc,220+yc,472+xc,223+yc);
     line(450+xc,200+yc,445+xc,198+yc);
     line(450+xc,200+yc,452+xc,203+yc);

     line(465+xc,218+yc,445+xc,238+yc);        //hands down
     line(472+xc,223+yc,452+xc,243+yc);

     //line(445,238,433,228);
     //line(410,224,423,238);

     line(445+xc,198+yc,425+xc,208+yc);        //hands up
     line(452+xc,203+yc,432+xc,213+yc);

     line(452+xc,243+yc,432+xc,253+yc);        //down lines
     line(425+xc,208+yc,410+xc,224+yc);

     line(430+xc,257+yc,405+xc,229+yc);         //belt
     line(427+xc,260+yc,403+xc,231+yc);
     line(410+xc,224+yc,385+xc,250+yc);
     line(432+xc,253+yc,408+xc,276+yc);
     line(408+xc,276+yc,405+xc,280+yc);         //legs
     line(385+xc,250+yc,382+xc,258+yc);

     line(405+xc,280+yc,395+xc,305+yc);
     line(382+xc,258+yc,372+xc,282+yc);
     line(372+xc,282+yc,360+xc,281+yc);       //shoe
     line(395+xc,305+yc,383+xc,304+yc);
     line(360+xc,281+yc,358+xc,283+yc);
     line(383+xc,304+yc,381+xc,302+yc);
     line(358+xc,283+yc,368+xc,287+yc);
     line(381+xc,302+yc,371+xc,297+yc);

     line(371+xc,297+yc,384+xc,298+yc);
     line(368+xc,287+yc,378+xc,285+yc);

     line(384+xc,298+yc,389+xc,288+yc);
     line(378+xc,285+yc,383+xc,278+yc);

     line(389+xc,288+yc,397+xc,273+yc);
     line(383+xc,278+yc,393+xc,265+yc);
     line(397+xc,273+yc,405+xc,260+yc);
     line(393+xc,265+yc,405+xc,260+yc);

}

void tent(int xc,int yc)
{
    setcolor(LIGHTGREEN);
    line(300+xc,375+yc,300+xc,300+yc);  //front veiw
    line(300+xc,375+yc,400+xc,375+yc);
    line(400+xc,375+yc,400+xc,300+yc);
    line(300+xc,300+yc,350+xc,250+yc);
    line(400+xc,300+yc,350+xc,250+yc);
    line(350+xc,250+yc,350+xc,375+yc);   //center line
    line(350+xc,260+yc,360+xc,375+yc);
    line(350+xc,260+yc,378+xc,355+yc);
    line(360+xc,375+yc,378+xc,355+yc);

    line(350+xc,250+yc,500+xc,235+yc);    // top
    line(400+xc,375+yc,550+xc,360+yc);
    line(550+xc,360+yc,550+xc,285+yc);    //back
    line(500+xc,235+yc,550+xc,285+yc);
    line(400+xc,300+yc,550+xc,285+yc);
   ///////////////wires////////////////
    setcolor(RED);
    line(400+xc,300+yc,450+xc,385+yc);
    line(550+xc,285+yc,600+xc,360+yc);
    line(300+xc,300+yc,220+xc,375+yc);

    ellipse(450+xc,385+yc,0,360,5,3);
    line(450+xc,400+yc,453+xc,387+yc);
    line(450+xc,400+yc,447+xc,387+yc);
    ellipse(600+xc,360+yc,0,360,5,3);
    line(600+xc,375+yc,603+xc,363+yc);
    line(600+xc,375+yc,597+xc,363+yc);
    ellipse(220+xc,375+yc,0,360,5,3);
    line(220+xc,390+yc,223+xc,377+yc);
    line(220+xc,390+yc,217+xc,377+yc);

    setcolor(WHITE);

}
void scene8(void)
{
  hide1(-450,30);
  tree1(130,30);
  tree1(-10,-66);
  tree1(100,-50);
  tree1(578,-78);
  tree1(530,-50);
  tree1(160,60);
  grass(0,0);
  bush(400,150);
  stone1(0,0);
  stone2(200,10);
  tent(0,0);

  rectangle(549,200,551,375);
    rectangle(545,200,555,190);
    line(545,190,545,183);
    line(555,190,555,183);
    ellipse(550,183,0,180,5,7);
    maincc(100,-10);
    line(405+100,220-10,440+100,240-10);
    line(415+100,220-10,445+100,230-10);
    line(545,220,548,225);
    line(540,230,548,235);
    line(545,220,540,230);
}
//alarm
void alarm(void)
{
    int i;
    for(i=0;i<=100;i=i+5)
    {
    hero(-50+i,80-i/5);
    gun1(-50+i,80-i/5);
    if(i%2==0)
    {
    legsp1(-50+i,80-i/5);
    }
    else
    {
    legsp2(-50+i,80-i/5);
    }
    gun2(-50+i,80-i/5);
    tnt(-150+i,60-i/5);
    scene8();
    setcolor(WHITE);
    rectangle(549,200,551,375);
    rectangle(545,200,555,190);
    line(545,190,545,183);
    line(555,190,555,183);
    ellipse(550,183,0,180,5,7);
    maincc(100,-10);
    line(405+100,220-10,440+100,240-10);
    line(415+100,220-10,445+100,230-10);
    line(545,220,548,225);
    line(540,230,548,235);
    line(545,220,540,230);
    enemyds(160,30);
    enemydb(110,60);
    if(i%2==0)
    {
    setfillstyle(SOLID_FILL,4);
    floodfill(550,183,15);
    }
    else
    {
    setfillstyle(SOLID_FILL,1);
    floodfill(550,183,15);
    }
    if(i%2==0)
    {
    setfillstyle(SOLID_FILL,1);
    floodfill(550,195,15);
    }
    else
    {
    setfillstyle(SOLID_FILL,4);
    floodfill(550,195,15);
    }
    sound(400);
    delay(500);
    nosound();
    cleardevice();
    }
}
void panzer(int xc,int yc)
{
  setcolor(LIGHTRED);
 rectangle(300+xc,315+yc,315+xc,325+yc);
 rectangle(315+xc,318+yc,373+xc,322+yc);
 line(373+xc,315+yc,373+xc,325+yc);
 line(373+xc,315+yc,380+xc,315+yc);
 line(373+xc,325+yc,380+xc,325+yc);
 line(380+xc,315+yc,382+xc,310+yc);
 line(380+xc,325+yc,382+xc,330+yc);
 line(382+xc,310+yc,450+xc,310+yc);
 line(382+xc,330+yc,450+xc,330+yc);
 line(450+xc,310+yc,450+xc,330+yc);
 rectangle(400+xc,305+yc,430+xc,310+yc);
 line(381+xc,313+yc,395+xc,313+yc);
 line(400+xc,313+yc,450+xc,313+yc);
 line(385+xc,330+yc,395+xc,313+yc);
 line(390+xc,330+yc,400+xc,313+yc);
 line(390+xc,330+yc,390+xc,335+yc);
 line(440+xc,330+yc,440+xc,335+yc);
 line(373+xc,335+yc,455+xc,335+yc);
 line(368+xc,345+yc,373+xc,335+yc);
 line(455+xc,335+yc,460+xc,345+yc);
 line(350+xc,345+yc,478+xc,345+yc);
 line(350+xc,350+yc,478+xc,350+yc);
 line(350+xc,375+yc,478+xc,375+yc);
 line(350+xc,370+yc,478+xc,370+yc);
 arc(350+xc,360+yc,90,270,10);
 arc(350+xc,360+yc,90,270,15);
 arc(478+xc,360+yc,270,90,10);
 arc(478+xc,360+yc,270,90,15);
 circle(365+xc,360+yc,10);
 circle(390+xc,360+yc,10);
 circle(415+xc,360+yc,10);
 circle(440+xc,360+yc,10);
 circle(465+xc,360+yc,10);
 circle(365+xc,360+yc,1);
 circle(390+xc,360+yc,1);
 circle(415+xc,360+yc,1);
 circle(440+xc,360+yc,1);
 circle(465+xc,360+yc,1);


}
void pzrbig(int xc,int yc)
{
  setcolor(LIGHTRED);
 rectangle(5+xc,200+yc,65+xc,230+yc);
 rectangle(65+xc,210+yc,205+xc,218+yc);
 line(205+xc,200+yc,205+xc,230+yc);
 line(205+xc,200+yc,255+xc,200+yc);
 line(255+xc,200+yc,265+xc,180+yc);
 line(205+xc,230+yc,255+xc,230+yc);
 line(255+xc,230+yc,265+xc,250+yc);
 line(265+xc,180+yc,495+xc,180+yc);
 line(265+xc,250+yc,495+xc,250+yc);
 line(495+xc,180+yc,495+xc,250+yc);
 rectangle(335+xc,160+yc,415+xc,180+yc);
 line(258+xc,195+yc,308+xc,195+yc);
 line(328+xc,195+yc,495+xc,195+yc);
 line(308+xc,195+yc,288+xc,250+yc);
 line(328+xc,195+yc,308+xc,250+yc);
 line(285+xc,250+yc,285+xc,260+yc);
 line(450+xc,250+yc,450+xc,260+yc);
 line(205+xc,260+yc,465+xc,260+yc);
 line(185+xc,270+yc,205+xc,260+yc);
 line(465+xc,260+yc,485+xc,270+yc);
 line(150+xc,270+yc,535+xc,270+yc);
 line(150+xc,280+yc,535+xc,280+yc);
 line(150+xc,370+yc,535+xc,370+yc);
 line(150+xc,360+yc,535+xc,360+yc);
 arc(150+xc,320+yc,90,270,40);
 arc(150+xc,320+yc,90,270,50);
 arc(530+xc,320+yc,270,90,40);
 arc(530+xc,320+yc,270,90,50);
 circle(155+xc,320+yc,35);
 circle(230+xc,320+yc,35);
 circle(305+xc,320+yc,35);
 circle(380+xc,320+yc,35);
 circle(455+xc,320+yc,35);
 circle(530+xc,320+yc,35);
 circle(155+xc,320+yc,10);
 circle(230+xc,320+yc,10);
 circle(305+xc,320+yc,10);
 circle(380+xc,320+yc,10);
 circle(455+xc,320+yc,10);
 circle(530+xc,320+yc,10);

}
void pzrd(int xc,int yc)
{
  setcolor(LIGHTRED);
 //rectangle(300+xc,315+yc,315+xc,325+yc);
 //rectangle(315+xc,318+yc,373+xc,322+yc);
/* line(373+xc,315+yc,373+xc,325+yc);
 line(373+xc,315+yc,380+xc,315+yc);
 line(373+xc,325+yc,380+xc,325+yc);
 line(380+xc,315+yc,382+xc,310+yc);
 line(380+xc,325+yc,382+xc,330+yc);
 line(382+xc,310+yc,450+xc,310+yc);  */
 line(382+xc,330+yc,450+xc,330+yc);
 line(450+xc,310+yc,450+xc,330+yc);
 //rectangle(400+xc,305+yc,430+xc,310+yc);
 line(381+xc,313+yc,395+xc,313+yc);
 line(400+xc,313+yc,450+xc,313+yc);
 line(385+xc,330+yc,395+xc,313+yc);
 line(390+xc,330+yc,400+xc,313+yc);
 line(390+xc,330+yc,390+xc,335+yc);
 line(440+xc,330+yc,440+xc,335+yc);
 line(373+xc,335+yc,455+xc,335+yc);
 line(368+xc,345+yc,373+xc,335+yc);
 line(455+xc,335+yc,460+xc,345+yc);
 line(350+xc,345+yc,478+xc,345+yc);
 line(350+xc,350+yc,478+xc,350+yc);
 line(350+xc,375+yc,478+xc,375+yc);
 line(350+xc,370+yc,478+xc,370+yc);
 arc(350+xc,360+yc,90,270,10);
 arc(350+xc,360+yc,90,270,15);
 arc(478+xc,360+yc,270,90,10);
 arc(478+xc,360+yc,270,90,15);
 circle(365+xc,360+yc,10);
 circle(390+xc,360+yc,10);
 circle(415+xc,360+yc,10);
 circle(440+xc,360+yc,10);
 circle(465+xc,360+yc,10);
 circle(365+xc,360+yc,1);
 circle(390+xc,360+yc,1);
 circle(415+xc,360+yc,1);
 circle(440+xc,360+yc,1);
 circle(465+xc,360+yc,1);


}
//MISSION ACCOMPLISHED
void msncmp(void)
{
    int i;
    setcolor(BLUE);
    for(i=1;i<=300;i++)
    {
    settextstyle(8,0,8);
    if(i%10==0)
    {
      sound(100);
    }


    if(i<10)
    {
    outtextxy(50,100,"M |");
    }
    if(i>10 && i<20)
    {
    outtextxy(50,100,"M i |");

    }
    if(i>20 && i<30)
    {
    outtextxy(50,100,"M i s |");

    }
    if(i>30 && i<40)
    {
    outtextxy(50,100,"M i s s |");

    }
    if(i>40 && i<50)
    {
    outtextxy(50,100,"M i s s i |");

    }
     if(i>50 && i<60)
    {
    outtextxy(50,100,"M i s s i o |");

    }
     if(i>60 && i<70)
    {
    outtextxy(50,100,"M i s s i o n |");

    }
    if(i>70 && i<80)
    {
    outtextxy(50,100,"M i s s i o n  ");

    }
    if(i>80 && i<90)
    {
    outtextxy(50,100,"M i s s i o n |");

    }
  if(i>90)
  { setcolor(BLUE);
    outtextxy(50,100,"M i s s i o n ");
    settextstyle(8,0,5);
    setcolor(LIGHTRED);
    setcolor(BLUE);
    if(i>100 && i<110)
    {
    outtextxy(30,200,"A |");

    }
     if(i>110 && i<120)
    {
    outtextxy(30,200,"A c |");

    }
     if(i>120 && i<130)
    {
    outtextxy(30,200,"A c c |");

    }
     if(i>130 && i<140)
    {
    outtextxy(30,200,"A c c o |");

    }
     if(i>140 && i<150)
    {
    outtextxy(30,200,"A c c o m |");

    }
     if(i>150 && i<160)
    {
    outtextxy(30,200,"A c c o m p |");
    }
     if(i>160 && i<170)
    {
    outtextxy(30,200,"A c c o m p l |");

    }
     if(i>170 && i<180)
    {
    outtextxy(30,200,"A c c o m p l i |");
    }
     if(i>180 && i<190)
    {
    outtextxy(30,200,"A c c o m p l i s |");

    }
     if(i>190 && i<200)
    {
    outtextxy(30,200,"A c c o m p l i s h |");

    }
     if(i>200 && i<210)
    {
    outtextxy(30,200,"A c c o m p l i s h e |");

    }
     if(i>210 && i<220)
    {
    outtextxy(30,200,"A c c o m p l i s h e d |");

    }
     if(i>220 && i<230)
    {
    outtextxy(30,200,"A c c o m p l i s h e d ! |");

    }
  }
  if(i>230)
  {
     setcolor(LIGHTRED);
     settextstyle(8,0,5);
     outtextxy(30,200,"A c c o m p l i s h e d ! ");
     settextstyle(8,0,8);
     setcolor(BLUE);
     outtextxy(50,100,"M i s s i o n ");

  }

  delay(40);
  cleardevice();
  nosound();
    }
}

//END
void end1(void)
{
     int i,j=1,k=1,l=1;
     for(i=0;i<=300;i++)
     {
	if(i<20)
	{
	   rectangle(40,40+i,120,41+i);
	}
	if(i>20 && i<80)
	{
	   rectangle(70,40+i,90,41+i);
	}
	//H
       if(i<80)
	{
	  rectangle(150,40+i,170,41+i);
	  rectangle(190,40+i,210,41+i);
	}
	if(i>30 && i<50)
	{
	  rectangle(170,40+i,190,41+i);
	}
	//E
	if(i<30)
	{
	  rectangle(240,40+i,340,41+i);
	}
	if(i>30 && i<200)
	{
	  rectangle(240,40+i,270,41+i);
	}
	if(i>170 && i<200)
	{
	  rectangle(240,40+i,340,41+i);
	}
	if(i>90 && i<110)
	{
	  rectangle(270,40+i,300,41+i);
	}
	//N
	if(i>100 && i<200)
	{
	  rectangle(370,40+i,390,41+i);
	  rectangle(430,40+i,450,41+i);
	  rectangle(470,40+i,490,41+i);
	}
	if(i>130 && i<170)
	{
	  rectangle(530,40+i,550,41+i);
	}
	if(i>100 && i<200 && j<100)
	{
	  rectangle(380+j/2,40+i,400+j/2,41+i);
	  j++;
	}
	if(i>100 && i<130)
	{
	  rectangle(500+k,40+i,520+k,41+i);
	  k++;
	}
	if(i>170 && i<200)
	{
	  rectangle(530-l,40+i,550-l,41+i);
	  l++;
	}
	if(i>100 && i<120)
	{
	  rectangle(470,40+i,520,41+i);
	}
	if(i>180 && i<200)
	{
	  rectangle(470,40+i,520,41+i);
	}
	setcolor(RED);
	if(i>130 && i<170)
	{
	  rectangle(40,40+i,200,41+i);
	}
	if(i>30 && i<70)
	{
	  rectangle(380,40+i,540,41+i);
	}
	setcolor(WHITE);

	setlinestyle(1,3,1);
	delay(10);
     }
}

void end2(void)
{
     int i,j=1,k=1,l=1;
     for(i=0;i<=300;i++)
     {
	if(i<20)
	{
	   rectangle(40,40+i,120,41+i);
	}
	if(i>20 && i<80)
	{
	   rectangle(70,40+i,90,41+i);
	}
	//H
       if(i<80)
	{
	  rectangle(150,40+i,170,41+i);
	  rectangle(190,40+i,210,41+i);
	}
	if(i>30 && i<50)
	{
	  rectangle(170,40+i,190,41+i);
	}
	//E
	if(i<30)
	{
	  rectangle(240,40+i,340,41+i);
	}
	if(i>30 && i<200)
	{
	  rectangle(240,40+i,270,41+i);
	}
	if(i>170 && i<200)
	{
	  rectangle(240,40+i,340,41+i);
	}
	if(i>90 && i<110)
	{
	  rectangle(270,40+i,300,41+i);
	}
	//N
	if(i>100 && i<200)
	{
	  rectangle(370,40+i,390,41+i);
	  rectangle(430,40+i,450,41+i);
	  rectangle(470,40+i,490,41+i);
	}
	if(i>130 && i<170)
	{
	  rectangle(530,40+i,550,41+i);
	}
	if(i>100 && i<200 && j<100)
	{
	  rectangle(380+j/2,40+i,400+j/2,41+i);
	  j++;
	}
	if(i>100 && i<130)
	{
	  rectangle(500+k,40+i,520+k,41+i);
	  k++;
	}
	if(i>170 && i<200)
	{
	  rectangle(530-l,40+i,550-l,41+i);
	  l++;
	}
	if(i>100 && i<120)
	{
	  rectangle(470,40+i,520,41+i);
	}
	if(i>180 && i<200)
	{
	  rectangle(470,40+i,520,41+i);
	}
	setcolor(RED);
	if(i>130 && i<170)
	{
	  rectangle(40,40+i,200,41+i);
	}
	if(i>30 && i<70)
	{
	  rectangle(380,40+i,540,41+i);
	}
	setcolor(WHITE);
     }
}

