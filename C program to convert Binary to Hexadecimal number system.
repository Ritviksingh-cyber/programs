#include<stdio.h>
#include<conio.h>
int main()
{
    int bin, hex=0, mul=1, count=1, rem, i=0;
    char hexnum[20];
    printf("Enter any Binary Number: ");
    scanf("%d", &bin);
    while(bin!=0)
    {
        rem = bin%10;
        hex = hex + (rem*mul);
        if(count%4==0)
        {
            if(hex<10)
                hexnum[i] = hex+48;
            else
                hexnum[i] = hex+55;
            mul = 1;
            hex = 0;
            count = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            count++;
        }
        bin = bin/10;
    }
    if(count!=1)
        hexnum[i] = hex+48;
    if(count==1)
        i--;
    printf("\nEquivalent Hexadecimal Value = ");
    for(i=i; i>=0; i--)
        printf("%c", hexnum[i]);
    
    return 0;
}
