//3.Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+2*i-1;
    }
    if(i>n)
    {
        printf("Sum is : %d",sum);
    }
    return 0;
}