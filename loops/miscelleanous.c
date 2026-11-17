#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	int i;
	int a;
	for(i = 2;i <n;i++)
	{
		if(n % i == 0 )
		{
			a = 1;
			break;
		}
	}
	if(a == 1)
	{
		printf("it is a composite number.");
	}
	else
	{
		printf("It is a prime number.");
	}

// 	int i = 10;
// 	while(i<100)
// 	{
// 		printf("%d", i);
// 		i++;
//    }
// 	do{
// 		printf("Hello world");
// 		i++;
// 	}while(i<20);

	// To count the digits of a number.
	// int n,i, digit = 0;
	// printf("Enter a number : ");
	// scanf("%d", &n);
	// while( n != 0)
	// {
	// 	n = n / 10;
	// 	digit = digit + 1;
	// }
	// printf("The number of digits is : %d", digit);

	// Sum of digits of a given number.
	// int n,i,sum = 0,add;
	// printf("Enter a number :");
	// scanf("%d", &n);
	// while(n != 0)
	// {
	// 	add = n % 10;
	// 	n = n /10;
	// 	sum = sum + add;
	// }
	// printf("The sum of digits is : %d", sum);


	// Reverse of a given number.
	// int n;
	// printf("Enter a number :");
	// scanf("%d", &n);
	// int digit, reverse = 0;
	// while(n != 0)
	// {
	// 	digit = n % 10;
	// 	n = n /10;
	// 	reverse = (reverse * 10) + digit;
	// }
	// printf("The reverse of the given number is : %d", reverse);


	// 1-2+3-4+5-6+7-8+9-10+...
	// int n, even = 0,odd = 0,diff,i;
	// printf("Enter a number : ");
	// scanf("%d", &n);
	// for(i = 1; i <= n;i = i + 2)
	// {
	// 	odd = odd + i;
	// }
	// for(i = 2; i <= n;i = i + 2)
	// {
	// 	even = even + i;
	// }
	// diff = odd - even;
	// printf("the diff is %d", diff);


	// Factorial of a given number.
	// int n,i,fact = 1;
	// printf("Enter a number : ");
	// scanf("%d", &n);
	// for(i = 1; i <= n;i++)
	// {
	// 	fact = fact * i;
	// }
	// printf("The factorial is %d", fact);

	// Factorial of a given number upto it.
	// int n,i,fact = 1;
	// printf("Enter a number : ");
	// scanf("%d", &n);
	// for(i = 1; i <= n;i++)
	// {
	// 	fact = fact * i;
	// 	printf("The factorial of  %d : %d\n", i,fact);
	// }
	// printf("The factorial is %d\n", fact);

	// nth fibonacci number(1 1 2 3 5 8 ...)
	// int n;
	// printf("Enter a number : ");
	// scanf("%d", &n);
	// int a,b,sum,temp = 0;
	// a = 1,b = 1;
	// int i;
	// for(i = 1;i<=n - 2;i++)
	// {
	// 	sum = a + b;
	// 	a = b;
	// 	b = sum;
	// }
	// printf("%d", sum);

	// a raised to the power of b;
	// int a,b,ans = 1;
	// printf("Enter the base : ");
	// scanf("%d", &a);
	// printf("Enter the power : ");
	// scanf("%d", &b);
	// int i;
	// for(i = 0;i<b;i++)
	// {
	// 	ans = ans * a;
	// }
	// printf("The answer is %d", ans);

	// Typecasting
	//int x;
	//x = 65;
	//printf("%d\n", x);
	//char ch = (char)x;
	//printf("%c\n", ch);
	// char ch = 'A';
	// printf("%c\n", ch);
	// int x = (int)ch;
	// printf("%d\n", x);
	// int i = 65;
	// while(i <= 90)
	// {
	// 	printf("%c ",i);
	// 	i++;
	// }

	// Armstrong Number (153 = (1)^3 + (5)^3 + (3)^3
	// int n;
	// printf("Enter a number : ");
	// scanf("%d", &n);
	// int digit,sum = 0;
	// int temp = n;
	// while(n != 0)
	// {
	// 	digit = n % 10;
	// 	sum = sum + (digit * digit * digit);
	// 	n = n / 10;
	// }	
	// if(temp == sum)
	// {
	// 	printf("The given number is an armstrong number.");
	// }
	// else
	// {
	// 	printf("The given number is not an armstrong number.");
	// }
	return 0;
}