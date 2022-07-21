//9.Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
  int a,b,lcm;
  printf("Enter Two Numbers:");
  scanf("%d %d",&a,&b);
  for(lcm=1;lcm<=a*b;lcm++)
  {
    if(lcm%a==0 && lcm%b==0)
     break;
  }
    printf("Lcm is %d",lcm);
    return 0;
}