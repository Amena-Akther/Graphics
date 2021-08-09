#include<graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{

initwindow(500,500, "CSE-4742");
float x1,y1,x2,y2,x1new,y1new,x2new,y2new,m,b,i;
printf("Enter starting & Ending points :-\n");
printf("Enter x1,y1 :");
scanf("%f%f",&x1,&y1);
printf("Enter x2,y2 :");
scanf("%f%f",&x2,&y2);
x1new=floor(x1);
y1new=floor(y1);
x2new=floor(x2);
y2new=floor(y2);
printf("x1= %f, y1= %f, x2= %f, y2= %f\n",x1new,y1new,x2new,y2new);
m=(y2-y1)/(x2-x1);
b=y1new-(m*x1new);
if(m<1 || m==1)
{
    for(i=x1new+1;i<x2new;i++)
    {
        y2=(m*i)+b;
        putpixel(i,y2,BLUE);
    }
}
else
{
    for(i=y1new+1;i<y2new;i++)
    {
        x2=(i-b)/m;
        putpixel(x2,i,BLUE);
    }
}

getch();
closegraph();

return 0;

}
