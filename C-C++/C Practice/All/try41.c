#include "stdio.h"


int main()
{
    int i,n,j,k=1,l;

    int space;

    space=n-1;

    printf("plese enter the sequince of the number: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for (l=space;l>=1;l--){
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
            
        }
        printf("\n");
        space--;


    }
    return 0;
}
