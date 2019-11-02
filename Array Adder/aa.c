#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5] = {1,2,3,4,5};
    int i, sum = 0;
    for(i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum of array elements is %d.",sum);
    getch();
}