//8.Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main(){
    int  i,num;
    printf("Enter A number:");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        break;
    }
    if(i==num)
    printf("Prime Number");
    else
    printf("Not a Prime-number");
    return 0;
}