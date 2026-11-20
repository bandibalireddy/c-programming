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

