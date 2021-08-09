#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>s
#include<conio.h>

int main()
{
    int x,y,r;
    float sc,r1;
    initwindow(700,500, "CSE-4742");
    printf("THIS IS OUR CIRCLE MAGNIFY PROGRAM:\n");
    printf("Enter the co-ordinate of circle :");
    scanf("%d %d",&x,&y);
    printf("\nEnter the Radius:");
    scanf("%d",&r);
    setcolor(3);
    circle(x,y,r);
    outtextxy(x,y,"Original Circle");
    printf("\nEnter the scaling factor :");
    scanf("%f",&sc);
    r1=r*sc;
    setcolor(12);
    circle(x,y,r1);
    outtextxy(350,200,"After Scaling");
    getch();
}
