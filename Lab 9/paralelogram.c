

#include<stdio.h>
#include<graphics.h>
#include<math.h>


void parallelogram();

void main(){
	int gd=DETECT , gm;
	initgraph(&gd,&gm,"");

    parallelogram();

	getch();
	closegraph();
}

void parallelogram(){
    setlinestyle(1,0,1);
    setcolor(1);
    line(100,100,200,400);
    setlinestyle(2,0,1);
    setcolor(2);
    line(200,400,400,400);
    setlinestyle(3,0,1);
    setcolor(3);
    line(400,400,300,100);
    setlinestyle(4,0,1);
    setcolor(4);
    line(300,100,100,100);

}

