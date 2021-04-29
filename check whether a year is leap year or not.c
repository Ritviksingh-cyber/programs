#include<stdio.h>
int main()
{
    int i;
    printf("Enter the year to be checked =");
    scanf("%d",&i);
    if(i%4==0)
    {
       printf("the year is a leap year",i);
    }
    else 
    {
        printf("the year is not a leap year ",i);
    }
return 0;
}
