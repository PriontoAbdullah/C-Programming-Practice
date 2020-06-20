#include<stdio.h>
#include <graphics.h>
int main()
{
    int gd = DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGi");
    char nameX,nameO;

printf("\t\t\t\t\t\tTic - Tac- Toe");
printf("\nEnter the name of the player playing for \'X\': ");
//scanf("%s",&nameX);
printf("\nEnter the name of the player playing for \'O\': ");
//scanf("%s",&nameO);


bar(200,250,200,200);
bar(300,350,300,300);
bar(400,250,450,300);
bar(150,250,200,300);

bar(300,350,300,300);
bar(250,350,300,400);


bar(150,150,100,100);
bar(150,150,100,100);

arc(400,320,0,360,10);


    getch();
    closegraph();
    return 0;
}
