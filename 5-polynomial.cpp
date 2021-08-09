#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void plotcircle(int,int,int,int);

int main()
{

    initwindow(500,500, "CSE-4742");
    printf("THIS IS SCAN CONVERTING CIRCLE PROGRAM: \n");
    int xc,yc,x,y,xend,r,d;


    printf("\n\n Enter x co-ordinate:");
    scanf("%d",&xc);
    printf("\n\n Enter y co-ordinate:");
    scanf("%d",&yc);
    printf("\n\n Enter radius:");
    scanf("%d",&r);
    x=0;
    xend=r/sqrt(2);
    plotcircle(xc,yc,x,y);
    while(x<xend)
    {
        x=x+1;
        y=sqrt((r*r)-(x*x));
        plotcircle(xc,yc,x,y);
    }
    getch();
    closegraph();
}

void plotcircle(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,2);
    putpixel(xc-x,yc+y,2);
    putpixel(xc+x,yc-y,2);
    putpixel(xc+y,yc+x,2);
    putpixel(xc-y,yc-x,2);
    putpixel(xc-y,yc+x,2);
    putpixel(xc+y,yc-x,2);
    putpixel(xc-x,yc-y,2);
}
