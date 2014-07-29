#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void space(double x1,double y1,double x2,double y2)
{ 
      // initwindow(1250, 700, "MAZE TRIAL");
 //floodfill(0,0,WHITE);

      setcolor(WHITE);
rectangle(x1,y1,x2,y2); 
 setfillstyle(SOLID_FILL,WHITE);
     floodfill((x1+x2)/2,(y1+y2)/2,WHITE); 

 }
