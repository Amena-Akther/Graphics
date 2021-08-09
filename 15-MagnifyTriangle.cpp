#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{

    float x1,y1,x2,y2,x3,y3,sx,sy;
    initwindow(1000,1000, "CSE-4742");
    printf("THIS IS OUR TRIANGLE MAGNIFY PROGRAM:\n");
    printf("Enter coordinates of point:\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    scanf("%f%f",&x3,&y3);

    setcolor(6);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    outtextxy(x1+2,y1+2,"Original Triangle");
    printf("Enter scaling factors:\n");
    scanf("%f%f",&sx,&sy);
    x1=x1*sx;
    y1=y1*sy;
    x2=x2*sx;
    y2=y2*sy;
    x3=x3*sx;
    y3=y3*sy;

    setcolor(13);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    outtextxy(x3+2,y3+2,"After scaling");
    getch();
    return 0;
}
