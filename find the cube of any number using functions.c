#include <stdio.h>
 

double cube(double num);
 
int main()
{
    int num;
    double c;
    printf("Enter the number whose cube is to be found: ");
    scanf("%d", &num);
 
    c = cube(num);
 
    printf("Cube of the number is %.2f", num, c);
 
    return 0;
}
 
double cube(double num)
{
    return (num * num * num);
}
 
