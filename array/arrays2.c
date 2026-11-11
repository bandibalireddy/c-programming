#include <stdio.h>
int main()
{
	int std[10];
	int i; 
	for(i = 0; i<10;i++)
	{
		printf("enter a number %d \n", i);
		scanf("%d", &std[i]);
	}
	for(i = 0; i<10;i++)
	{
		if(std[i]<35)
		{
			printf("%d is not eligible", i);
		}
	}
	
	return 0;
}