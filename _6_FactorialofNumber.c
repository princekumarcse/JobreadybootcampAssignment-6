//6.Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    if(i>n)
    printf("Factorial of %d is %d",n,fact);
    return 0;
}