

#include<stdio.h>
#include<graphics.h>
#include<math.h>


void midpointcircle(int xc,int yc, int r);
void plotPoint(int x,int y,int xc,int yc);

void main(){
	int gd=DETECT , gm;
    int xc ,yc,r;
	initgraph(&gd,&gm,"");


	midpointcircle(xc=200,yc=200,r=100);


	getch();
	closegraph();
}

void midpointcircle(int xc,int yc,int r){

	int x=0,y=r,p=1-r;
	plotPoint(x,y,xc,yc);

	while(x<=y){
		if(p<0){
			x++;
			p = p + 2*x +1;
		}
		else{
			x++;
			y--;
			p = p + 2*x - 2*y +1;
		} 
        delay(10);
		plotPoint(x,y,xc,yc);
	}
}

void plotPoint(int x,int y,int xc,int yc){
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc+y,yc+x,WHITE);
	putpixel(xc+y,yc-x,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc-y,yc-x,WHITE);
	putpixel(xc-y,yc+x,WHITE);
	putpixel(xc-x,yc+y,WHITE);
}