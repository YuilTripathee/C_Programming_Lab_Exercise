//program to understand string handling
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[] = "pokhara", b[] = "kathmandu", p[] = "apple", q[] = "ball", r[] = "CAT", n[10];
    int l, m;
    l = strlen(a);
    printf("The length of a is %d.\n",l);
    strcpy(n,a);
    printf("The value of n is %s.\n",n);
    strrev(r);
    printf("Reverse of r is %s.\n",r);
    strcat(a,b);
    printf("A and B are joined as %s.\n",a);
    strupr(q);
    printf("The uppercase of q is %s.\n",q);
    strlwr(r);
    printf("The lowercase of r is %s.\n",r);
    m = strcmp(a,b);
    if(m > 0)
    {
        printf("Greater is %s.\n",a);
    }
    else if(m == 0)
    {
        printf("Both are same.\n");
    }
    else
    {
        printf("Greater is %s.\n",b);
    }
    getch();
}
