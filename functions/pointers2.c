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

