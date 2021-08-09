#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
      initwindow(700,700, "CSE-4742");
      printf("THIS IS TRIANGLE ROTATE PROGRAM: \n ");
      float x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,a,t;

        printf("Enter coordinates of starting point:");
        scanf("%f%f",&x1,&y1);
        printf("\n Enter coordinates of middle point:");
        scanf("%f%f",&x2,&y2);
        printf("\n Enter coordinates of ending point:");
        scanf("%f%f",&x3,&y3);
        printf("\n Enter angle for rotation:");
        scanf("%f",&a);
        setcolor(10);
        line(x1,y1,x2,y2);
        line(x2,y2,x3,y3);
        line(x3,y3,x1,y1);

        outtextxy(x3+2,y3+2,"Original Triangle");

        t=a*(3.14/180);
          x4=(x1*cos(t))-(y1*sin(t));
          y4=(x1*sin(t))+(y1*cos(t));

          x5=(x2*cos(t))-(y2*sin(t));
          y5=(x2*sin(t))+(y2*cos(t));

          x6=(x3*cos(t))-(y3*sin(t));
          y6=(x3*sin(t))+(y3*cos(t));
          setcolor(12);
         line(x4,y4,x5,y5);
         line(x5,y5,x6,y6);
         line(x6,y6,x4,y4);

          outtextxy(x6+2,y6+2,"After rotation");


        getch();
}

