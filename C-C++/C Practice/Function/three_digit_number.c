#include <stdio.h>
int threedigit(char charecter1, char charecter2, char charecter3)
{
    int hunderds,tens,units;
    int finalresuult;
    if (charecter1 >='0' && charecter1 <= '9' )
        hunderds = charecter1 - '0';
    else
        return 0;
    if (charecter2 >='0' && charecter2 <= '9' )
        tens = charecter1 - '0';
    else
        return 0;
    if (charecter3 >='0' && charecter3 <= '9' )
        units = charecter1 - '0';
    else 
        return 0;
    finalresuult =  hunderds*100+tens*10+units;
    return finalresuult;
}
int main()
{
    char a,b,c;
    scanf("%c%c%c",&a,&b,&c);
    printf("%c\n",threedigit(a,b,c));
    return 0;
}