#include<stdio.h>
#include<conio.h>
int addNum(int a, int b);
void main()
{
    int a, b;
    printf("Enter a\t:");
    scanf("%d",&a);
    printf("Enter b\t:");
    scanf("%d",&b);
    addNum(a,b);
    getch();
}
int addNum(int a, int b)
{
    int sum;
    sum = a + b;
    printf("The sum is %d.",sum);
}