#include <stdio.h>
int main (void)
{

    int n=5;
    for (int row = 1; row <= n; row++)
    {
        for(int sp = 4; sp >= row-1 ; sp--)
        {
            printf(" ");
        }
        for(int col = 1; col <= 2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}