#include<stdio.h>
#include<conio.h>
void main()
{
    int x, y;
    printf("Enter the value of x\t:");
    scanf("%d",&x);
    goto z;
    printf("Enter the value of y\t:");
    scanf("%d",&y);
    z:
    printf("The value of x is %d.",x);
    getch();
}
