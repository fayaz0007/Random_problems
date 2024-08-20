#include <stdio.h>

int main()
{
    int grade;

    printf("plese enter your grade: ");
    scanf("%d",&grade);

    
    while (grade<=0 || grade>100)
    {    
        printf("plese enter your grade: ");
        scanf("%d",&grade);

    }
    
    printf("thanks");    
} 
    