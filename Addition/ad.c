#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, sum;
    printf("Enter first number\t:");
    scanf("%d",&a);
    printf("Enter second number\t:");
    scanf("%d",&b);
    sum = a + b;
    printf("The sum of the numbers you entered is %d.",sum);
    getch();
}