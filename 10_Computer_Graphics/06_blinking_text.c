#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setbkcolor(BLACK);
    cleardevice();

    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);

    for(int i = 0; i < 8; i++)
    {
        setcolor(YELLOW);
        outtextxy(200, 220, "HELLO!");

        delay(400);

        setcolor(BLACK);
        outtextxy(200, 220, "HELLO!");

        delay(400);
    }

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(230, 350, "Blinking complete!");

    getch();
    closegraph;

    return 0;
}