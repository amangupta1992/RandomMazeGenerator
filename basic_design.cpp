#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
//void brick(double,double,double,double);
void testbrick(int ch,double x1,double y1,double x2,double y2);
void space(double,double,double,double);

void basic_design(int r,int c,int ch)
{  double x1=25,y1=25,x2=50,y2=50;
   for(int i=0; i<r; i++)
      {
           for(int j=0; j<c; j++)
      {  
         
         if((i%2==0)&&(j%2==0)) // draw square
         {space(x1,y1,x2,y2);
                            
                             x1=x2 ;
                             x2=x1+12.5;
                             
         }// if ends
         
         else 
         { //brick(x1,y1,x2,y2);
            testbrick(ch,x1,y1,x2,y2);
                  if((j+1)%2==0)
                            {  x1= x2;
                              x2=x1+25.0;
                              }
                              
                  else
                              {x1= x2;
                               x2=x1+12.5;
                                }
                   
           } // else ends
         
            
       /*line( 50+25*j,25+25*i,50+25*j,50+25*i );// Right vertical lines
       line( 25+25*j,50+25*i,50+25*j,50+25*i );// Downwards horizontal lines.*/
      
           
      } //for J ends
      y1=y2;
      x1=25;
      x2=50;
      if(((i+1)%2)!=0)
      {
      y2=y2+12.5;
      }
      else
      {
      y2=y2+25.0;
      }
      
      } //for i ends
     }
