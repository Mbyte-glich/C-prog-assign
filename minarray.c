#include<stdio.h>
int main()
{
    int i;
    int myarray[]={11,46,9,7,5,32,44,18,16,32};
    int min;
    min = myarray[0];
    for(i=0; i<9; i++)
    {
        if (myarray[i]<min)
        min=myarray[i];
    }
    printf("Minimum number in array is : %d\n",min);
    return 0;
}