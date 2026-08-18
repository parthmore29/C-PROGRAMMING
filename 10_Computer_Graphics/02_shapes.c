#include<graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setbkcolor(WHITE);
    cleardevice();
    // Title
    setcolor(BLACK);
    outtextxy(280, 30, "COMPUTER GRAPHICS - SHAPES");

    // Draw shapes
    setcolor(RED);
    line(80, 100, 100, 100);

    setcolor(LIGHTGREEN);
    rectangle(80, 160, 250, 260);

    setcolor(YELLOW);
    circle(450, 150, 50);

    setcolor(MAGENTA);
    line(300, 400, 400, 280);
    line(400, 280, 500, 400);
    line(500, 400, 300, 400);

    getch();
    closegraph;


    return 0;
}