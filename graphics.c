#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main ()
{
    int gd = DETECT , gm , i ;
    int x1=100, y1= 100 , x2 = 100 ,y2 = 100;
    
    initializegraph(&gd,&gm,"");
    cleardevice();
    
    
    for(i=1;i<=200;i++){
                        
                        setcolor(i);
                        line(x1,y1,x2,y2);
                        delay(5);
    }
    
    getch();
    closegraph();
}
