//10.Write a program to reverse a given number
#include<stdio.h>
int main(){
    int x,reverse;
    printf("Enter a Number:");
    scanf("%d",&x);
    while(x!=0)
    {
        int rem=x%10;
        reverse=reverse*10+rem;
        x=x/10;
    }
    printf("Reverse is %d",reverse);
    return 0;
}