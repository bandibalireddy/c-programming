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

// // #include <stdio.h>
// // #include <string.h>
// // int main()
// // {
// // 	char str[20] = "Bali reddy";
// 	//instead of for loop and while loop simply use printf
// 	printf("%s\n", str);
// 	//instead of printf you can simply use puts
// 	// You don't need to worry about the next line problem with puts as it has an in-built function so no need to use "\n"
// 	puts(str);
// 	puts(str);
// 	// You can use puts like printf for example
// 	puts("anything double quoted are strings\n");
// 	char arr[50];
// 	printf("please enter something : ");
// 	// for string no need the use of & in scanf
//     //scanf("%s", arr);
//     //puts(arr);
// 	// incase you enter bali reddy while giving input scanf stops at space so you get only bali
// 	// so as mentioned above that's why we use gets
// 	//gets(arr);
// 	//puts(arr);
// 	// so using gets we can take entire line as input
// 	// If you feel like you will only use scanf then instead of %s use %[^\n]s this will be the remedy to the space problem
// 	scanf("%[^\n]s",arr);
// 	puts(arr);
// 	return 0;
// }

