#include <stdio.h>

int main()
{
    int course,grade,calcu=0,pow=0;
    printf("plese enter how many course you did: ");
    scanf("%d",&course);

    while (course>0)
    {
        printf("plese enter your grade: ");
        scanf("%d",&grade);
        calcu=calcu+grade;
        course--;
        pow++;

    }
    printf("%d",calcu/pow);
    return 0;
}