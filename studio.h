#include<stdio.h>
int main()
{
    int a,b,s,m,d;
    system("clear");
    int a =20;
    int b =40;
    s=sum(a,b);
    m=mul(a,b);
    d=div(a,b);
    printf("\n the sum of given no. = %d\nThe product of given no. = %d\nThe division of given no = %d",s,m,d);
    return 0;
}
