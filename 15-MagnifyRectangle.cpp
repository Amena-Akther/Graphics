#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,sx,sy;
    initwindow(800,800, "CSE-4742");
    printf("THIS IS OUR RECTANGLE MAGNIFY PROGRAM:\n");
    printf("Enter the co-ordinates of the rectangle :");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    setcolor(5);
    rectangle(x1,y1,x2,y2);
    outtextxy(x1+2,y1+2,"Original Rectangle");

    printf("\nEnter scaling factors:");
    scanf("%f%f",&sx,&sy);
    x1=x1*sx;
    y1=y1*sy;
    x2=x2*sx;
    y2=y2*sy;

    setcolor(10);
    rectangle(x1,y1,x2,y2);
    outtextxy(x2+2,y2+2,"After scaling");
    getch();
    return 0;
}
