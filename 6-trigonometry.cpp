#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14159
void plotcircle(int,int,int,int);

int main()
{

    initwindow(500,500, "CSE-4742");
    printf("THIS IS SCAN CONVERTING CIRCLE PROGRAM: \n");
    int xc,yc,x,y,xend,r,d,theta;
    float p;

    printf("\n\n Enter x co-ordinate:");
    scanf("%d",&xc);
    printf("\n\n Enter y co-ordinate:");
    scanf("%d",&yc);
    printf("\n\n Enter radius:");
    scanf("%d",&r);
    theta=0;
    p=(pi*45);
    plotcircle(xc,yc,x,y);
    while(theta<=p)
    {
        x=r* cos(theta);
        y=r * sin(theta);
        plotcircle(xc,yc,x,y);
        theta++;
    }
    getch();
    closegraph();
}

void plotcircle(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,3);
    putpixel(xc-x,yc+y,3);
    putpixel(xc+x,yc-y,3);
    putpixel(xc+y,yc+x,3);
    putpixel(xc-y,yc-x,3);
    putpixel(xc-y,yc+x,3);
    putpixel(xc+y,yc-x,3);
    putpixel(xc-x,yc-y,3);
}
