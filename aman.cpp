#include<iostream.h>
#include <graphics.h>
#include<time.h>
#include<stdio.h>
void man(int a[1000][1000])
{
       



int j=0;
int i=0;
int k=0;
int l=0;
int z=0;
int c=1;    
int d=0;   

//initwindow(1000, 1000, "First Sample");

/*setcolor(WHITE);
for(int i=1000;i>0;i--,j++)
{rectangle(i, i,j, j);
}*/
int xleft=150;
int ytop=150;
int xright=160;
int ybottom=160;

for(l=0;l<20;l++)
{for(k=0;k<21;k++)
{
if(a[l][k]==0)
setcolor(BLACK);
else if(a[l][k]==1)
setcolor(WHITE);
else;
for(i=0,j=0;i<10;i++,j--)
{rectangle(i+xleft, i+ytop,j+xright, j+ybottom);
}
xleft+=10;
xright+=10;
}
ytop+=10;
ybottom+=10;
xleft-=210;
xright-=210;
}
setcolor(BLUE);
//setcolor(GREEN);
setbkcolor(WHITE);
int test;

outtextxy(120,155,"IN ->");
outtextxy(365,325,"-> OUT");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(200,100,"LEVEL 1");
xleft=150;
ytop=160;
xright=160;
ybottom=170;
setcolor(YELLOW);
for(i=0,j=0;i<10;i++,j--)
{rectangle(i+xleft,i+ytop,j+xright,j+ybottom);
setcolor(RED);
}


while(1)
{if(!(c==18&&d==20))
{test=getch();
if(test==87||test==119)
{
if(a[c-1][d]==1)
{setcolor(WHITE);
for(i=0,j=0;i<5;i++,j++)
{rectangle(150+(10*(d))+i,150+(10*c)+i,160+(10*(d))-j,160+(10*c)-j);
}
c--;
setcolor(YELLOW);
for(i=0,j=0;i<5;i++,j++)
{rectangle(150+(10*d)+i,150+(10*c)+i,160+(10*d)-j,160+(10*c)-j);
setcolor(RED);

}
}
else
cout<<"\a";

outtextxy(500,500,"UP");}
else if(test==65||test==97)
{outtextxy(500,500,"LEFT");

if(a[c][d-1]==1)
{setcolor(WHITE);
for(i=0,j=0;i<5;i++,j++)
{rectangle(150+(10*(d))+i,150+(10*c)+i,160+(10*(d))-j,160+(10*c)-j);
}
d--;
setcolor(YELLOW);
for(i=0,j=0;i<5;i++,j++)
{rectangle(150+(10*d)+i,150+(10*c)+i,160+(10*d)-j,160+(10*c)-j);
setcolor(RED);

}
}
else
cout<<"\a";

}
else if(test==83||test==115)
{
if(a[c+1][d]==1)
{setcolor(WHITE);
for(i=0,j=0;i<5;i++,j++)
{rectangle(150+(10*(d))+i,150+(10*c)+i,160+(10*(d))-j,160+(10*c)-j);
}
c++;
setcolor(YELLOW);
for(i=0,j=0;i<5;i++,j++)
{rectangle(150+(10*d)+i,150+(10*c)+i,160+(10*d)-j,160+(10*c)-j);
setcolor(RED);

}
}
else
cout<<"\a";

outtextxy(500,500,"DO");
}
else if(test==68||test==100)
{
if(a[c][d+1]==1)
{setcolor(WHITE);
for(i=0,j=0;i<5;i++,j++)
{rectangle(150+(10*(d))+i,150+(10*c)+i,160+(10*(d))-j,160+(10*c)-j);
}
d++;
setcolor(YELLOW);
for(i=0,j=0;i<5;i++,j++)
{rectangle(150+(10*d)+i,150+(10*c)+i,160+(10*d)-j,160+(10*c)-j);
setcolor(RED);

}
}
else
cout<<"\a";

outtextxy(500,500,"RI");
}
else

outtextxy(500,500,"IN");
}
else
{setcolor(RED);

outtextxy(500,500,"YOU WON");

setcolor(GREEN);

for(int xa=0;xa<50;xa++)
circle(450,450,50-xa);

setcolor(YELLOW);
for(int xa=0;xa<50;xa++)
circle(450,650,50-xa);

setcolor(BLUE);

for(int xa=0;xa<50;xa++)
circle(450,550,50-xa);}
    }
 while (!kbhit( ))
    {
        delay(200);
    }
     while (kbhit( ))
    {
        delay(200);
    }
    //return 0;
}
