#include <stdio.h>
#include <math.h>
#include <conio.h> 

double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);
 
 
void main()
{
    float radius, diameter, circle, area;
    clrscr();
  
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
 
    diameter  = getDiameter(radius);      
    circle = getCircumference(radius); 
    area = getArea(radius);           
 
    printf("Diameter of the circle = %.2f units\n", diameter);
    printf("Circumference of the circle = %.2f units\n", circle);
    printf("Area of the circle = %.2f sq. units", area);
 
    getch();
}
 

 
double getDiameter(double radius)
{
    return (2 * radius);
}
 double getCircumference(double radius)
{
    return (2 * M_PI * radius); // PI = 3.14
}

double getArea(double radius)
{
    return (M_PI * radius * radius); // PI = 3.14
}
 
