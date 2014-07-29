#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
void del_cir(int ,int );
void draw_cir(int,int,int );
void play(int a[1000][1000],int r,int c,int ch)
{   int px=0,py=0,fx,fy;  // stores adddress of present and future  position
    int test;
    
    draw_cir(px,py,ch);
    
    while(1)
    { test=getch();
    
      if( test==KEY_UP)
      {  
          if(px > 0) //if 1
                 {
                  fx = px-2;
                  fy = py;
                  
                  
                     if( a[px-1][py] !=0 )//if no.2
                       {
                          //cout<<"\a";                 // delete the circle at px ,py  anddraw new on next place
                        del_cir(px,py);
                        draw_cir(fx,fy,ch);
                        
                        
                        px=fx;
                        py=fy;
                       
                        
                       }  // if no.2 ends
                       }  // if no. 1 ends

          } // up case ends
          
          
      else if( test==KEY_RIGHT)
      {
           if(py < c) //if 1
                 {
                  fx = px;
                  fy = py+2;
                  
                  
                     if( a[px][py+1] !=0 )//if no.2
                       {
                            //cout<<"\a";                 // delete the circle at px ,py  anddraw new on next place
                         del_cir(px,py);
                        draw_cir(fx,fy,ch);
                        
                        
                        px=fx;
                        py=fy;
                       
                        
                       }  // if no.2 ends
                       } 
           }  // right case ends
      
      else if( test==KEY_DOWN)
      {
           if(px<r) //if 1
                 {
                  fx = px+2;
                  fy = py;
                  
                  
                     if( a[px+1][py] !=0 )//if no.2
                       {
                            //cout<<"\a";                 // delete the circle at px ,py  anddraw new on next place
                       del_cir(px,py);
                        draw_cir(fx,fy,ch);
                        
                        
                        px=fx;
                        py=fy;
                       
                        
                       }  // if no.2 ends
                       } 
           }  //down case ends
      
      else if( test==KEY_LEFT)
      { if(py > 0) //if 1
                 {
                  fx = px;
                  fy = py-2;
                  
                  
                     if( a[px][py-1] !=0 )//if no.2
                       {
                             //cout<<"\a";                // delete the circle at px ,py  anddraw new on next place
                       del_cir(px,py);
                        draw_cir(fx,fy,ch);
                        
                        
                        px=fx;
                        py=fy;
                       
                        
                       }  // if no.2 ends
                       } 
           } // left case ends
       
       
             if( (px==r-1) && (py==c-1))
             break;
           
           }// while ends
     
     
           setcolor(BLUE);

setbkcolor(WHITE);
settextstyle(3,0,6);
outtextxy(500,500,"YOU FOUND YOUR WAY OUT :)");
     delay(2000);
     
     
     
     
     } // function ends.
