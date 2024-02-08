#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int x[] = {1,2,3,4,5};
int n = sizeof(x)/sizeof(int);

void main()
{
    int i,j;
    int c;
    for (i=0, j=n-1; i<j; ++i,--j)
    {
        c= x[i];
        x[i] = x[j];
        x[j] = c;
    }
    printf("\n Day ket qua la :\n");
    for (i=0; i<n; i++)
    printf(" %d", x[i]);
}