#include<stdio.h>
main()
{
    int count,score,total;
    count=total=0;
    while(count<4)
    {
    printf("\n Enter your score: ");
    scanf("%d",&score);
    if ((score<0) || (score>100))
        continue;
           total+=score;
    printf("\n Total score is: %d.\n\n",total);
    count++;
    }
    getch();
}
