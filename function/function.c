#include<stdio.h>
#include<conio.h>
int addNum();
void main()
{
    addNum();
    getch();
}
int addNum()
{
    int a, b, sum;
    printf("Enter A\t:");
    scanf("%d",&a);
    printf("Enter B\t:");
    scanf("%d",&b);
    sum = a + b;
    printf("The sum is %d.",sum);
}