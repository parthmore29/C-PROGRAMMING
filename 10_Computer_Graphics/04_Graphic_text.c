#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setbkcolor(DARKGRAY);
    cleardevice();

    // Title
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    outtextxy(180, 50, "COMPUTER GRAPHICS");

    // Normal text
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(100, 150, "HELLO, WORLD!");

    // Bigger text
    setcolor(CYAN);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(100, 220, "HELLO, WORLD!");

    // Bold-looking large text
    setcolor(LIGHTGREEN);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
    outtextxy(100, 300, "C GRAPHICS");

    // Different direction
    setcolor(MAGENTA);
    settextstyle(DEFAULT_FONT, VERT_DIR, 2);
    outtextxy(600, 400, "VERTICAL");

    getch();
    closegraph;

    return 0;
}