#include <stdio.h>
int main()
{
    int number,salary;
    float hour,actual_salary;
    scanf("%d%d",&number,&salary);
    scanf("%f",&hour);
    actual_salary = salary * hour;
    printf("NUMBER = %d\nSALARY = U$ %.2f",number,actual_salary);
    return 0;
}