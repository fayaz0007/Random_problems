#include "stdio.h"

int main()
{
    int n,i,j;
    printf("plese enter your number: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
           printf("%d",i);
        printf("\n");
    }
}