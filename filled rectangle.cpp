#include<iostream.h>
#include<conio.h>
#include<graphics.h>
  
  //  for drawing the pointer circle
 
 
 void draw_cir(int bx,int by,int ch)
   { double x1,y1,x2,y2=25;
             for(int i=0; i<=bx; i++)
      {
      y1=y2;
      
      x2=25;
      if((i%2)!=0)
      {
      y2=y1+12.5;
      }
      else
      {
      y2=y1+25.0;
      }
      
           for(int j=0; j<=by; j++)
      {  
         
         if(i%2==0) // draw square
         {
                  if(j%2==0)
                            {  x1= x2;
                              x2=x1+25.0;
                              }
                              
                  else
                              {x1= x2;
                               x2=x1+12.5;
                                }           
                             
         }// if ends
         
         else 
         { 
                if(j%2!=0)
                 { x1=x2 ;
                   x2=x1+12.5;}
                else
                   {  x1=x2 ;
                   x2=x1+25;}
                   
           } // else ends
         
       
           
      } //for J ends
    
      
      
      } //for i ends
      
    int h=3,l=1;
            setcolor(BLACK);
     circle((x1+x2)/2,(y1+y2)/2,6.25);
     switch(ch)
     { case 1:setfillstyle(SOLID_FILL,RED);break;
       case 2:setfillstyle(SOLID_FILL,GREEN);break;
       case 3:setfillstyle(SOLID_FILL,BLUE);break;
     }
     setfillstyle(SOLID_FILL,GREEN);
     floodfill((x1+x2)/2,(y1+y2)/2,BLACK);
      } // fun ends
   //////////////////////////////////////////////////////////////////////////////// 
   
     
  void del_cir(int bx,int by)
   { double x1,y1,x2,y2=25;
  
             for(int i=0; i<=bx; i++)
      {
      y1=y2;
      
      x2=25;
      if((i%2)!=0)
      {
      y2=y1+12.5;
      }
      else
      {
      y2=y1+25.0;
      }
      
           for(int j=0; j<=by; j++)
      {  
         
         if(i%2==0) // draw square
         {
                  if(j%2==0)
                            {  x1= x2;
                              x2=x1+25.0;
                              }
                              
                  else
                              {x1= x2;
                               x2=x1+12.5;
                                }           
                             
         }// if ends
         
         else 
         { 
                if(j%2!=0)
                 { x1=x2 ;
                   x2=x1+12.5;}
                else
                   {  x1=x2 ;
                   x2=x1+25;}
                   
           } // else ends
         
       
           
      } //for J ends
    
      
      
      } //for i ends
      
      //bx1=x1;by1=y1;bx2=x2;by2=y2;
            setcolor(BLACK);
     circle((x1+x2)/2,(y1+y2)/2,6.25);
     setfillstyle(SOLID_FILL,WHITE);
     floodfill((x1+x2)/2,(y1+y2)/2,BLACK);
     setcolor(WHITE);
     circle((x1+x2)/2,(y1+y2)/2,6.25);
     
     }     // func ends
     
     
     
     
