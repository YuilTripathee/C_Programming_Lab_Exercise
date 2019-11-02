#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("Enter your marks in maths\t:");
    scanf("%d",&x);
    if(x > 80)
    {
        printf("Excellent score!!!");
    }
    else if(x > 60)
    {
        printf("Not bad!!!");
    }
    else
    {
        printf("You should imrove yourself!!!");
    }
    getch();
}
