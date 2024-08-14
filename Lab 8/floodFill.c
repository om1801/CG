

#include<stdio.h>
#include<graphics.h>
#include<math.h>


void boundryFill(int x,int y,int fc,int bc);
void floodFill(int x,int y,int fc,int bc);

void main(){
	int gd=DETECT , gm;
	initgraph(&gd,&gm,"");

    circle(getmaxx()/2,getmaxy()/2,300);

    boundryFill(getmaxx()/2,getmaxy()/2,RED,15);
    floodFill(getmaxx()/2,getmaxy()/2,GREEN,15);

	getch();
	closegraph();
}

void boundryFill(int x,int y,int fc,int bc){
    if(getpixel(x,y)!=bc && getpixel(x, y)!=fc){
        putpixel(x,y,fc);
        boundryFill(x+1,y,fc,bc);
        boundryFill(x,y+1,fc,bc);
        boundryFill(x-1,y,fc,bc);
        boundryFill(x,y-1,fc,bc);
    }
}

void floodFill(int x,int y,int fc,int bc){
    if(getpixel(x,y)!=bc && getpixel(x,y)!=fc){
        putpixel(x,y,fc);
        floodFill(x+1,y,fc,bc);
        floodFill(x,y+1,fc,bc);
        floodFill(x-1,y,fc,bc);
        floodFill(x,y-1,fc,bc);
    }
}
