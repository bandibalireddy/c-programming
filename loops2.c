#include <stdio.h>
#include <math.h>

int main()
{
    // int n, i, table;
    // printf("Enter the number of which you would like to know the multiplication table : ");
    // scanf("%d", &n);
    // for (i = 0; i <= 12; i++)
    // {
    //     table = n * i;
    //     printf("%d\n", table);
    // }


    // int r, i, gp;
    // printf("Enter a number upto which you would like : ");
    // scanf("%d", &r);
    // for(i = 1; i<=10;i++)
    // {
    //     gp = pow(r, i - 1);
    //     printf("%d ", gp);
    // }
    // return 0;

    // decreasing ap of 100 97 94 and so on
    // int i;
    // for(i = 100; i >0; i = i - 3)
    // {
    //     printf("%d ", i);
    // }
    // return 0;

    int n, i, div;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    if(n == 2 || n == 3 || n == 5 || n == 7)
        printf("prime");
    else if(n % 2 == 0 )
        printf("not prime");
    else if(n % 3 == 0 )
        printf("not prime");  
    else if(n % 5 == 0 )
        printf("not prime");
    else if(n % 7 == 0 )
        printf("not prime");
    else if(n % 11 == 0 )
        printf("not prime");
    else if(n % 13 == 0 )
        printf("not prime");
    else 
    printf("prime");    
    
    
    return 0;
}