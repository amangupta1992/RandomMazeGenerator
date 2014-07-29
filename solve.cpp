#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>

struct stack             //////////////////////////////////////////////////////////
{
 int x;
 int y;
};
void draw_cir(int,int,int);
 void solve(struct stack adrs[1000],int dx,int dy)       // dx , dy  for storing the address of destination box
 {    
      for(int i=0; (adrs[i].x!=dx) && (adrs[i].y!=dy) ;i++)
      {  draw_cir(adrs[i].x,adrs[i].y,1);
              } // for ends
      
      
      } //func ends
