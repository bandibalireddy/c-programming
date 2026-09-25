#include <stdio.h>
int main()
{
    // float r;
    // printf("Enter the radius of the sphere:");
    // scanf("%f", &r);
    // printf("the volume of the sphere is : %f\n ", (4.0/3.0) * 3.14 * r * r *r);

    // float radius;
    // printf("Enter the radius of the circle: ");
    // scanf("%f", &radius);
    // printf("The area of the circle is : %f\n", 3.14 * radius * radius);
    // % means to calculate the remainder

    float x1;
    float x2;
    float x3;
    float x4;
    printf("Enter the marks of 4 subjects: ");
    scanf("%f %f %f %f", &x1, &x2, &x3, &x4);
    float average = (x1 + x2 + x3 + x4) / 4;
    printf("The average is %f", average);
    float percentage ;
     
    return 0;
}