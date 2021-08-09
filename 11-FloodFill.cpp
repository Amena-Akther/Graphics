#include<stdio.h>
#include<graphics.h>
#include<dos.h>

void floodFill(int x,int y,int oldcolor,int newcolor)
{
	if(getpixel(x,y) == oldcolor)
	{

		putpixel(x,y,newcolor);
		floodFill(x+1,y,oldcolor,newcolor);
		floodFill(x,y+1,oldcolor,newcolor);
		floodFill(x-1,y,oldcolor,newcolor);
		floodFill(x,y-1,oldcolor,newcolor);
	}
}

int main()
{


    initwindow(500,500, "CSE-4742");
    printf("THIS IS FLOODFILL PROGRAM: \n ");
	int x,y,r;
    printf("Enter the value of x for circle: ");
	scanf("%d",&x);
	printf(" Enter the value of y for circle: ");
	scanf("%d",&y);
    printf(" Enter radius of circle: ");
	scanf("%d", &r);
	circle(x,y,r);
	floodFill(x,y,0,7);
    delay(5000);
	closegraph();

	return 0;
}
