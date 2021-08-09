#include<stdio.h>
#include <graphics.h>

int  main()
{
    initwindow(500,500, "CSE-4742");
    printf("THIS IS BRESHENHAMS CIRCLE PROGRAM: \n\n ");

    int xc,yc,r;
    printf(" Enter the values of xc and yc : ");
    scanf("%d%d",&xc,&yc);
    printf(" \n  Enter the value of radius :");
    scanf("%d",&r);
	int x=0,y=r,d=3-(2*r);
    while(x<=y)
        {
		if(d<=0)
		 {
			d=d+(4*x)+6;
		}
		else
		 {
			d=d+(4*x)-(4*y)+10;
			y=y-1;
		}
		x=x+1;
		putpixel(x+xc,y+yc,BLUE);
		putpixel(x+xc,-y+yc,BLUE);
		putpixel(-x+xc,-y+yc,BLUE);
		putpixel(-x+xc,y+yc,BLUE);
		putpixel(y+xc,x+yc,BLUE);
		putpixel(y+xc,-x+yc,BLUE);
		putpixel(-y+xc,-x+yc,BLUE);
		putpixel(-y+xc,x+yc,BLUE);
	}
    getch();

    return 0;
}
