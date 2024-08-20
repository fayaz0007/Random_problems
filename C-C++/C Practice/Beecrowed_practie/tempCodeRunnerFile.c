#include <stdio.h>
int main()
{
    char name;
    float salary,sale,bonus;
    scanf("%c",&name);
    scanf("%f%f",&salary,&sale);
    bonus = 15/100*sale;
    printf("TOTAL = R$ %.2f\n",salary+bonus);
    return 0;
}