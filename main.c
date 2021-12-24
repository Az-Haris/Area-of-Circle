#include <stdio.h>
#include <conio.h>

int main()
{
    float Radius, Area;
    printf("Enter the Radius Value : ");
    scanf("%f", &Radius);
    Area = 3.1416*Radius*Radius;
    printf("Circle Area is = %.3f",Area);
    getch();
    return 0;
}
