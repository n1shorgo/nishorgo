#include<stdio.h>
int main()
{
    int n;
    printf("enter line number:");
    scanf("%d",&n);
    for (int i=n;i>=0;i--)
    {
        for (int j = n-1; j >=i; j--)
        {
            printf(" ");
        }
         for (int k=i-1;k>=0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}

/* Alt method :

#include <stdio.h>

int main()
{
    int rows = 5;

    // first loop for printing all rows
    for (int i = 0; i < rows; i++) {

        // first inner loop for printing white spaces
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }

        // second inner loop for printing star *
        for (int k = 0; k < rows - i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

*/

