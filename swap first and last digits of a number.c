#include <stdio.h>
#include <math.h>

int main()
{
    int num, swapNum;
    int firstDigit, lastDigit, digits;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Find last digit */
    lastDigit  = num % 10;

    /* Find total number of digit - 1 */
    digits     = (int)log10(num); 

    /* Find first digit */
    firstDigit = (int)(num / pow(10, digits)); 

    swapNum  = lastDigit;
    swapNum *= (int) pow(10, digits);
    swapNum += num % ((int) pow(10, digits));
    swapNum -= lastDigit;
    swapNum += firstDigit;

    printf("Original number = %d", num);
    printf("\nNumber after swapping first and last digit: %d", swapNum);

    return 0;
}
