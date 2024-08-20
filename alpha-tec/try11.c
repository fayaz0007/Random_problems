#include <stdio.h>
#include <stdlib.h>


int main()
{
    int grade;
    printf("plese enter your grade: ");
    scanf("%d",&grade);
    if (grade>=60)
    {
        if (grade>=80)
            printf("Excellent job");
        else
            printf("not bad");
        
    }
    else
       printf("oh you dont pass");
         
}