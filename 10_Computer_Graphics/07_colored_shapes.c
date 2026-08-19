#include <graphics.h>

int main()
{
    int gd =DETECT,gm;

    initgraph(&gd, &gm,"");

    setbkcolor(DARKGRAY);
    cleardevice();

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    outtextxy(220, 30, "THE COLORED SHAPES IN C");

    // White circle
    setcolor(WHITE_BRUSH);
    circle(150, 180, 60);
    setfillstyle(SOLID_FILL, WHITE_BRUSH);
    floodfill(150, 180, WHITE_BRUSH);

    // Green rectangle
    setcolor(GREEN);
    rectangle(270, 120, 420, 240);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(300, 150, GREEN);

    // Blue triangle
    setcolor(BLUE);
    line(520, 240, 590, 120);
    line(590, 120, 660, 240);
    line(660, 240, 520, 240);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(590, 200, BLUE);

    // Yellow ellipse
    setcolor(YELLOW);
    ellipse(300, 350, 0, 360, 120, 60);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300, 350, YELLOW);

    getch();
    closegraph;

    return 0;
}