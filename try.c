#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    if ( a>= 'A' && a<= 'Z'){
        printf("An uppercase letter");
    }
    else if (a >= 'a' && a <= 'z')
    {
        printf("a lowercase letter");
    }
    else if(a>= '0' && a<= '9'){
        printf("a digit");
    }
    else{
        printf("I dont Know");
    }
}