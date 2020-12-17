#include <stdio.h>


int isPerfect(int x);
void printPerfect(int start, int end);

int main()
{
    int start, end;
    

    printf("Enter lower limit to print perfect numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print perfect numbers: ");
    scanf("%d", &end);
    
    printf("All perfect numbers between %d to %d are: \n", start, end);
    printPerfect(start, end);
    
    return 0;
}


int isPerfect(int x)
{
    int j, sum;
    

    sum = 0;
    for(j=1; j<x; j++)
    {
        if(x % j == 0)
        {
            sum += j;
        }
    }

    
    if(sum == x)
        return 1;
    else
        return 0;
}

void printPerfect(int start, int end)
{
    while(start <= end)
    {
        if(isPerfect(start))
        {
            printf("%d, ", start);
        }
        
        start++;
    }   
}
