#include <stdio.h>
int main(){
    char input;
    scanf("%c",&input);
    if(input>='A' && input<='Z'){
        input = input + 32;
        printf("%d",input);
    }
    else if(input >= 'a' && input <= 'z'){
        input = input - 32;
        printf("%c",input);
    }
    else{
        printf("Invalid Input");
    }
    }