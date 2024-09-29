#include<stdio.h>
#include<stdbool.h>

bool isPrime(int N)
{
    if(N<= 1)
    {
        return false;
    }
    for (int i = 2; i<N; i++)
    {
        if(N % i == 0)
        {
            return false;

        }
    }
    return true;

}
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);

    if(isPrime(N))
    {
        printf("Yes, Is a prime number.");
    }
    else {
        printf("No, Is not a prime number.");

    }
    return 0;
}