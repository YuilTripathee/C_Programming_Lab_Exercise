#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("Enter age\t:");
    scanf("%d",&x);
    if(x > 18)
    {
        printf("You can vote.");
    }
    getch();
}