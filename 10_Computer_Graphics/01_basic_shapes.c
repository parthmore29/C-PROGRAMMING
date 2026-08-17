
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setbkcolor(BLACK);
    cleardevice();

    // Title
    setcolor(WHITE);
    outtextxy(250, 40, "BASIC COMPUTER GRAPHICS");

    // Line
    setcolor(LIGHTBLUE);
    line(100, 120, 300, 120);
    outtextxy(170, 135, "Line");

    // Rectangle
    setcolor(GREEN);
    rectangle(100, 200, 300, 320);
    outtextxy(175, 335, "Rectangle");

    // Circle
    setcolor(YELLOW);
    circle(500, 180, 70);
    outtextxy(475, 265, "Circle");

    // Ellipse
    setcolor(MAGENTA);
    ellipse(500, 350, 0, 360, 100, 55);
    outtextxy(475, 420, "Ellipse");

    // Filled shapes
    setfillstyle(SOLID_FILL, RED);
    floodfill(500, 180, YELLOW);

    setfillstyle(SOLID_FILL, CYAN);
    floodfill(150, 250, GREEN);

    getch();
    closegraph;

    return 0;
}

