#include "stdio.h"
#include "stdlib.h"

int main()
{
    int i,j,k;
    int balnkspace;
    int n;
    int count;


    printf("");
    scanf("%d",n);

    balnkspace=n-1;

    for ( i = 1; i <=n; i++)
    {
        for (k=balnkspace;k>=1;k--){
            printf(" ");
        }
        for (j=1;j<=1;j++)
        {
            printf("%d ",count);
            count+=1;
        }
        printf("\n");
        balnkspace--;
    
    
    }
    return 0;   
}