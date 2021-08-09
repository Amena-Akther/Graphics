#include<stdio.h>
#include<graphics.h>
int main()
{

    int x,y,r1,r2,start_angle,End_angle;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS SECTOR PROGRAM: \n ");
    printf("Enter Center of circle x :");
    scanf("%d",&x);
    printf(" Enter Center of circle y :");
    scanf("%d",&y);
    printf(" Enter X Radius of circle:");
    scanf("%d",&r1);
    printf(" Enter Y Radius of circle:");
    scanf("%d",&r2);
    printf(" Enter Starting angle of circle start_angle :");
    scanf("%d",&start_angle);
    printf(" Enter Ending angle of circle End_angle :");
    scanf("%d",&End_angle);

    sector(x,y,start_angle,End_angle,r1,r2);
    getch();
    closegraph();
    return 0;
}

