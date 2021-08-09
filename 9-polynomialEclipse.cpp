#include <graphics.h>
#include <stdio.h>
#include <math.h>
# define pi 3.14159

int main()
{
    float x,y,a,b,l;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR POLYNOMIAL ELLIPSE PROGRAM: \n ");
    printf("Enter the major axis a : ");
    scanf("%f",&a);
    printf("\n Enter the minor axis b : ");
    scanf("%f",&b);
    int h=150, k=180;
    x=0;
    while(x<=a)
    {
        x=x+1;
        y=b*sqrt(1-((x*x))/(a*a));
        putpixel(x+h,y+k, 3);
        putpixel(x+h,-y+k,3);
        putpixel(-x+h,-y+k,3);
        putpixel(-x+h,y+k,3);
    }
    getch();
    closegraph();

    return 0;

}
