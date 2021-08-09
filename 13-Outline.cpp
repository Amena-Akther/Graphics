#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(1024,700, "CSE-4742");
    printf("THIS IS OUTLINE CHARACTER ALGORITHM PROGRAM: \n ");
    delay(500);
    line(100, 100, 100, 600);
    delay(500);
    line(150, 150, 150, 310);
    delay(500);
    line(150, 360, 150, 600);
    delay(500);

    line(100, 100, 300, 100);
    delay(500);
    line(150, 150, 300, 150);
    delay(500);
    line(150, 310, 300, 310);
    delay(500);
    line(150, 360, 300, 360);
    delay(500);

    arc(300, 230, 270, 90, 130);
    delay(500);
    arc(300, 230, 270, 90, 80);
    delay(500);

    line(100, 600, 150, 600);


    cin.get();
}
