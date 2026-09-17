#include <stdio.h>
int main()
{
    printf("hello world\n");


    int var = 3;
    var = 6;
    printf("%d\n", var);
    
    int var1 = 9;
    int var2;
    var2 = var1;
    printf("%d\n", var2);
    printf("%d\n", var1);
    
    int vari1, vari2, vari3, vari4;
    vari1 = vari2 = vari3 = vari4 = 5;
    printf("%d\n", vari1);
    printf("%d\n", vari4);
    printf("%d\n", vari3);
    printf("%d\n", vari2);
    printf("%d %d\n", var1, var2);


    int two = 2, three = 3, four = 4;
    int result = (two + three) * four;
    printf("i am doing arithmatic operations\n");
    printf("(%d + %d) * %d\n", two, three, four);
    printf("%d, %d, %d\n", two, three, four);
    printf("%d", result);
    
    return 0;
}
// FOR VARIABLE NAMING STARTING
// WE CANNOT START WITH NUMBERS 
// UNDERSCORE IS NOT RECOMENDED
//Special characters are not allowed in the name of the variable
// blank are not allowed in variables name if u want use underscore
// do not use the if else do for 
// do not use long words in variables names
// we can start variable name with alphabet and underscore
// commas and blanks are not allowed in variable names
