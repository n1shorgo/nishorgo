#include<stdio.h>
int main()
{
    int n;
    printf("enter line number:");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("%d",k);
        }
        for(int l=i ; l>1 ; l--)
        {
            printf("%d",l-1);
        }
        printf("\n");
    }
}


