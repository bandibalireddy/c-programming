// #include <stdio.h>
// int factorial(int n)
// {
// 	if(n == 1 || n == 0)
// 	return 1;
// 	return n*factorial(n-1);
// }
// int main()
// {
// 	int n;
// 	printf("Enter the number : ");
// 	scanf("%d", &n);
// 	printf("Factorial = %d", factorial(n));
// }



// #include <stdio.h>
// void decrement(int n)
// {
// 	if(n == 1)
// 	return ;
// 	printf("%d\n ", n);
// 	decrement(n - 1);
// 	return ;
// }
// int main()
// {
// 	int n;
// 	printf("Enter a number : ");
// 	scanf("%d", &n);
// 	decrement(n);
// }



//  #include <stdio.h>
//  void increment(int n)
//  {
//  	if(n == 0)
//  	return ;
//  	increment(n - 1);
//  	printf("%d\n ", n);
//  	return ;
//  }
//  int main()
//  {
//  	int n;
//  	printf("Enter a number : ");
//  	scanf("%d", &n);
//  	increment(n);
//  }



//#include <stdio.h>
//int factorial(int n)
//{
//	if(n == 1 || n == 0)
//	return 1;
//	return n * factorial(n - 1);
//}
//int main()
//{
//	int n;
//	printf("Enter a number : ");
//	scanf("%d", &n);
//	printf("%d", factorial(n));
//}



// #include <stdio.h>
// void number(int n)
// {
// 	if(n == 1)
// 	{
// 		printf("1");
// 		return ;
// 	}
// 	printf("%d", n);
// 	number(n - 1);
// 	return ;
// }
// int main()
// {
// 	int n;
// 	printf("Enter a number : ");
// 	scanf("%d", &n);
// 	number(n);
// 	return 0;
// }



// #include <stdio.h>
// void sum(int n, int s = 0)
// {
// 	if(n == 0)
// 	{
// 		printf("%d", s);
// 		return ;
// 	}
// 	sum(n - 1, n + s);
// 	return ;
// }
// int main()
// {
// 	int n;
	
// 	printf("Enter a number : ");
// 	scanf("%d", &n);
// 	sum(n,0);
// 	return 0;
// }



