#include<stdio.h>
main()
{
    char ch;
    printf("Input a character: ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("You Entered a Vowel.");
        break;
    default:
        printf("You Entered a Consonent.");
        break;
        }
        getch();
}
