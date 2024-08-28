#include <stdio.h>

int main()
{
    int count = 1,star;
    printf("plese enter number of asterisks: ");
    scanf("%d",&star);
    while (count<=star)
    {
        printf("*");
        count ++;
    }
    return 0;
}