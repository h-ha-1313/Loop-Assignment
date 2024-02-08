#include <stdio.h>
#define PRINT(format,x) printf ("x = %"#format"\n", x)
int main (void)
{
    int integer = 5;
    char character = '5';

    PRINT(d, character); 
    PRINT(d, integer);
    PRINT(c, character); 
    PRINT(c, integer=53);
}