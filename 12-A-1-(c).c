#include <stdio.h>
void main()
{
    int i, j;

    for(i=5; i>=1; i--)
    {
        // Logic to print numbers
        for(j=5; j>=i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}
