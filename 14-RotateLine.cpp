#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
     initwindow(900,900, "CSE-4742");
     printf("THIS IS ROTATE A LINE PROGRAM: \n ");
      float x1,y1,x2,y2,x3,y3,x4,y4,a,t;

        printf("Enter coordinates of starting point:");
        scanf("%f%f",&x1,&y1);
        printf("\n Enter coordinates of ending point:");
        scanf("%f%f",&x2,&y2);
        printf("\n Enter angle for rotation:");
        scanf("%f",&a);
        setcolor(9);
        line(x1,y1,x2,y2);
        outtextxy(x2+2,y2+2,"Original line");
        t=a*(3.14/180);
          x3=(x1*cos(t))-(y1*sin(t));
          y3=(x1*sin(t))+(y1*cos(t));

          x4=(x2*cos(t))-(y2*sin(t));
          y4=(x2*sin(t))+(y2*cos(t));
          setcolor(3);
          line(x3,y3,x4,y4);
          outtextxy(x3+2,y3+2,"Line after rotation");
        getch();
}
