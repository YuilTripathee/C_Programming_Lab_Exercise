#include<stdio.h>
#include<conio.h>
int addNumbers(int a, int b);
void main()
{  
    int n1, n2, sum;
    printf("Enter two numbers\t:");
    scanf("%d%d",&n1,&n2);
    sum = addNumbers(n1, n2);
    printf("The sum is %d.",sum);
    getch();
}
int addNumbers(int a, int b)
{
    int result;
    result = a + b;
    return result;
}