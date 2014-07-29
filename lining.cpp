#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>



void lining_sqb(int r,int c,int a[1000][1000],int ch)
{ 
     int bx,by;
     
     for(int k=0; k<r; k++)
       for(int s=0; s<c; s++)
         {
          if(a[k][s]==0)
            {
             bx = k;
             by = s;
             
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
      
      //bx1=x1;by1=y1;bx2=x2;by2=y2;
            switch(ch)
  {         case1:setcolor(RED);break;
            case 2:setcolor(GREEN);break;
            case 3:setcolor(BLUE);break;
  }
             //setcolor(RED);
             rectangle(x1,y1,x2,y2);
            } // if ends
         }   // s ends
         
}   // k ends

