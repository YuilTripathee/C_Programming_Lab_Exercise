#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5];
    int i, sum = 0;
    printf("Enter any five numbers:");
    for(i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j = 0; j < 5; j++)
    {
        sum = sum + a[j];
    }
    printf("The sum of array elements is %d.",sum);
    getch();
}