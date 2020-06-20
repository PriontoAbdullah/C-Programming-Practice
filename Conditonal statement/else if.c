#include<stdio.h>
int main()
{   int mark;
    printf("Enter your marks: ");
    scanf("%d",&Mark);
    if (mark>100)
      printf("Please Enter Your Marks in (100 - 00)");
     else if(mark>=80)
        printf("Your GPA is: A+");
     else if (mark>=70)
        printf("Your GPA is: A");
     else  if(mark>=60)
        printf("Your GPA is: A-");
     else if (mark>=50)
        printf("Your GPA is: b")
     else if (mark>=40)
        printf("Your GPA is: c");
     else if (mark>=33)
        printf("Your GPA is: d");
     else if (mark<33)
        printf("Your are Fail");
      return 0;
}
