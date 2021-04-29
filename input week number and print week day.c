#include <stdio.h>
int main() 
{
 
     
 
    char *(a[7])={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"},m; 
    printf("Enter the week day:");
 
    scanf("%d",&m);
    if(m>7 || m<1)
    {
    	
    
    	printf("invalid input\n");
    }
    else
    {
    printf("%s\n",a[m-1]);
    }
    printf("THANK YOU");
return 0;
}
