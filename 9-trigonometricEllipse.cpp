#include <graphics.h>
#include <stdio.h>
#include <math.h>
# define pi 3.14159
int main()
{
    int r,theta,a,b;
    float p,T,x,y;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR TRIGONOMETRIC ECLLIPSE PROGRAM: \n ");
    printf("Enter the major axis a : ");
    scanf("%d",&a);
    printf("\n Enter the minor axis b : ");
    scanf("%d",&b);
    int h=180, k=150;
    theta= 0;
    p=(pi*90);
    for(theta= 0;theta<=p; theta++)
    {
        x = a*cos(theta)+h ;
        y = b*sin(theta)+k;
        putpixel(x+h,y+k,5);
    }

    getch();
    closegraph();

    return 0;

}
