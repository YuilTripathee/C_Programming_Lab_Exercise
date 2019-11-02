#include<stdio.h>
#include<conio.h>
void main()
{
    int x, y, r;
    printf("Enter x\t:");
    scanf("%d",&x);
    printf("Enter y\t:");
    scanf("%d",&y);
    r = (x < y)?:x,y;
    printf("The greatest is %d.",r);
    getch();
}

