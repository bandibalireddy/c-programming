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

	
	return 0;
}