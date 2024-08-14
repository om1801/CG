

#include<stdio.h>
#include<graphics.h>
#include<math.h>


void rainbow();

void main(){
	int gd=DETECT , gm;
	initgraph(&gd,&gm,"");

    rainbow();

	getch();
	closegraph();
}

void rainbow(){
    int i , cx=getmaxx()/2 , cy=getmaxy();
    // int arr[] = {4,2,14,1,3,5};

    for(i=0;i<800;i++){
        setcolor(i/100);
        arc(cx,cy,0,180,i);

    }
}

