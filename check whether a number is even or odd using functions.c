#include <stdio.h>
#include <math.h>
#include <conio.h> 

int evenodd(int n1);

 
 
void main()
{
    int n1,number;
   
  
    printf("Enter the first number: ");
    scanf("%d", &n1);
   
    number= evenodd(n1);      
 
    printf("the number is = %d \n",number);
 
    getch();
}
 

 
int evenodd(int n1)
{
    if(n1%2==0)
{
    printf("the number is even\n");
    return (n1);
}
else
{
    printf("the number is odd\n ");
    return(n1);
}
}
}
