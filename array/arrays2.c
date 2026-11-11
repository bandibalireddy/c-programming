#include <stdio.h>
int main()
{
	int std[10];
	int j; 
	for(j = 0; j<10;j++)
	{
		printf("enter a number %d \n", j);
		scanf("%d", &std[j]);
	}
	for(j = 0; j<10;j++)
	{
		if(std[j]<35)
		{
			printf("%d is not eligible", j);
		}
	}
	

	// maximum value of all in values in an array
	int arr[5];
	int i;
	int max;
	for(i = 0; i<5;i++)
	{
		printf("Enter a number %d : ", i);
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for(i = 1; i<5;i++)
	{
		if(max < arr[i]) max = arr[i];
	}
	printf("%d is the highest of all the values", max);


	// minimum value of all values in an array
	int mrr[5];
	int k;
	int min;
	for(k = 0; k<5;k++)
	{
		printf("Enter a number %d : ", k);
		scanf("%d", &mrr[k]);
	}
	min = mrr[0];
	for(k = 1; k<5;k++)
	{
		if(min > mrr[k]) min = mrr[k];
	}
	printf("%d is the lowest of all the values", min);


	//question
	int que[6];
	int l;
	for(l=0;l<6;l++)
	{
		printf("Enter the number %d ", l);
		scanf("%d", &que[l]);
	}
	for(l=0;l<6;l++)
	{
		if(l%2 == 0)
		{
			que[l]= que[l]+10;
		}
		else
		{
			que[l] = que[l] * 2;
		}
 	}
 	for(l=0;l<6;l++)
	{
		printf("%d ", que[l]);
	}


	//question
	int bal[5];
	int x;
	int v;
	for(v = 0; v<5; v++)
	{
		printf("Enter a number : ");
		scanf("%d", &bal[v]);
	}
	printf("Enter a number for x : ");
	scanf("%d", &x);
	int comp;
	comp = 0;
	for(v = 0; v<5; v++)
	{
		if(bal[v]>x)
		{
			comp = comp + 1;
		}
	}
	printf("The number of times is %d", comp);

	//question
	int sum[7];
	int h, sumodd = 0, sumeven = 0;
	int diff = 0;
	for(h = 0; h<7;h++)
	{
		printf("enter a number : ");
		scanf("%d", &sum[h]);
	}
	for(h = 0; h<7;h++)
	{
		if(h % 2 == 0)
		{
			sumeven = sumeven + sum[h]; 
		}
		else
		{
			sumodd = sumodd + sum[h]; 
		}
	}
	diff = sumodd - sumeven;
	printf("The difference is %d", diff);


	// how many pairs exist in an array which upon adding gives us the number which we choosen
	int pair[6];
	int count = 0, g, mys, m;
	for(g =0; g<6;g++)
	{
		printf("enter a number : ");
		scanf("%d", &pair[g]);
	}
	printf("Enter the mysterious number : ");
	scanf("%d", &mys);
	for(g =0; g<6;g++)
	{
		for(m =0; m<6;m++)
	    {
			if(g !=m && pair[g]+pair[m] == mys)
			{
				count = count + 1;
			}
	    }
	}
	printf("%d is the number of the pairs", count / 2 );
	

    // int pair[6];
    // int count = 0, g, mys, m;

    // for (g = 0; g < 6; g++)
    // {
    //     printf("enter a number : ");
    //     scanf("%d", &pair[g]);
    // }

    // printf("Enter the mysterious number : ");
    // scanf("%d", &mys);

    // // Inner loop starts from g + 1 to avoid checking duplicates or self-pairs
    // for (g = 0; g < 6; g++)
    // {
    //     for (m = g + 1; m < 6; m++)
    //     {
    //         if (pair[g] + pair[m] == mys)
    //         {
    //             count++;
    //         }
    //     }
    // }

    // printf("%d is the number of the pairs\n", count);


	
	return 0;
}