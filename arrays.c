// #include <stdio.h>
// int main()
// {
//     int numbers[5];
//     int i;
//     int max;
//     printf("Enter five numbers : ");
//     for(i = 0; i<5; i++)
//     {
//         scanf("%d", &numbers[i]);
//     }
//     max = numbers[0];
//     for(i = 1; i<5 ; i++)
//     {
//         if(max < numbers[i])
//         {
//             max = numbers[i];
//         }
//     }
//     printf("%d", max);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int numbers[5];
//     int i;
//     int min;
//     printf("Enter five numbers : ");
//     for(i = 0; i<5; i++)
//     {
//         scanf("%d", &numbers[i]);
//     }
//     min = numbers[0];
//     for(i = 1; i<5 ; i++)
//     {
//         if(min > numbers[i])
//         {
//             min = numbers[i];
//         }
//     }
//     printf("%d", min);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int A[2][2];
//     int B[2][2];
//     int C[2][2];
//     int i;
//     int j;
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             scanf("%d", &A[i][j]);
//         }
//     }
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             scanf("%d", &B[i][j]);
//         }
//     }
    
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }
//     printf("Result : ");
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int A[2][2];
//     int B[2][2];
//     int C[2][2];
//     int i;
//     int j;
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             scanf("%d", &A[i][j]);
//         }
//     }
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             scanf("%d", &B[i][j]);
//         }
//     }
    
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             C[i][j] = A[i][j] - B[i][j];
//         }
//     }
//     printf("Result : ");
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int number[5];
//     int i;
//     for(i = 0; i < 5; i++)
//     {
//         scanf("%d", &number[i]);
//     }
//     for(i = 0; i < 5; i++)
//     {
//         printf("%d ", number[4-i]);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int A[2][3];
    int i;
    int j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for(j = 0; i < 3; j++)
    {
        for(i = 0; i < 2; i++)
        {
            printf("%d ", A[j][i]);
        }
    }
    return 0;
}