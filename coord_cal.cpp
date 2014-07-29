#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
void brick(double,double,double,double);
void space(double,double,double,double);

void coord_cal(int bx,int by)
{                   double bx1,by1,bx2,by2;
                    //double nx1,ny1,nx2,ny2;
     double x1,y1,x2,y2=25;
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
      
      
      
      space(x1,y1,x2,y2);
      
      setcolor(WHITE);
      rectangle(x1,y1,x2,y2);
      
    
      
     } // fuction ends
