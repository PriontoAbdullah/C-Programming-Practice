#include<stdio.h>
int main()
{
    float x, y, z,avg,sum;
    printf("Enter 1st Student marks: ");
    scanf("%f", &x);
     printf("Enter 2nd Student marks: ");
    scanf("%f", &y);
   printf("Enter 3rd Student marks: ");
    scanf("%f", &z);
    sum=x+y+z;
    avg=sum/3;
    printf("The Average is: %f\n",avg);
    if(sum>=40)
        printf("Pass\n");
    else
        printf("Fail\n");
    return 0;
}
