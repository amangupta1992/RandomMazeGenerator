#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <math.h>

void play(int a[1000][1000] ,int ,int,int);
void solve(struct stack adrs[1000],int ,int );

void brick(double,double,double,double);
void space(double,double,double,double);
void out_boundary(int,int,int);  // for drawing the outer boundary.
void basic_design(int,int,int);
void coord_cal(int ,int);    // it calculates the cordinate of box deletes the brick while transition from old addrs to new one
void StartMenu();

void lining_sqb(int r,int c,int a[1000][1000],int); // to outline the small square bricks.


int bx,by;  // for storing the coordinates of brick to be deleted.
int b=0;
 
 
 void testbrick(int ch,double x1,double y1,double x2,double y2); // TESTING THE COLOOR OF THE BRICK
 
int r,c,top=0,count=0;
const int LOW = 1,HIGH = 4;
int a[1000][1000];
int d,D;

struct stack             //////////////////////////////////////////////////////////
{
 int x;
 int y;
};
                

int direc();



main()
{    
      
time_t seconds;          //Declare variable to hold seconds on clock.

time(&seconds);          //Get value from system clock andplace in seconds variable.

srand((unsigned int) seconds);               //Convert seconds to a unsignedinteger.
 
  initwindow(1350, 700, "MAZE TRIAL");    
 floodfill(0,0,WHITE);
 
  int r=c=0; // Stores the values of rows and coloumns;
  int R,C; //No. of boxes
  
 /*setbkcolor(BLACK);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(500,5,"enter the ROWS ");
  
  char num[3];
 int i,k=1;
 
 while((i=getch())!=13)
    {
     r+=(i-48)*pow(10,k);
     k--;
    }
    cout<<r;
    
  num[0]=((r-(r%10))/10)+48;
  num[1]=(r%10)+48;
  num[2]='\0';
  
  outtextxy(500,5,"NUMBER OF ROWS ARE : ");
  outtextxy(500,20,num);
   
   getch();
   
   floodfill(0,0,BLUE);

 setbkcolor(BLACK);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(500,5,"enter the COLUMNS ");


 k=1;
 
 while((i=getch())!=13)
    {
     c+=(i-48)*pow(10,k);
     k--;
    }

  num[0]=((c-(c%10))/10)+48;
  num[1]=(c%10)+48;
  num[2]='\0';
  
  outtextxy(500,5,"NUMBER OF COLUMNS ARE : ");
  outtextxy(500,20,num);

getch();

 setbkcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);


floodfill(0,0,BLUE);*/


  /*cout<<" Columns: ";
  cin>> c;*/
  R=r=10;
  C=c=10;
  
   
   
  while(1)
  {
     for(int i=0;i<r;i++)
     for(int j=0; j<c; j++)
        a[i][j]=0;
      
  stack adrs[1000];   //////////////////////////////////////////////////////////////////
             
      
  adrs[top].x=0;
  adrs[top].y=0;              // initially the address is 0,0   
   
  
  
  
     
     StartMenu();
     int ch;
     ch=getch();
     ch-=48;
     
     setfillstyle(SOLID_FILL,WHITE);
     floodfill(0,0,MAGENTA);
   
   setfillstyle(SOLID_FILL,WHITE);
  floodfill(0,0,BLACK);
  
  settextstyle(3,0,6);
  setbkcolor(WHITE);
  setcolor(BLACK);
  outtextxy(100,100,"Choose Level");
  setbkcolor(RED);
  setcolor(WHITE);
  outtextxy(500,100," 1 EASY ");
  setbkcolor(GREEN);
  setcolor(WHITE);
  outtextxy(750,100," 2 MEDIUM");
  setbkcolor(BLUE);
  setcolor(WHITE);
  outtextxy(1050,100," 3 HARD");
   
   int Level=getch();
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(0,0,MAGENTA);
     
   switch(Level)
   {
    case 49: R=r=10;
             C=c=10;
             break;
             
    case 50: R=r=13;
             C=c=24;
             break;
             
    case 51: R=r=18;
             C=c=35;
             break;
   }
   
  r=(2*r)-1;
  c=(2*c)-1;
   
   basic_design(r,c,ch);
   //out_boundary(r,c);
   int H=1, L=3;
  
   out_boundary(r,c,ch);
      
 getch();
 
     a[0][0]=1;      //int k=0;
     
   while(1)
    { int ender=0;
     
     D=direc(); 
     //cout<<"Receiving "<<D<<"\n\n";
     //getch();
        
     //cout<<"Direction ? ";
     //cin>>D;
     
     switch(D)
     {  
        int nx,ny,ox,oy;
           
        case 1:
                                  
             cout<<"\n\nPresent TOP: "<<top;            //UP
             cout<<"\nPresent TOP x: "<<adrs[top].x;   
             cout<<"\nPresent TOP y: "<<adrs[top].y;
               
                if(adrs[top].x > 0) //if 1
                 {
                  nx = adrs[top].x-2;
                  ny = adrs[top].y;
                  ox = adrs[top].x;
                  oy = adrs[top].y;
                  
                 cout<<"\nFuture New: "<<nx<<ny<<"\n\n";
                  
                  if(nx==adrs[top-1].x && ny==adrs[top-1].y)// if 2
                    continue;
                  else// else 2
                    {
                     if( a[nx][ny] !=1 )//if 3
                       {
                        cout<<"\nOld: "<<ox<<oy;
                        cout<<"\nNew: "<<nx<<ny;
                        cout<<"\nMoved";
                        cout<<"\n\n";
                        
                        top++;
                        adrs[top].x = nx;
                        adrs[top].y = ny;
                        a[nx][ny]=1;
                        a[nx+1][ny]=1;
                        bx=nx+1;
                        by=ny;
                       // setcolor(WHITE);
                        //line(25+25*ny,50+25*nx,50+25*ny,50+25*nx);  
                        coord_cal(bx,by);  // panting the red brick -> white
                       }  // Pointer moved. Next iteration
                     else     //else 3
                      {
                       count++;
                       if(count==5)
                          {
                            count=0;
                           --top; 
                          }//if
                      }//else
                              //Pointer backtracked. Next iteration
                    }  
            
            }   
         break;

         
 
case 2:      
                    //right
       cout<<"\n\nPresent TOP: "<<top;
       cout<<"\nPresent TOP x: "<<adrs[top].x;   
             cout<<"\nPresent TOP y: "<<adrs[top].y;
         
           
                   
       if(adrs[top].y <c-1)
         {
          nx = adrs[top].x;
          ny = adrs[top].y+2;
          ox = adrs[top].x; 
          oy = adrs[top].y;
           
        
          cout<<"\nFuture New: "<<nx<<ny;
          cout<<"\n\n";     
           
                  
          if(top!=0)
            {
             if(nx==adrs[top-1].x && ny==adrs[top-1].y)   
               continue;                   
             else
               {
                if( a[nx][ny] !=1)
                  {
                    cout<<"\nOld: "<<ox<<oy;
                    cout<<"\nNew: "<<nx<<ny;
                    cout<<"Moved";
                    cout<<"\n\n";
               
                    top++;
                    adrs[top].x = nx;
                    adrs[top].y = ny;
                    a[nx][ny]=1;
                    a[nx][ny-1]=1;
                    bx=nx;
                    by=ny-1;
                    //setcolor(BLACK);
                    //line( 50+25*oy,25+25*ox,50+25*oy,50+25*ox );   
                     coord_cal(bx,by);   // panting the red brick -> white
                    // return; // return back to direction specifier.
                  }
                else
                 {count++;
                      if(count==5)
                      {
                        count=0;  --top;} }   //return; // return back to direction specifier
               }
            }
          else
          {
           top++;
           adrs[top].x = nx;
           adrs[top].y = ny;
           a[nx][ny]=1;
           a[nx][ny-1]=1;
                               bx=nx;
                    by=ny-1;
                            coord_cal(bx,by);
           //setcolor(BLACK);
           //line( 50+25*oy,25+25*ox,50+25*oy,50+25*ox );
          }
}         

     break;
  
  case 3:
                                 //DOWN
           cout<<"\n\nPresent TOP: "<<top;
           cout<<"\nPresent TOP x: "<<adrs[top].x;   
             cout<<"\nPresent TOP y: "<<adrs[top].y;
             
             
              
            if(adrs[top].x <r-1)
              {
               nx = adrs[top].x+2;
               ny = adrs[top].y;
               ox = adrs[top].x; 
               oy = adrs[top].y; 
               
        
               cout<<"\nFuture New: "<<nx<<ny;
               cout<<"\n\n";
                              
               if(top!=0)
            {
             if(nx==adrs[top-1].x && ny==adrs[top-1].y)   
               continue;                   
             else
               {
                if( a[nx][ny] !=1)
                  {
                    cout<<"\nOld: "<<ox<<oy;
                    cout<<"\nNew: "<<nx<<ny;
                    cout<<"Moved";
                    cout<<"\n\n";
               
                    top++;
                    adrs[top].x = nx;
                    adrs[top].y = ny;
                    a[nx][ny]=1;
                     a[nx-1][ny]=1;
                     bx=nx-1;
                     by=ny;
                    //setcolor(BLACK);
                   // line( 25+25*oy,50+25*ox,50+25*oy,50+25*ox ); 
                    coord_cal(bx,by);     // panting the red brick -> white
                    // return; // return back to direction specifier.
                  }
                else
                  {count++;
                      if(count==5)
                          { count=0;--top; } }   //return; // return back to direction specifier
               }
            }
          else
          {
           top++;
           adrs[top].x = nx;
           adrs[top].y = ny;
           a[nx][ny]=1;
           a[nx-1][ny]=1;
           bx=nx-1;
                     by=ny;
                    coord_cal(bx,by); 
       
       //    setcolor(BLACK);
         //  line( 25+25*oy,50+25*ox,50+25*oy,50+25*ox );
          }
          
}
     break;
     
case 4:            //left
           
            cout<<"\n\nPresent TOP: "<<top;
            cout<<"\nPresent TOP x: "<<adrs[top].x;   
            cout<<"\nPresent TOP y: "<<adrs[top].y;
            
            if(adrs[top].y >0)
              {
               nx = adrs[top].x;
               ny = adrs[top].y-2;
               ox = adrs[top].x; 
               oy = adrs[top].y; 
               
               cout<<"\nFuture New: "<<nx<<ny<<endl;
                     
               if(nx==adrs[top-1].x && ny==adrs[top-1].y) 
                 continue;
               else 
               {
                if( a[nx][ny] !=1)
                    {
                     cout<<"\nOld: "<<ox<<oy;
                     cout<<"\nNew: "<<nx<<ny;
                     cout<<"Moved";
                     cout<<"\n\n";
                     
                     top++;
                     adrs[top].x = nx;
                     adrs[top].y = ny;
                     a[nx][ny]=1;
                     a[nx][ny+1]=1;
                     bx=nx;
                     by=ny+1;
                     //setcolor(BLACK);
                    // line( 50+25*ny,25+25*nx,50+25*ny,50+25*nx );      
                     coord_cal(bx,by);// panting the red brick -> white
                     //return; // return back to direction specifier.
                    }
                  else
                     {count++;
                      if(count==5)
                       {count=0; --top;} } 
               }
                     //return; // return back to direction specifier.
                  
}
          
          break;
           
}//END OF switch()
           
    for(int i=0;i<r;i+=2)
     for(int j=0; j<c; j+=2)
        {  if(a[i][j]==1)
              ender++;
         }
             
    if(ender==(R*C))
         break;
    
    
      
                   
     
     
     
}// while loop ends
   
   lining_sqb(r, c,a,ch);
 
 
  out_boundary(r,c,ch);
    play(a,r,c,ch);
    // while (!kbhit( ))
       // delay(750);   //getch();
        
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(0,0,MAGENTA);
    }
}  // END OF main()





int direc()
{
 d= rand() % (HIGH - LOW + 1) + LOW;
 
 if(d!=b)
   { 
    b=d;
    return d;
   }
 else
 { int e;
   e = direc();
   return e;
   }
}
