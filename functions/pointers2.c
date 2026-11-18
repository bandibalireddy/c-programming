// #include <stdio.h>
// int main()
// {
//     // int a = 5;
//     // int *p = &a;
//     // printf("%p\n", p);
//     // printf("%p\n", &p);
//     // printf("%d\n", *p);
//     // int *y;
//     // y = &a;

//     // int a = 25;
//     // int *p = &a;
//     // *p = 7;
//     // printf("%d", a); // gives us answer 7
//     // that means if we change the value of pointer then the variable also changes
// }


// #include <stdio.h>
// void swap(int a,int b)
// {
//     int temp = a;
//     a = b;
//     b = a;
//     return ;
// }
// int main()
// {
//     int a,b;
//     printf("Enter a number : ");
//     scanf("%d", &a);
//     printf("Enter a number : ");
//     scanf("%d", &b);
//     int *point = &a;
//     int *pointer = &b;
//     swap(&a,&b);
//     printf("The values of a and b are %d %d", a, b);
// }

// #include <stdio.h>
// void swap(int *x, int *y)
// {
// 	int temp;
// 	temp = *x;
// 	*x = *y;
// 	*y = temp;
// 	return ;
// }
// int main()
// {
// 	int a,b;
// 	printf("Enter a number : ");
// 	scanf("%d", &a);
// 	printf("Enter a number : ");
// 	scanf("%d", &b);
// 	swap(&a,&b);
// 	printf("The numbers are %d %d ", a, b);
// }

// int* -> stores the address of any int
// int** -> stores the address of any int*

// #include <stdio.h>
// int main()
// {
// 	int a,b,high,min;
// 	printf("Enter a number : ");
// 	scanf("%d", &a);
// 	printf("Enter a number : ");
// 	scanf("%d", &b);
// 	min = a;
// 	if(min>b)
// 	{
// 		min = b;
// 	}
// 	int i;
// 	for(i = 1;i<=min;i++)
// 	{
// 		if(min % i == 0)
// 		{
// 			high = i;
// 		}
// 	}
// 	printf("%d", high);
// }

// #include <stdio.h>
// int min(int a,int b)
// {
// 	int mini = a;
// 	if(mini > b)
// 	{
// 		mini = b;
// 	}
// 	return mini;
// }
// int gcd(int a,int b)
// {
// 	int i,high;
// 	for(i = 1;i<=min(a,b);i++)
// 	{
// 		if(a % i == 0 && b % i == 0)
// 		{
// 			high = i;
// 		}
// 	}
// 	return high;
// }
// int main()
// {
// 	int a,b;
// 	printf("Enter a number : ");
// 	scanf("%d", &a);
// 	printf("Enter a number : ");
// 	scanf("%d", &b);
// 	int hcf = gcd(a,b);
// 	printf("The HCF of the two number is : %d", hcf);
// }