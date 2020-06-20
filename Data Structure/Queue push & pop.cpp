#include<stdio.h>
 int que[20],x=0,font=0,rear=0,ch,i;

int main()
{
    printf("  1. Push a element\n  2. Pop a element\n  3. View Top element\n\n");
    while(1)
    {
        printf("\nEnter Your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(x==10)
                printf("\nQueue is Overflow\n");
            else
            {
                printf("Insert a element to push in stack:  ");
                scanf("%d",&que[rear]);
                rear++;
                x++;
                printf("Queue elements are: ");
                for(i=font; i<rear; i++)
                {
                    printf("%d ", que[i]);
                }
                printf("\n");
            }
            break;
        case 2:
            if(font==rear)
                printf("\nQueue is Underflow\n");
            else
            {
                printf("\nPoped element is:  %d\n",que[font]);
                font++;
                x--;
                printf("Queue elements are: ");
                for(i=font; i<rear; i++)
                {
                    printf("%d ", que[i]);
                }
                printf("\n");
            }
            break;
        case 3:
             if(font==rear)
                printf("\nQueue is Underflow\n");
            else
          printf("\nTop element is: %d\n", que[font]);
          break;
        default:
            printf("Wrong Choice! Please select the correct choice.\n");
        }
    }
    return 0;
}
