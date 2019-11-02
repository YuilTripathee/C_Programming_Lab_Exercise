#include<stdio.h>
#include<conio.h>
void main()
{
    int x = 20;
    printf("Address of x variable is %u.\n",&x);
    int *p;//initialisation
    p = &x;//assignment
    printf("Address of x is %d.\n",p);//acess addresss
    printf("Value of x is %d.",*p);//access value
    getch();
}
