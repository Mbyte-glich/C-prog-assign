#include<stdio.h>
int main()
{
    int a, b, sum = 0;

    printf("Enter any two integers: ");
    scanf("%d %d",&a, &b);

    sum = a + b;
    printf("sum : %d", sum);

    return 0;

}