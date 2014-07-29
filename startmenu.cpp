#include<graphics.h>
#include<math.h>

void StartMenu()
{
     int j=0;
     setbkcolor(WHITE);
     setcolor(RED);
     settextstyle(3,0,7);             
     for(int i=0; i<10; i++)
       {
        delay(100);
        outtextxy(100,275,"THE RANDOM MAZE GENERATOR");
        setcolor(i);
       }
     
     setcolor(WHITE);
     outtextxy(100,275,"THE RANDOM MAZE GENERATOR");
     setcolor(RED);
     outtextxy(100,20,"THE RANDOM MAZE GENERATOR");
       
     
     settextstyle(3,0,6);
     setcolor(GREEN);
     outtextxy(390,180,"Press ENTER to start");
    
     getch();
     
     settextstyle(3,0,5);
     setcolor(BLUE);
     outtextxy(400,310,"Starting New Game");
     
     
      int x,y;
    
    
    for(int a=0; a<6; a++)
    {
     delay(100);
     if(a%2==0)
     {
      for(float th=0; th<3.14 ; th+=0.5)
        {    
          for(float i=0; i<3; i+=0.5)
          {
           x=600+(30*sin(-th-i));
           y=500+(30*cos(-th-i));
          
           setcolor(BLUE);
           circle(x,y,5);
           setfillstyle(SOLID_FILL,BLUE);
           floodfill(x,y,BLUE);
       
           setcolor(WHITE);
           rectangle(500,400,750,600);
           setfillstyle(SOLID_FILL,WHITE);
           floodfill(0,0,WHITE);
           
           //getch();     
          }
       }
     }
     else
     {
         for(float th=0; th<3.14 ; th+=0.5)
        {    
          for(float i=0; i<3; i+=0.5)
          {
           x=600+(30*sin(-th-i));
           y=500+(30*cos(-th-i));
          
           setcolor(WHITE);
           circle(x,y,5);
           setfillstyle(SOLID_FILL,WHITE);
           floodfill(x,y,WHITE);
       
           setcolor(WHITE);
           rectangle(500,400,750,600);
           setfillstyle(SOLID_FILL,WHITE);
           floodfill(0,0,WHITE);     
          }
       }
        
     }
} 
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(0,0,BLACK);
  
  settextstyle(3,0,6);
  setbkcolor(WHITE);
  setcolor(BLACK);
  outtextxy(100,100,"Choose Colour");
  setbkcolor(RED);
  setcolor(WHITE);
  outtextxy(500,100," 1 ");
  setbkcolor(GREEN);
  setcolor(WHITE);
  outtextxy(600,100," 2 ");
  setbkcolor(BLUE);
  setcolor(WHITE);
  outtextxy(700,100," 3 ");
  
}


