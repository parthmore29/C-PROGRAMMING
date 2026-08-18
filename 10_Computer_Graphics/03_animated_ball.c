#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    int x = 80, y = 250;

    initgraph(&gd, &gm, "");

    setbkcolor(WHITE);
    cleardevice();

    setcolor(BLACK);
    outtextxy(250, 50, "MOVING BALL");

    while(x < 600)
    {
        cleardevice();

        setcolor(WHITE);
        outtextxy(250, 50, "MOVING BALL");

        setcolor(LIGHTBLUE);
        circle(x, y, 30);

        setfillstyle(SOLID_FILL, LIGHTBLUE);
        floodfill(x, y, LIGHTBLUE);

        delay(20);

        x += 2;
    }

    getch();
    closegraph;

    return 0;
}