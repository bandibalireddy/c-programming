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

	
	return 0;
}