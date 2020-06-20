#include<stdio.h>
#include <graphics.h>
int main()
{
    int gd = DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGi");

    setcolor(YELLOW);
    outtextxy(187,120,"TIC-TAC-TOE GAME");
    setcolor(WHITE);
    outtextxy(350,230,"Player 1 symbol is:  X ");
    outtextxy(350,250,"Player 2 symbol is:  O ");
    setcolor(GREEN);
    outtextxy(175,150,"Player 1 Now your turn");
    setcolor(GREEN);
    outtextxy(165,330,"Developed by Prionto Abdullah");
    setcolor(WHITE);
    rectangle(200,200,230,230);
    rectangle(235,200,265,230);
    rectangle(270,200,300,230);
    rectangle(200,235,230,265);
    rectangle(235,235,265,265);
    rectangle(270,235,300,265);
    rectangle(200,270,230,300);
    rectangle(235,270,265,300);
    rectangle(270,270,300,300);


    getch();
    closegraph();
    return 0;
}
