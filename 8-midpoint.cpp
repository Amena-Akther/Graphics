#include<stdio.h>
#include<graphics.h>

int main()
{
    initwindow(500,500, "CSE-4742");
    printf("THIS IS MIDPOINT CIRCLE PROGRAM: \n ");
	int xc,yc,r;
	printf("Enter co-ordinates of center(x and y): ");
	scanf("%d%d", &xc, &yc);
    printf(" \n Enter radius of circle: ");
	scanf("%d", &r);

    int x = 0,y =r,d = 1 - r;
      while (x <= y)
        {
          if (d < 0)
          {
		     d = d+2*x + 3;
          }

	else
        {
		d = d+2* (x - y) + 5;
		y--;
	}
	x++;

	    putpixel(xc + x, yc + y, WHITE);
		putpixel(xc + y, yc + x, WHITE);
		putpixel(xc - y, yc + x, WHITE);
		putpixel(xc - x, yc + y, WHITE);
		putpixel(xc - x, yc - y, WHITE);
		putpixel(xc - y, yc - x, WHITE);
		putpixel(xc + y, yc - x, WHITE);
		putpixel(xc + x, yc - y, WHITE);
    }


    getch();
	return 0;
}
