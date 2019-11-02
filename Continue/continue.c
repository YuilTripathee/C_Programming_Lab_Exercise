#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 10;
    do
    {
        if( a == 15)
        {
            a = a + 1;
            continue;
        }
        printf("Value of a: %d\n",a);
        a++;
    }while(a<20);
    getch();
}
