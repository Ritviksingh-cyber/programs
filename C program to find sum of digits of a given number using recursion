#include<stdio.h>
 
int doSum(int);
int main()
{
    int num,sum;
    printf("Enter a Number to find the Sum of the digits : ");
    scanf("%d",&num);
 
    sum = doSum(num);
 
    printf("Sum of Digits of Given Number is:  %d",sum);
    return 0;
}
 
int doSum(int num)
{
 
    static int sum =0,r;
 
    if(num!=0)
    {
        r=num%10;
        sum=sum+r;
        doSum(num/10);
    }
 
    return sum;
}
