#include<stdio.h>
int main()
{
   int unit;
    float amount,total_amount,s_charge;
      printf("enter the number of units you consumed=");
      scanf("%d",&unit);
    if (unit<=50)
    {
       amount=unit*0.50;
    }
    else if(unit<=150)
    {
       amount=25+(unit-50)*0.75;
    }
    else if(unit<=250)
    {
      amount=100+(unit-150)*1.20 ;
    }
    else if(unit>250)
    {
      amount=220+(unit-250)*1.50;
    }
    else 
    {
     printf("the value can't be calculated");
    }
 
      s_charge=amount*0.20;
      total_amount=amount+s_charge;
     printf("your total bill is Rs =%d\n",total_amount);
 

  return 0;
}
