#include <stdio.h>
int main()
{
	// Two ways of intialising. One to make brackets and the other to do manually.
	int arr[2][2] = {{1,2},{3,4}};
  	//arr[0][0] = 1;
	//arr[0][1] = 2;
	//arr[1][0] = 3;
	//arr[1][1] = 4;
	// 1 2
	// 3 4
}

// #include <stdio.h>
// int main()
// {
// 	int arr[2][2];
// 	int i,j;
// 	for(i = 0;i<2;i++)
// 	{
// 		for(j = 0;j<2;j++)
// 		{
// 			printf("Enter a number %d %d", i,j);
// 			scanf("%d", &arr[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	for(i = 0;i<2;i++)
// 	{
// 		for(j = 0;j<2;j++)
// 		{
// 			printf("%d ", arr[i][j]);
// 		}
// 		printf("\n");
// 	}
// }

// #include <stdio.h>
// int main()
// {
// 	int r,c;
// 	printf("Enter the number of rows : ");
// 	scanf("%d", &r);
// 	printf("Enter the number of columns : ");
// 	scanf("%d", &c);
// 	int arr[r][c];
// 	int i,j;
// 	for(i = 0;i<r;i++)
// 	{
// 		for(j = 0;j<c;j++)
// 		{
// 			printf("Enter a number %d %d :", i,j);
// 			scanf("%d", &arr[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	for(i = 0;i<r;i++)
// 	{
// 		for(j = 0;j<c;j++)
// 		{
// 			printf("%d ", arr[i][j]);
// 		}
// 		printf("\n");
// 	}
// }

// #include <stdio.h>
// int main()
// {
// 	int std[4][2];
// 	int i,j;
// 	for(i = 0;i<4;i++)
// 	{
// 		for(j = 0;j<2;j++)
// 		{
// 			printf("Enter the roll numbers and marks : ");
// 			scanf("%d", &std[i][j]);
// 		}
// 	}
// 	for(i = 0;i<4;i++)
// 	{
// 		for(j = 0;j<2;j++)
// 		{
// 			printf("%d ", std[i][j]);
// 		}
// 		printf("\n");
// 	}
// }

// Addition of matrixes
// #include <stdio.h>
// int main()
// {
// 	int arr[2][2];
// 	int i,j;
// 	for(i = 0;i<2;i++)
// 	{
// 		for(j = 0;j<2;j++)
// 		{
// 			printf("Enter a number : ");
// 			scanf("%d", &arr[i][j]);
// 		}
// 	}
// 	int brr[2][2];
// 	for(i = 0;i<2;i++)
// 	{
// 		for(j = 0;j<2;j++)
// 		{
// 			printf("Enter a number : ");
// 			scanf("%d", &brr[i][j]);
// 		}
// 	}
// 	int add[2][2];
// 	for(i = 0;i<2;i++)
// 	{
// 		for(j = 0;j<2;j++)
// 		{
// 			add[i][j] = arr[i][j] + brr[i][j];
// 		}
// 	}
// 	for(i = 0;i<2;i++)
// 	{
// 		for(j = 0;j<2;j++)
// 		{
// 			printf("%d  ", add[i][j]);
// 		}
// 		printf("\n");
// 	}
// }

// sum of given matrixes of n * m
// #include <stdio.h>
// int main()
// {
// 	int n,m;
// 	printf("Enter the number of rows : ");
// 	scanf("%d", &n);
// 	printf("Enter the number of columns : ");
// 	scanf("%d", &m);
// 	int arr[n][m];
// 	int i,j;
// 	for(i = 0;i<n;i++)
// 	{
// 		for(j = 0;j<m;j++)
// 		{
// 			printf("Enter a number : ");
// 			scanf("%d", &arr[i][j]);
// 		}
// 	}
// 	int sum = 0;
// 	for(i = 0;i<n;i++)
// 	{
// 		for(j = 0;j<m;j++)
// 		{
// 			sum = sum + arr[i][j];
// 		}
// 	}
// 	printf("The total sum is %d", sum);
// }

