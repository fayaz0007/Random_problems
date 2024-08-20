#include <stdio.h>

int main()
{
    int grade,gradecount=0;
    float totalsum=0;

    printf("plese enter your grade or press '-1' for stop: ");
    scanf("%d",&grade);
    while (grade!=-1)
    {
        totalsum = totalsum + grade;
        gradecount++;
        printf("plese enter your grade or press '-1' for stop: ");
        scanf("%d",&grade);
    }
    printf("you have enterd %d number of grade",gradecount);
    printf("\nthe average grade is %.2f",totalsum/gradecount);
    return 0;

}