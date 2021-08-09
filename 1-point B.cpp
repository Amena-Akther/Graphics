#include <graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,sa,sb;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR FIRST PROGRAM: \n");
    //circle(50,50,30);    //circle(x, y, radius);

    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    sa=floor(a+0.5);
    sb=floor(b+0.5);
    printf("a = %f, b=%f\n",sa,sb);
    putpixel(sa,sb,10);

    getch();
    closegraph();

    return 0;

}
