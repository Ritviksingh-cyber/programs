#include <stdio.h>


int isArmstrongnumber(int num);
void printArmstrongnumber(int start, int end);



int main()
{
    int start, end;
    
    printf("Enter minimum limit to print armstrong numbers: ");
    scanf("%d", &start);
    printf("Enter maximum limit to print armstrong numbers: ");
    scanf("%d", &end);
    
    printf("All armstrong numbers between the limits %d to %d are: \n", start, end);
    printArmstrongnumber(start, end);
    
    return 0;
}


int isArmstrongnumber(int num)
{
    int temp, lastDigit, sum;
    
    temp = num;
    sum = 0;
    while(temp != 0)
    {
        lastDigit = temp % 10;
        sum += lastDigit * lastDigit * lastDigit;
        temp /= 10;
    }
    

    if(num == sum)
        return 1;
    else 
        return 0;
}

void printArmstrongnumber(int start, int end)
{
    while(start <= end)
    {
        if(isArmstrongnumber(start)) 
        {
            printf("%d, ", start);
        }
        
        start++;
    }
}
