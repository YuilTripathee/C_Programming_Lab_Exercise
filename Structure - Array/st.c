#include<stdio.h>
#include<conio.h>
struct Book
{
    char name[60];
    int price;
    int pages;
}bk[3];
void main()
{
    for(int i = 0; i < 3; i++)
    {
        printf("Enter name\t:");
        scanf("%s",&bk[i].name);
        printf("Enter price\t:");
        scanf("%d",&bk[i].price);
        printf("Enter pages\t:");
        scanf("%d",&bk[i].pages);
        printf("\n");
    }
    for(int j = 0; j < 3; j++)
    {
        printf("Book %d:\n",j + 1);
        printf("The name of book %d is %s.\n",j + 1, bk[j].name);
        printf("The name of price %d is %d.\n",j + 1, bk[j].price);
        printf("The name of pages %d is %d.\n",j + 1, bk[j].pages);
        printf("\n");
    }
    getch();
}
