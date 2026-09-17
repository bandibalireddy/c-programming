#include <stdio.h>
int main()
// when we are dividing a number by another number, the remainder is the value that is left over after the division operation. The modulus operator (%) is used to find the remainder of a division operation. It returns the remainder after dividing one number by another.
// but when the denominator is large than the numerator then when using modulus operator the result will be the numerator itself because the denominator cannot divide the numerator completely.
{
    // int a, b, r;
    // a = 45; // when a > b
    // b = 4;
    // r = a % b;
    // printf("%d\n", r);

    // int x, y, z;
    // x = 15;
    // y = 97;
    // z = x % y;
    // printf("%d\n", z); // when b > a

    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    int b;
    b = (int)a; // convert float to int
    printf("%f is the fractional part in a", a - b);
    return 0;
}