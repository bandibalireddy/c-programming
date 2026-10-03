// #include <stdio.h>
// int main()
// {
//     int fact = 1;
//     int n;
//     int i;
//     printf("enter the number : ");
//     scanf("%d", &n);
//     for(i  = 1; i <=n ; i++)
//     {
//         fact = fact * i;
//     }
//     printf("factorial = %d", fact);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i;
//     int n;
//     int a , b, c;
//     printf("enter the number of terms : ");
//     scanf("%d", &n);
//     a = 0;
//     b = 1;
//     printf("%d %d ", a, b);
//     for(i = 1; i<= n; i++)
//     {
//         c = a + b;
//         a = c +b;
//         b = a + c;
//         printf("%d %d %d ", c, a, b);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    int digit ;
    int reverse = 0;
    printf("enter the number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        digit = n % 10;
        reverse = (reverse * 10) + digit;
        n = n /10;
    }
    printf("%d", reverse);
    return 0;
}