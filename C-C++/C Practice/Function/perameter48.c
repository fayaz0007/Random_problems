#include <stdio.h>
//Receives a 2-digits number
//Make sure it has 2 digit
//finds and prints maximum digit
// void perameter_2digit()
// {
//     int num;
//     printf("Enter the number!");
//     scanf("%d",&num);
//     if(num>99 || num<10)
//     {
//         printf("The number you are enterd is not a 2 digit");
//     }
//     else
//     {
//         if(num%10>num/10)
//         {
//             printf("the maximum number: %d",num%10);
//         }
//         else
//         {
//             printf("the maximum number: %d",num/10);
//         }
//     }


// }
// int main()
// {
//     perameter_2digit();
//     return 0;
// }
int perameter_2digit(int num)
{
    if(num>99 || num<10)
    {
        printf("The number you are enterd is not a 2 digit");
    }
    else
    {
        if(num%10>num/10)
        {
            printf("the maximum number: %d",num%10);
        }
        else
        {
            printf("the maximum number: %d",num/10);
        }
    }


}
int main()
{
    int a;
    printf("Enter the number!");
    scanf("%d",&a);
    perameter_2digit(a);
    return 0;
}