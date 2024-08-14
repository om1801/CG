

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
    int x[10][10] = {
        
            {1,0,0,0,0,0,0,0,0,1},
            {0,1,0,0,0,0,0,0,1,0},
            {0,0,1,0,0,0,0,1,0,0},
            {0,0,0,1,0,0,1,0,0,0},
            {0,0,0,0,1,1,0,0,0,0},
            {0,0,0,0,1,1,0,0,0,0},
            {0,0,0,1,0,0,1,0,0,0},
            {0,0,1,0,0,0,0,1,0,0},
            {0,1,0,0,0,0,0,0,1,0},
            {1,0,0,0,0,0,0,0,0,1}
        
    };

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(x[i][j]==1){
                putpixel(i+100,j+100,WHITE);
            }
        }   
    }

}
