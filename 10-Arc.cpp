#include<stdio.h>
#include<graphics.h>
int main()
{

    int x,y,r,start_angle,End_angle;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS ARC PROGRAM: \n ");
    printf("Enter Center of circle x :");
    scanf("%d",&x);
    printf(" Enter Center of circle y :");
    scanf("%d",&y);
    printf(" Enter Radius of circle r :");
    scanf("%d",&r);
    printf(" Enter Starting angle of circle start_angle :");
    scanf("%d",&start_angle);
    printf(" Enter Ending angle of circle End_angle :");
    scanf("%d",&End_angle);

    arc(x,y,start_angle,End_angle,r);
    getch();
    closegraph();
    return 0;
}
