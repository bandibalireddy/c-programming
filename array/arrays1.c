#include <stdio.h>
int main()
{
    // declaration of arrays
	int arr[5] = {45,8,9,5,7};
	arr[2] = 34;
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);
	//int num = 10,arr[num]
	//continous memory allocation
	//that means the address of them is continous
	// numbering starts from 0
	// to declare simply int name
	// to change the value simply arr[2] = 34;
	// we can also declare array in int, float, char
	float brr[5] = {4.5,48.5,8,5.6,2.98};
	brr[2] = 34;
	printf("%f\n", brr[0]);
	printf("%f\n", brr[1]);
	printf("%f\n", brr[2]);
	printf("%f\n", brr[3]);
	printf("%f\n", brr[4]);
	arr[2] = 3;
	arr[3] = 3;
	arr[1] = 3;
	arr[4] = 3;

    // printing and taking outputs using loops
	int crr[10];
	int i;
	for(i = 0; i <10; i++)
	{
		printf("Enter a number : ");
		scanf("%d", &crr[i]);
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", crr[i]);
	}

    // taking input and printing the reverse order
	int a[5];
	int j;
	for(j = 0; j<5;j++)
	{
		printf("Enter the number %d \n", j);
		scanf("%d", &a[j]);
	}
	for(j = 0; j<5;j++)
	{
		printf("%d ", a[4-j]);
	}

    
	return 0;
}