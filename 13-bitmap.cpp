#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    initwindow(500,500, "CSE-4742");
    printf("THIS IS BITMAP CHARACTER ALGORITHM PROGRAM: \n ");
    int i,j;
    int a[10][10] =
    {
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,1,1,0,0,0,0,1,1},
                    {1,1,0,1,1,0,0,0,1,1},
                    {1,1,0,1,1,0,0,0,1,1},
                    {1,1,0,0,1,1,0,0,1,1},
                    {1,1,0,0,1,1,0,0,1,1},
                    {1,1,0,0,0,1,1,0,1,1},
                    {1,1,0,0,0,1,1,0,1,1},
                    {1,1,0,0,0,0,1,1,1,1},
                    {1,1,0,0,0,0,0,0,1,1}
    };


    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            putpixel(100+j,100+i,WHITE*a[i][j]);
        }
    }
    getch();
    closegraph();
    return 0;
}
