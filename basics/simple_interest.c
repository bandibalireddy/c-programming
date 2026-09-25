#include <stdio.h>
int main()
{
    float p, r, t, si;
    printf("please enter the principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("The simple interest is : %f", si);

    return 0;
}