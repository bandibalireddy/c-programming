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

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    sum = 0;
    int lastdigit;
    while(n != 0)
    {
        lastdigit = n % 10;
        sum = sum + lastdigit;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}