Q - Find the area and circumference of a circle. Pi*r*r, 2*pi*r

==================================================================================

code - 

#include <stdio.h>
#define PI 3.14

int main() {
    float r, area, circumference;
    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = PI * r * r;            
    circumference = 2 * PI * r;  

    printf("Area of circle = %.2f\n", area);
    printf("Circumference of circle = %.2f\n", circumference);

    return 0;
}
