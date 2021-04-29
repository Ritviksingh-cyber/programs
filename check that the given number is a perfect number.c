#include <stdio.h>
int main()
{
    int num,Sum,i=1;
printf("please enter the number which is to be proved as the perfect number\n");
scanf("%d",&num);
   {
    while(i < num )  
 {  
      if(num % i == 0)  
          Sum = Sum + i;  
      i++;  
                     }  
      if(Sum == num)  
      {
         printf("\n %d is Perfect Number", num);  
      }
       else  
      {
       printf("\n %d is not a Perfect Number", num);  
      }
return 0;  
}   
}


OUTPUT.
please enter the number which is to be proved as the perfect number                                   
5                                                                                                     
                                                                                                      
 5 is not a Perfect Number                                                                            
                                                                                                      
...Program finished with exit code 0                                                                  
Press ENTER to exit console. 
