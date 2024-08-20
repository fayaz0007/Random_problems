#include <stdio.h>
int main()
{
    int a = 5;
    int grade[a];
    int i;m 
    int lowest_grade;
    
    for (i=0; i<a;i++)
    {
        printf("enter the grade no%d: ", i+1);
        scanf("%d",&grade[i]);
    }
    lowest_grade = grade[0];
    
    for ( i =1; i< a; i++)
    {
        if(grade[i] < lowest_grade)
            lowest_grade = grade[i];
    }
    printf("your lowest grade is: %d\n",lowest_grade);
    return 0;
}