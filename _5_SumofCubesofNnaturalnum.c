//5.Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    if(i>n)
    printf("Sum of Cubes is: %d",sum);
    return 0;
}