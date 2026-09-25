// #include <stdio.h>
// int main(void)
// {
//     int i = 1;
//     while(i <= 101)
//     {
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     int count;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     count = 0;
//     while(n != 0)
//     {
//         n = n / 10;
//         count++;
//     }
//     printf("%d", count);
//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     int sum = 0;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     sum = 0;
//     int lastdigit;
//     while(n != 0)
//     {
//         lastdigit = n % 10;
//         sum = sum + lastdigit;
//         n = n / 10;
//     }
//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     int digit;
//     int reverse;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     reverse = 0;
//     while(n != 0)
//     {
//         digit = n % 10;
//         reverse = reverse + digit;
//         reverse = reverse * 10;
//         n = n / 10;
//     }
//     reverse = reverse / 10;
//     printf("The reverse of the number is %d", reverse);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, i;
//     int fact = 1;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(i = 1; i <=n ; i++)
//     {
//         fact = fact * i;
//     }
//     printf("factorial = %d", fact);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     int i;
//     int n;
//     printf("Enter a value of n : ");
//     scanf("%d", &n);
//     a = 1, b= 1;
//     printf(" %d %d ", a , b);
//     for(i = 1; i <= n; i++)
//     {
//         c = a +b;
//         a = b + c;
//         b = a + c;
//         printf(" %d %d %d ", c, a, b);
//     }
//     return 0;
// }

