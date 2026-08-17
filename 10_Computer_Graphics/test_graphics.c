#include <graphics.h>
#include<stdio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setcolor(RED);
    circle(300, 200, 80);

    getch();
    closegraph;

    return 0;
}