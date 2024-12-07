#include<stdio.h>
int main()
{
    int n;
    printf("enter line number:");
    scanf("%d",&n);
    for (int i=n;i>0;i--)
    {
        for (int j = n-1; j >=i; j--)
        {
            printf(" ");
        }
         for (int k=i;k>0;k--)
        {
            printf("* ");
        }
        printf("\n");
    }
}


