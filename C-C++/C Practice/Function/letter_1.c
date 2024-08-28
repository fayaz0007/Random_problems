#include <stdio.h>
//funtion name----> to_lower
//recive a charecter
//check if this charecter is a lower case letter
//return the lower case letter
//if the charecter not the upercase return -1
char to_lower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch - 'A' + 'a';
    else
         return -1;
}
char to_upper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch - 'a' + 'A';
    else 
        return -1;
}
int main()
{
    char a, x;
    printf("plese enter your charecter: ");
    scanf("%c", &a);
    x = to_lower(a);
    if (x!=-1)
        printf("%c\n",x);
    else
        printf("letter is not an upper case letter");
    return 0;
}
//-------------------------------------------------------
// #include <stdio.h>

// char to_lower(char ch)
// {
//     if (ch >= 'A' && ch <= 'Z')
//         return ch - 'A' + 'a';
//     else
//         return ch;
// }

// char to_upper(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//         return ch - 'a' + 'A';
//     else
//         return ch;
// }

// int main()
// {
//     char a, x;
//     printf("Please enter your character: ");
//     scanf("%c", &a);
//     x = to_lower(a);
//     printf("%c\n", x);
//     return 0;
// }


// #include <stdio.h>

// char to_lower(char ch)
// {
//     if (ch >= 'A' && ch <= 'Z')
//         return ch - 'A' + 'a';
//     else
//         return -1;
// }

// char to_upper(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//         return ch - 'a' + 'A';
//     else
//         return -1;
// }

// int main()
// {
//     char a, x;
//     printf("Please enter your character: ");
//     scanf("%c", &a);
//     x = to_lower(a);
//     if (x != -1)
//         printf("%c\n", x);
//     else
//         printf("The character is not an uppercase letter.\n");
//     return 0;
// }
