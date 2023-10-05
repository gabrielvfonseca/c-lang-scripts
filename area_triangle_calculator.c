#include <stdio.h>

int main() {
    int numTriangles = 50;
    double base, height, area;

    printf("Enter the base and height of %d triangles:\n", numTriangles);

    for (int i = 1; i <= numTriangles; i++) {
        printf("Triangle %d:\n", i);
        
        printf("Enter the base: ");
        scanf("%lf", &base);
        
        printf("Enter the height: ");
        scanf("%lf", &height);

        // Calculate the area of the triangle (0.5 * base * height)
        area = 0.5 * base * height;

        printf("Area of Triangle %d: %.2lf\n", i, area);
    }

    return 0;
}
