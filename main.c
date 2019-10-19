#include <stdio.h>
void add(int a, int b)
{
    printf("The sum of given nos is %d",a+b);
}
void sub(int a, int b)
{
    printf("The difference of given nos is %d",a-b);
}
void mul(int a,int b)
{
    printf("The product of given nos is %d",a*b);
}

void main() {
    int a,b;
    printf("Enter two nos\n");
    scanf("%d %d",&a,b);
    add(a,b);
    sub(a,b);
    mul(a,b);
}
