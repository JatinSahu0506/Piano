#include<graphics.h>
void fillrectangle(int,int,int,int,int);
void pattern(int,int,int,int,int,int);
void fillrectangle(int x1,int y1,int x2,int y2,int color)
{
	int let;
	for(let=x1;let<x2;let++)
	{
		setcolor(color);
		rectangle(let,y1,let,y2);
	}
}
void pattern(int x1,int y1,int x2,int y2,int pat,int color)
{
	setfillstyle(pat,color);
	bar(x1,y1,x2,y2);
}