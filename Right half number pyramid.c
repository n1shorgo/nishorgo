#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        int value=n;
        for (int j=0;j<=i;j++)
        {
            printf("%d",value);
            value--;
        }
        printf("\n");
    }
}

/* alternate:
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {

        for (int j=1;j<=i;j++)
        {
            printf("%d",j);

        }
        printf("\n");
    }
}
*/
