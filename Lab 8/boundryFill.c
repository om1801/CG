

#include<stdio.h>
#include<graphics.h>
#include<math.h>


void boundryFill(int x,int y,int fc,int bc);

void main(){
	int gd=DETECT , gm;
	initgraph(&gd,&gm,"");

    circle(200,200,100);
    
    boundryFill(200,200,RED,15);

	getch();
	closegraph();
}

void boundryFill(int x,int y,int fc,int bc){
    if(getpixel(x,y)!=bc && getpixel(x,y)!=fc){
        putpixel(x,y,fc);
        boundryFill(x+1,y,fc,bc);
        boundryFill(x,y+1,fc,bc);
        boundryFill(x-1,y,fc,bc);
        boundryFill(x,y-1,fc,bc);
    }
}
