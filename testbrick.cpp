#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void testbrick(int ch,double x1,double y1,double x2,double y2)
{ 
      // initwindow(1250, 700, "MAZE TRIAL");
 //floodfill(0,0,WHITE);
 // double x1=500,y1=500,x2=525,y2=525;
  
  
      
      
      switch(ch)
  { case 1: setcolor(RED);
            rectangle(x1,y1,x2,y2); 
            setfillstyle(SOLID_FILL,RED);
            floodfill((x1+x2)/2,(y1+y2)/2,RED);
             break;
    case 2: setcolor(GREEN);
            rectangle(x1,y1,x2,y2); 
            setfillstyle(SOLID_FILL,GREEN);
            floodfill((x1+x2)/2,(y1+y2)/2,GREEN);
            break;
    case 3: setcolor(BLUE);
            rectangle(x1,y1,x2,y2); 
             setfillstyle(SOLID_FILL,BLUE);
              floodfill((x1+x2)/2,(y1+y2)/2,BLUE);
              break;
    
      
  }    
  
      
/*rectangle(x1,y1,x2,y2); 
 setfillstyle(SOLID_FILL,RED);
     floodfill((x1+x2)/2,(y1+y2)/2,RED); 
*/
        }
 
