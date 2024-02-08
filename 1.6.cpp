#include <stdio.h>
#define PR(x) printf("x = %.8g\t", (double)x)
#define PRINT4(x1,x2,x3,x4) PR(x1); PR(x2); PR(x3); PR(x4)
int main (void)
{
    double d;
    float f;
    long l;
    int i;
    i = l = f = d = 100/3; PRINT4(i, l, f, d);
    i = l = f = d = 100/3. ; PRINT4(i, l, f, d);
    return 0;
}