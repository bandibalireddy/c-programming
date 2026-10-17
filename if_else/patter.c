// #include <stdio.h>
// int main()
// {
//     int n,m;
//     int i,j;
//     printf("enter the number : ");
//     scanf("%d", &n);
//     printf("enter the number : ");
//     scanf("%d", &m);
//     for(i = 1; i<=n ;i++)
//     {
//     	for(j= 1; j<=m ; j++)
//     	{
//     		printf("*");
// 		}
// 		printf("\n");
// 	}
//     return 0;
// }



// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// #include <stdio.h>
// int main()
// {
// 	int n;
// 	int m;
// 	int i;
// 	int j;
// 	printf("Enter the number of row : ");
// 	scanf("%d", &n);
// 	printf("Enter the number of column : ");
// 	scanf("%d", &m);
// 	for(i = 1; i <=n; i++)
// 	{
// 		for(j = 1; j<= m; j++)
// 		{
// 			printf("%d ", j);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }



//*
//**
//***
//****
// for every line number it is same as the number of stars so it is as if number of stars is equal to n th line 
// #include <stdio.h>
// int main()
// {
// 	int n;
//  	int m;
//  	int i;
//  	int j;
//  	printf("Enter the number of row : ");
//  	scanf("%d", &n);
//  	for(i =1; i <= n;i++)
//  	{
//  		for(j =1; j <= i;j++)
//  		{
//  			printf("*");
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }



//****
//***
//**
//*
// #include <stdio.h>
// int main()
// {
// 	int n;
//  	int m;
//  	int i;
//  	int j;
//  	printf("Enter the number of row : ");
//  	scanf("%d", &n);
//  	for(i =1; i <= n;i++)
//   	{
//   		for(j =1; j <= (n + 1 - i);j++)
//   		{
//   			printf("*");
//  		}
//  		printf("\n");
//  	}
// 	return 0;
// }



// 1
// 1 2
// 1 2 3
// 1 2 3 4
// #include <stdio.h>
// int main()
// {
// 	int i,j;
// 	int n;
// 	printf("Enter the number of rows : ");
// 	scanf("%d", &n);
// 	for(i =1; i <= n;i++)
//   	{
//   		for(j =1; j <= i;j++)
//   		{
//   			printf("%d ", j);
//  		}
//  		printf("\n");
//  	}
//  	return 0;
// }



// 1
// 1 3
// 1 3 5
// 1 3 5 7
// #include <stdio.h>
// int main()
// {
// 	int i,j;
// 	int n;
// 	printf("Enter the number of rows : ");
// 	scanf("%d", &n);
// 	for(i =1; i <= n;i++)
//   	{
//   		for(j =1; j <= i;j++)
//   		{
//   			printf("%d ", (2 * j - 1));
//  		}
//  		printf("\n");
//  	}
//  	return 0;
// }



// A B C D
// A B C D
// A B C D
// A B C D
// #include <stdio.h>
// int main()
// {
// 	int i,j;
// 	int n,m;
// 	printf("Enter the number of rows : ");
// 	scanf("%d", &n);
// 	for (i = 1; i <= n; i++)
// 	{
// 		int a = 1;
// 		for(j= 1; j <= n; j++)
// 		{
// 			printf("%c ", a + 64);
// 			a++;
// 		}
// 		printf("\n");
// 	} 
// 	return 0;
// }



// A 
// A B 
// A B C 
// A B C D
// #include <stdio.h>
// int main()
// {
// 	int i,j;
// 	int n,m;
// 	printf("Enter the number of rows : ");
// 	scanf("%d", &n);
// 	for (i = 1; i <= n; i++)
// 	{
// 		int a = 1;
// 		for(j= 1; j <= i; j++)
// 		{
// 			printf("%c ", a + 64);
// 			a++;
// 		}
// 		printf("\n");
// 	} 
// 	return 0;
// }



// 1
// A B 
// 1 2 3 
// A B C D
// 1 2 3 4 5
// #include <stdio.h>
// int main()
// {
// 	int i,j;
// 	int n,m;
// 	printf("Enter the number of rows : ");
// 	scanf("%d", &n);
// 	if(n % 2 != 0)
// 	{
// 		for (i = 1; i<=n; i++)
// 	{
// 		for(j = 1; j<=i; j++)
// 		{
// 			printf("%d ", j);
// 		}
// 		printf("\n");
// 	}
// 	}
// 	else
// 	{
// 		for (i = 1; i <= n; i++)
//  		{
//  			int a = 1;
//  			for(j= 1; j <= i; j++)
//  			{
//  				printf("%c ", a + 64);
//  				a++;
//  			}
//  			printf("\n");
//  		} 
// 	}
// 	return 0;
// }



//   *
//   *
// * * *
//   *
//   *
// so if analyse the pattern it is saying that in 5 lines and in three lines in the exact middle of odd integers there will be three stars
// #include <stdio.h>
// int main()
// {
// 	int i,j;
// 	int n;
// 	printf("Enter a odd number : ");
//     scanf("%d", &n);
//     int m = (n + 1) / 2;
//     for(i = 1;i <=n ; i++)
//     {
//     	if(i != m )
//     	{
//     		printf("   * ");
//     		printf("\n");
// 		}
// 		if(i == m)
// 		{
// 			printf(" * * *");
// 			printf("\n");
// 		}
// 	}
// }



