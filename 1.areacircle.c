#include <stdio.h>

int main(){
    float pi = 3.14;
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);
}