

#include<stdio.h>
#include<graphics.h>
#include<math.h>


void chrGen();

void main(){
	int gd=DETECT , gm;
	initgraph(&gd,&gm,"");

    chrGen();

	getch();
	closegraph();
}

void chrGen(){

	int i,j;
    int o[10][10] = {
            {0,0,0,1,1,1,1,0,0,0},
            {0,0,1,0,0,0,0,0,1,0},
            {0,1,0,0,0,0,0,0,1,0},
            {0,1,0,0,0,0,0,0,1,0},
            {0,1,0,0,0,0,0,0,1,0},
            {0,1,0,0,0,0,0,0,1,0},
            {0,1,0,0,0,0,0,0,1,0},
            {0,0,1,0,0,0,0,1,0,0},
            {0,0,0,1,1,1,1,0,0,0}
    };

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(o[i][j]==1){
                putpixel(j+100,i+100,WHITE);
            }
        }   
    }

}
