//7.Write a program to count digits in a given number
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        count++;
       
    }
    if(n==0)
    printf("Number of Digit is : %d",count);
    return 0;
}