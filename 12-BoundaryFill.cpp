#include<stdio.h>
#include <graphics.h>
#include<dos.h>

void boundaryFill(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
       getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill(x + 1, y, fill_color, boundary_color);
        boundaryFill(x, y + 1, fill_color, boundary_color);
        boundaryFill(x - 1, y, fill_color, boundary_color);
        boundaryFill(x, y - 1, fill_color, boundary_color);
    }
}
int main()
{
    initwindow(500,500, "CSE-4742");
    printf("THIS IS BOUNDARYFILL ALGORITHM PROGRAM: \n ");
	int x,y,r;
	printf("Enter the value of x for circle: ");
	scanf("%d",&x);
	printf(" Enter the value of y for circle: ");
	scanf("%d",&y);
    printf(" Enter radius of circle: ");
	scanf("%d", &r);
	circle(x,y,r);
	boundaryFill(x,y,9,15);
    delay(10000);
	closegraph();

    return 0;
}

