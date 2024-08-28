#include <stdio.h>

    int main(){
        char charecter,previous_charecter,next_charecter;

        printf("Enter a letter: ");
        scanf("%c",&charecter);

        previous_charecter = (charecter - 1);
        next_charecter = (charecter + 1);

        printf("Previous letter with ASCII: %c  %d",previous_charecter,previous_charecter);
         printf("\nNext letter with ASCII: %c  %d",next_charecter,next_charecter);
    }
