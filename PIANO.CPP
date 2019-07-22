/*
************************* A PROGRAM TO PLAY PIANO **************************
**************			by JATIN SAHU 		********************
***************               USING C/C++ CODES        *********************
******************    		IN  TURBO C++        ***********************
***********************    RUN AND ENJOY THE PIANO *************************
--------------------------************************--------------------------
*/
#include "pianohea.h"
#include<process.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
void piano(void);
void piano()
{
	setbkcolor(BLACK);
	setcolor(RED);
	pattern(1,1,638,478,9,CYAN);
	//main rect start
	for(int i=1;i<=5;i++)
	rectangle(50-i,100-i,588-i,400+i);
	//main rect end

	setcolor(BLUE);

	// middle line
	for(i=1;i<=5;i++)
	line(50,217+i,582,217+i);
	//middle line

	//pattern
	pattern(50,100,582,218,SOLID_FILL,BLACK);
	//pattern

	//P letter
	setcolor(GREEN);
	for(i=120;i<=122;i++)
	{
		line(i,120,i,200);
	}
	for(i=18;i<=20;i++)
	{
		ellipse(120,140,270,90,i+20,i);
	}
	//P letter

	//I letter
	for(i=210;i<=212;i++)
	{
		line(i,124,i,196);
	}
	for(i=121;i<=123;i++)
	{
		line(190,i,234,i);
	}
	for(i=197;i<=199;i++)
	{
		line(190,i,234,i);
	}
	//I letter

	//A letter
	for(i=1;i<=3;i++)
	{
		line(273+i,200,305+i,120);
		line(339-i,200,308-i,120);
		line(290,158+i,322,158+i);
	}
	//A letter

	//N letter
	for(i=1;i<=3;i++)
	{
		line(367+i,121,367+i,199);
		line(430+i,121,430+i,199);
		line(367+i,121,430+i,199);
	}
	//N letter

	//O letter
	for(i=1;i<=3;i++)
	{
		circle(492,161,37+i);
	}
	//O letter

	//keys
	pattern(50,223,582,400,SOLID_FILL,WHITE);
	setcolor(BLACK);
	for(i=99;i<=582;i+=49)
	{
		line(i,222,i,400);
	}
	fillrectangle(50,222,65,311,BLACK); //Q key
	fillrectangle(138,222,158,311,BLACK); //E key
	fillrectangle(187,222,207,311,BLACK); //R key
	fillrectangle(285,222,305,311,BLACK); //Y key
	fillrectangle(334,222,354,311,BLACK); //U key
	fillrectangle(383,222,403,311,BLACK); //I key
	fillrectangle(481,222,501,311,BLACK); //P key
	fillrectangle(530,222,550,311,BLACK); //[ key
	//keys
}
void main()
{
	int a=0,rec,gd=DETECT,gm,tim=250;
	char clk;
	clrscr();
	//halfway of x=319, halfway of y=239.
	initgraph(&gd,&gm,"C://TurboC3//BGI");
	piano();
	label:
	setcolor(YELLOW);
	outtextxy(52,302,"Q");
	outtextxy(140,302,"E");
	outtextxy(189,302,"R");
	outtextxy(287,302,"Y");
	outtextxy(336,302,"U");
	outtextxy(385,302,"I");
	outtextxy(483,302,"P");
	outtextxy(532,302,"[");
	setcolor(BLACK);
	outtextxy( 52,393,"A");
	outtextxy(101,393,"S");
	outtextxy(150,393,"D");
	outtextxy(199,393,"F");
	outtextxy(248,393,"G");
	outtextxy(297,393,"H");
	outtextxy(346,393,"J");
	outtextxy(395,393,"K");
	outtextxy(444,393,"L");
	outtextxy(493,393,";");
	outtextxy(542,378,"By :");
	outtextxy(542,389,"Jatin");
     //	showmouse();               //getting mouse pointer
       //	rec=click(138,222,158,311);    //getting position for q
       //	if(rec=1) clk='e';
	switch(getch())
	{
		case 'e': sound(a+450);//sa
			  fillrectangle(138,222,158,311,BLUE);
			  delay(tim);
			  fillrectangle(138,222,158,311,BLACK);
			  nosound();
			  goto label;
		case 'r': sound(a+500);//re
			  fillrectangle(187,222,207,311,BLUE);
			  delay(tim);
			  fillrectangle(187,222,207,311,BLACK);
			  nosound();
			  goto label;
		case 'g': sound(a+560);//ga, d ma
			  fillrectangle(247,312,295,400,BLUE);
			  delay(tim);
			  fillrectangle(247,312,295,400,WHITE);
			  nosound();
			  goto label;
		case 'y': sound(a+600);//ma
			  fillrectangle(285,222,305,311,BLUE);
			  delay(tim);
			  fillrectangle(285,222,305,311,BLACK);
			  nosound();
			  goto label;
		case 'u': sound(a+680);//pa
			  fillrectangle(334,222,354,311,BLUE);
			  delay(tim);
			  fillrectangle(334,222,354,311,BLACK);
			  nosound();
			  goto label;
		case 'i': sound(a+760);//dha
			  fillrectangle(383,222,403,311,BLUE);
			  delay(tim);
			  fillrectangle(383,222,403,311,BLACK);
			  nosound();
			  goto label;
		case 'l': sound(a+840);//ni, d sa
			  fillrectangle(443,312,491,400,BLUE);
			  delay(tim);
			  fillrectangle(443,312,491,400,WHITE);
			  nosound();
			  goto label;
		case ';': sound(a+930);//sa
			  fillrectangle(492,312,540,400,BLUE);
			  delay(tim);
			  fillrectangle(492,312,540,400,WHITE);
			  nosound();
			  goto label;
		case 'p': sound(a+900);//sa
			  fillrectangle(481,222,501,311,BLUE);
			  delay(tim);
			  fillrectangle(481,222,501,311,BLACK);
			  nosound();
			  goto label;
		case '[': sound(a+990);//re
			  fillrectangle(530,222,550,311,BLUE);
			  delay(tim);
			  fillrectangle(530,222,550,311,BLACK);
			  nosound();
			  goto label;
		case 's': sound(a+430);//d sa
			  fillrectangle(100,312,148,400,BLUE);
			  delay(tim);
			  fillrectangle(100,312,148,400,WHITE);
			  nosound();
			  goto label;
		case 'a': sound(a+400);//dd sa
			  fillrectangle(50,312,99,400,BLUE);
			  delay(tim);
			  fillrectangle(50,312,99,400,WHITE);
			  nosound();
			  goto label;
		case 'q': sound(a+380);//d sa
			  fillrectangle(50,222,65,311,BLUE);
			  delay(tim);
			  fillrectangle(50,222,65,311,BLACK);
			  nosound();
			  goto label;
		case 'd': sound(480); //d re
			  fillrectangle(149,312,197,400,BLUE);
			  delay(tim);
			  fillrectangle(149,312,197,400,WHITE);
			  nosound();
			  goto label;
		case 'f': sound(540); //d ga
			  fillrectangle(198,312,246,400,BLUE);
			  delay(tim);
			  fillrectangle(198,312,246,400,WHITE);
			  nosound();
			  goto label;
		case 'h': sound(630); //d pa
			  fillrectangle(296,312,344,400,BLUE);
			  delay(tim);
			  fillrectangle(296,312,344,400,WHITE);
			  nosound();
			  goto label;
		case 'j': sound(710); //d dha
			  fillrectangle(345,312,393,400,BLUE);
			  delay(tim);
			  fillrectangle(345,312,393,400,WHITE);
			  nosound();
			  goto label;
		case 'k': sound(a+817);//d ni
			  fillrectangle(394,312,442,400,BLUE);
			  delay(tim);
			  fillrectangle(394,312,442,400,WHITE);
			  nosound();
			  goto label;
		case 27 : outtextxy(48,410,"Exiting.....");
			  rectangle(48,420,602,442);
			  for(int o=50;o<600;o++)
			  {
				setcolor(4);
				rectangle(o,421,o,441);
				delay(2);
			  }
			  exit(0);
			  break;
		default : goto label;
	}
	closegraph();
}