// Maximum element in an array
// #include <stdio.h>
// int main()
// {
// 	int n,m;
// 	printf("Enter the number of rows : ");
// 	scanf("%d", &n);
// 	printf("Enter the number of columns : ");
// 	scanf("%d", &m);
// 	int arr[n][m];
// 	int i,j;
// 	for(i = 0;i<n;i++)
// 	{
// 		for(j = 0;j<m;j++)
// 		{
// 			printf("Enter a number : ");
// 			scanf("%d", &arr[i][j]);
// 		}
// 	}
// 	int max = arr[0][0];
// 	for(i = 0;i<n;i++)
// 	{
// 		for(j = 0;j<m;j++)
// 		{
// 			if(max < arr[i][j])
// 			max = arr[i][j];
// 		}
// 	}
// 	printf("The maximum element in the array is %d", max);
// }

// Minimum element in an array
// #include <stdio.h>
// int main()
// {
// 	int n,m;
// 	printf("Enter the number of rows : ");
// 	scanf("%d", &n);
// 	printf("Enter the number of columns : ");
// 	scanf("%d", &m);
// 	int arr[n][m];
// 	int i,j;
// 	for(i = 0;i<n;i++)
// 	{
// 		for(j = 0;j<m;j++)
// 		{
// 			printf("Enter a number : ");
// 			scanf("%d", &arr[i][j]);
// 		}
// 	}
// 	int min = arr[0][0];
// 	for(i = 0;i<n;i++)
// 	{
// 		for(j = 0;j<m;j++)
// 		{
// 			if(min > arr[i][j])
// 			min = arr[i][j];
// 		}
// 	}
// 	printf("The minimum element in the array is %d", min);
// }

// Minimum element in an array
// #include <stdio.h>
// int main()
// {
// 	int n,m;
// 	printf("Enter the number of rows : ");
// 	scanf("%d", &n);
// 	printf("Enter the number of columns : ");
// 	scanf("%d", &m);
// 	int arr[n][m];
// 	int i,j;
// 	for(i = 0;i<n;i++)
// 	{
// 		for(j = 0;j<m;j++)
// 		{
// 			printf("Enter a number : ");
// 			scanf("%d", &arr[i][j]);
// 		}
// 	}
// 	int a= 0,b = 0;
// 	int min = arr[0][0];
// 	for(i = 0;i<n;i++)
// 	{
// 		for(j = 0;j<m;j++)
// 		{
// 			if(min > arr[i][j])
// 			{
// 				min = arr[i][j];
// 				a = i,b = j;
// 			}
// 		}
// 	}
// 	printf("The minimum element in the array is %d", min);
// 	printf("The index in the array is %d %d ", a,b);
// }

// The sum of elements from one index to another.
// #include <stdio.h>
// int main()
// {
// 	int n,m;
// 	printf("Enter the number of rows : ");
// 	scanf("%d", &n);
// 	printf("Enter the number of columns : ");
// 	scanf("%d", &m);
// 	int arr[n][m];
// 	int i,j;
// 	for(i = 0;i<n;i++)
// 	{
// 		for(j = 0;j<m;j++)
// 		{
// 			printf("Enter a number : ");
// 			scanf("%d", &arr[i][j]);
// 		}
// 	}
// 	int sum = 0;
// 	int a,b,c,d;
// 	printf("Enter your desired row : ");
// 	scanf("%d", &a);
// 	printf("Enter your desired row : ");
// 	scanf("%d", &b);
// 	printf("Enter your desired column : ");
// 	scanf("%d", &c);
// 	printf("Enter your desired column : ");
// 	scanf("%d", &d);
// 	for(i = a;i<=b;i++)
// 	{
// 		for(j = c;j<=d;j++)
// 		{
// 			sum = sum + arr[i][j];
// 		}
// 	}
// 	printf("The desired sum is %d", sum);
// }

