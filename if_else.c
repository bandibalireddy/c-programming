#include <stdio.h>
int main()
{
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // if(n % 2 == 0)
    // {
    //     printf("%d is an even number", n);
    // }
    // else
    // {
    //     printf("%d is an odd number", n);
    // }
    // return 0;

    // int n;
    // printf("Enter a number :");
    // scanf("%d", &n);
    // if(n % 5 == 0)
    // {
    //     printf("%d is divisible by 5", n);
    // }
    // else
    // {
    //     printf("%d is not divisible by 5", n);
    // }
    // return 0;

    // int n;
    // printf("Enter a year :");
    // scanf("%d", &n);
    // if(n % 4 == 0)
    // {
    //     printf("%d is a leap year", n);
    // }
    // else
    // {
    //     printf("%d is not a leap year", n);
    // }
    // return 0;

    // int n;
    // printf("Enter any integer :");
    // scanf("%d", &n);
    // if(n >= 0)
    // {
    //     printf("%d", n);
    // }
    // else
    // {
    //     printf("%d", -n);
    // }
    // return 0;

    // int n;
    // printf("Enter a number :");
    // scanf("%d", &n);
    // if(n>=100 && n<=999)
    // {
    //     printf("%d is a three digit number", n);
    // }
    // else 
    // {
    //     printf("%d is not a three digit number", n);
    // }
    // return 0;

    // and == && and or == || and not == !=


    // int a, b, c;
    // printf("Enter the first side :");
    // scanf("%d\n", &a);

    //  printf("Enter the second side :");
    // scanf(" %d\n", &b); 

    // printf("Enter the third side :");
    // scanf(" %d\n", &c);
    // if(a + b > c && a + c > b && b + c > a)
    // {
    //     printf("The triangle is valid");
    // }
    // else 
    // {
    //     printf("The triangle is not valid");
    // }
    // return 0;

    // int n;
    // printf("Enter a number :");
    // scanf("%d", &n);
    // if(n % 5 == 0 && n % 3 == 0)
    // {
    //     printf("it is divisible by both 3 and 5");
    // }
    // else {
    //     printf("nope");
    // }
    // return 0;

    // int n;
    // printf("Enter a number :");
    // scanf("%d", &n);
    // if(n%5 == 0)
    // {
    //     if (n % 3 == 0)
    //     {
    //         printf("it is divisible by 15");
    //     }
    //     else 
    //     {
    //         printf("it is divisible by 5 but not by 3");
    //     }
    // }
    // else if(n%3 == 0)
    // {
    //     if (n % 5 == 0)
    //     {
    //         printf("it is divisible by 15");
    //     }
    //     else 
    //     {
    //         printf("it is divisible by 3 but not by 5");
    //     }
    // }
    // else 
    // {
    //     printf("it is not divisible by neither 3 nor 5");
    // }
    // return 0;

    // && HAS MORE PREFERENCE THAN ||, SO IT WILL BE EXECUTED FIRST

    // int marks;
    // printf("Enter your marks : ");
    // scanf("%d", &marks);
    // if(marks >= 90)
    // printf("A");
    // else if (marks >= 80)
    // printf("B");
    // else if (marks >= 70)
    // printf("C");
    // else if (marks >= 60)
    // printf("D");
    // else 
    // printf("F");
    // return 0;

    // int x1, x2, x3, y1, y2, y3;

    // printf("Enter the first point coordinates :");
    // scanf("%d %d", &x1, &y1);

    // printf("Enter the second point coordinates :");
    // scanf("%d %d", &x2, &y2);

    // printf("Enter the third point coordinates :");
    // scanf("%d %d", &x3, &y3);

    // if ( (x1 - x2)/(x1 - x3) == (y1 - y2)/(y1 - y3) )
    // printf("The points form a straight line");

    // else
    // printf("they do not lie in the same line");

    // return 0;


    int x, y;
    printf("Enter the coordinates : ");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0)
    printf("The point lies at the origin");
    else if(x == 0)
    printf("The point lies on the y-axis");
    else if(y == 0)
    printf("The point lies on x-axis");
    else 
    printf("The point lies on the xy-plane");
    return 0;
   
}