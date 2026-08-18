#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setbkcolor(DARKGRAY);
    cleardevice();

    setcolor(RED);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    outtextxy(200, 40, "DIFFERENT FONTS");

    setcolor(WHITE);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
    outtextxy(100, 130, "YEARNING FOR A BETTER LIFE");

    settextstyle(SMALL_FONT, HORIZ_DIR, 5);
    outtextxy(100, 210, "YEARNING FOR A BETTER LIFE");

    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
    outtextxy(100, 290, "YEARNING FOR A BETTER LIFE");

    settextstyle(GOTHIC_FONT, HORIZ_DIR, 2);
    outtextxy(100, 370, "YEARNING FOR A BETTER LIFE");

    getch();
    closegraph;

    return 0;
}