#include<stdio.h>
void checkNum(int N)
{
    if(N == 0)
    {
        printf("The number is zero.\n");
    }
    else if(N<0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is positive.\n");
    }
    
}
int main()
{
    int N = 10;
    checkNum(N);
    return 0;
}
