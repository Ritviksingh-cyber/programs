#include <stdio.h>
int main() 
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("The entered charactyer  is an alphabet.", c);
    else
        printf("The entered character is not an alphabet.", c);

    return 0;
}
