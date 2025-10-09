Q - Finding area of a triangle?  0.5*b*h

=======================================================================

code - 

#include <stdio.h>

int main() {
    float base, height, area;
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height; 
    printf("Area of triangle = %.2f\n", area);

    return 0;
}
