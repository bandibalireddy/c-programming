// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number between 1 and 7 : ");
//     scanf("%d", &n);
//     switch(n)
//     {
//         case 1:
//             printf("monday");
//             break;
//         case 2:
//             printf("tuesday");
//             break;
//         case 3:
//             printf("wednesday");
//             break;
//         case 4:
//             printf("thursday");
//             break;
//         case 5:
//             printf("friday");
//             break;
//         case 6:
//             printf("saturday");
//             break;
//         case 7:
//             printf("sunday");
//             break;
//         default :
//             printf("invalid number");
//             break;
//     }
//         return 0;
// }

#include <stdio.h>
int main()
{
    int a, b;
    int n;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter which operation you would to perform : ");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            printf("Addition = %d", a + b);
            break ;
        case 2:
            printf("subtraction = %d", a - b);
            break ;
        case 3:
            printf("multiplication = %d", a * b);
            break ;
        case 4:
            if(b != 0)
            {
                printf("division = %d", a /b);
            }
            else
            {
                printf("Invalid");
            }
            break ;
        default :
            printf("Enter a valid number ");
            break ;
    }
}