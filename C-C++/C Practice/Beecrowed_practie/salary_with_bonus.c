#include <stdio.h>
int main()
{
    char name;
    double salary,sale,bonus;
    scanf("%S",&name);
    scanf("%lf%lf",&salary,&sale);
    bonus = sale*0.15;
    printf("TOTAL = R$ %.2lf\n",bonus+salary);
    return 0;
}