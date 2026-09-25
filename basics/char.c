#include <stdio.h>
int main()
{
// int is integer is data type used for storing whole numbers
// float is also a data type used for storing decimal numbers
// char is data type used for storing single characters
// in char we can store any single character like a, b, c, d, e, f, g, h, i, j, !, @, #, $, %, ^, &, *, (, ), _, +, =, {, }, [, ], |, \, :, ;, ", ', <, >, ,, ., ?, /, ~, `
// to print any char values we have to use %c and that's it.
// ASCII values for A 65, for B 66, for a 97, for b 98, for 0 48, for 1 49 for ! 33 for @ 64 for # 35 for $ 36 for % 37 for ^ 94 for & 38 for * 42 for ( 40 for ) 41 for _ 95 for + 43 for = 61 for { 123 for } 125 for [ 91 for ] 93 for | 124 for \ 92 for : 58 for ; 59 for " 34 for ' 39 for < 60 for > 62 for , 44 for . 46 for ? 63 for / 47
    char ch = '^';
    printf("%c\n", ch);
    printf("%d\n", ch);
    return 0;
}