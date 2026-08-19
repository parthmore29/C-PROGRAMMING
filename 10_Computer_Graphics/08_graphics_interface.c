#include <graphics.h>

void box(int x1, int y1, int x2, int y2)
{
    rectangle(x1, y1, x2, y2);
}

void centeredText(int x, int y, char text[], int size)
{
    settextstyle(DEFAULT_FONT, HORIZ_DIR, size);
    outtextxy(x - textwidth(text) / 2, y, text);
}

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    /* Background */
    setbkcolor(BLACK);
    cleardevice();

    /* ===== HEADER ===== */

    setcolor(CYAN);
    centeredText(320, 25, "C // GRAPHICS CONSOLE", 3);

    setcolor(LIGHTGRAY);
    centeredText(320, 60, "INTERACTIVE COMPUTER GRAPHICS INTERFACE", 1);

    line(40, 85, 600, 85);

    /* ===== SYSTEM PANEL ===== */

    setcolor(LIGHTGRAY);
    box(35, 105, 285, 245);

    setcolor(CYAN);
    outtextxy(55, 125, "SYSTEM");

    setcolor(WHITE);
    outtextxy(55, 155, "Graphics engine");

    setcolor(GREEN);
    outtextxy(195, 155, "ONLINE");

    setcolor(WHITE);
    outtextxy(55, 180, "Display mode");
    outtextxy(195, 180, "640 x 480");

    outtextxy(55, 205, "Language");
    outtextxy(195, 205, "C");

    setcolor(LIGHTGRAY);
    line(55, 225, 265, 225);

    setcolor(GREEN);
    outtextxy(55, 232, "STATUS: READY");

    /* ===== MODULE PANEL ===== */

    setcolor(LIGHTGRAY);
    box(310, 105, 605, 365);

    setcolor(CYAN);
    outtextxy(330, 125, "GRAPHICS MODULES");

    /* Module 01 */
    setcolor(LIGHTBLUE);
    box(330, 155, 585, 215);

    setcolor(WHITE);
    outtextxy(350, 170, "01   SHAPES");

    setcolor(LIGHTGRAY);
    outtextxy(350, 192, "Circles / Rectangles / Lines");

    /* Module 02 */
    setcolor(LIGHTBLUE);
    box(330, 225, 585, 285);

    setcolor(WHITE);
    outtextxy(350, 240, "02   COLORS");

    setcolor(LIGHTGRAY);
    outtextxy(350, 262, "RGB / Fill / Text colors");

    /* Module 03 */
    setcolor(LIGHTBLUE);
    box(330, 295, 585, 350);

    setcolor(WHITE);
    outtextxy(350, 308, "03   TEXT");

    setcolor(LIGHTGRAY);
    outtextxy(350, 330, "Fonts / Size / Alignment");

    /* ===== FOOTER ===== */

    setcolor(DARKGRAY);
    line(40, 390, 600, 390);

    setcolor(LIGHTGRAY);
    centeredText(320, 410, "GRAPHICS ENGINE READY", 1);

    setcolor(GREEN);
    centeredText(320, 435, "SYSTEM ONLINE  |  C / BGI", 1);

    delay(5000);

    closegraph();

    return 0;
}