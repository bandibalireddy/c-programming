// #include <stdio.h>
// int main()
// {
// 	char arr[6];
// 	int i;
// 	for(i = 0;i<6;i++)
// 	{
// 		printf("Enter the char : ");
// 		scanf(" %c", &arr[i]);
// 	}
// 	for(i = 0;i<6;i++)
// 	{
// 		printf("%c ",arr[i]);
// 	}
// 	return 0;
// }
// A -> 65    a -> 97    0 -> 48    9 -> 57    \0 -> 0


// #include <stdio.h>
// int main()
// {
// 	char arr[10] = {'h','e','l','l','o',' ','b','a','l','i'};
// 	int i;
// 	for(i = 0;i<10;i++)
// 	{
// 		printf("%c",arr[i]);
// 	}
//  char ch = '\0';
//	printf("%d", ch);
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	char arr[] = "Good morning, such a lovely day!\0";
// 	int i = 0;
// 	while(arr[i] != '\0')
// 	{
// 		printf("%c",arr[i]);
// 		i++;
//  	}
// 	return 0;
// }

// in methods like char arr[10] = {'h','e','l','l','o',' ','b','a','l','i'}; computer doesn't automatically put a \0 in the end
// but in the above code it automatically puts a \0 incase if you didn't keep it.

// #include <stdio.h>
// int main()
// {
// 	char str[20] = "Bali reddy";
// 	int i = 0;
// 	str[0] = 65;
// 	while(str[i] != '\0')
// 	{
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	return 0;
// }

// in arrays arr[i] == i[arr] & *(i + arr) == *(arr + i)

