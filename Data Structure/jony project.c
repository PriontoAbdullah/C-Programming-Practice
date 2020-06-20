#include<stdio.h>
int jo,ny,i=0,id[100];
char name[100];
void SearchBooks();
void ViewBooks();
void AddBooks();
void IssueBooks();
void EditBooks();
void mainManu();

int main()
{
    mainManu();

    return 0;
}
void mainManu()
{
    printf("\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MANU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\xB2\xDB\xDB\xB2  1. Search Books       \xB2\xDB\xDB\xB2");
    printf("\n\t\t\t\t\xB2\xDB\xDB\xB2  2. View Books list    \xB2\xDB\xDB\xB2");
    printf("\n\t\t\t\t\xB2\xDB\xDB\xB2  3. Add Books          \xB2\xDB\xDB\xB2");
    printf("\n\t\t\t\t\xB2\xDB\xDB\xB2  4. Issue Books        \xB2\xDB\xDB\xB2");
    printf("\n\t\t\t\t\xB2\xDB\xDB\xB2  5. Edit Books Record  \xB2\xDB\xDB\xB2");
    printf("\n\t\t\t\t\xB2******************************\xB2");
    printf("\n\t\t\t\t\xB2******************************\xB2\n");
    printf("\n\t\t\t        Enter Your Choice:  ");
    scanf("%d",&jo);
    switch(jo)
    {
    case 1:
        SearchBooks();
        break;
    case 2:
        ViewBooks();
        break;
    case 3:
        AddBooks();
        break;
    case 4:
        IssueBooks();
        break;
    case 5:
        EditBooks();
        break;
    default:
        system("cls");
        printf("\n******************************** Invalid choice.Please Input 1 -5 ************************************\n\n");
        mainManu();
    }
}

void SearchBooks()
{
    printf("");

}
void ViewBooks()
{

    printf(" 2\n");

}
void AddBooks()
{
    system("cls");
    printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ADD BOOK \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\xB2\xDB\xDB\xB2  1. Computer      \t\xB2\xDB\xDB\xB2");
    printf("\n\t\t\t\t\xB2\xDB\xDB\xB2  2. Software       \t\xB2\xDB\xDB\xB2");
    printf("\n\t\t\t\t\xB2\xDB\xDB\xB2  3. English       \t\xB2\xDB\xDB\xB2");
    printf("\n\t\t\t\t\xB2\xDB\xDB\xB2  4. Math            \t\xB2\xDB\xDB\xB2");
    printf("\n\t\t\t\t\xB2\xDB\xDB\xB2  5. General Knowledge  \xB2\xDB\xDB\xB2");
    printf("\n\t\t\t\t\xB2******************************\xB2");
      printf("\n\t\t\t        Enter Your Choice:  ");


}
void IssueBooks()
{
    printf(" 4\n");

}
void EditBooks()
{
    printf(" 5\n");
}
