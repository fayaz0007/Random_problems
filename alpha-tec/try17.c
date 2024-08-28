 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    int number;
    printf("please enter your number ");
    scanf("%c",&number);
    switch(number)
    {
        case'1':
            printf("January");
            break;
        case'2':
            printf("February");
            break;
        case'3':
            printf("March");
            break;
        case'4':
            printf("April");
            break;
        case'5':
            printf("May");
            break;
        case'6':
            printf("Jun");
            break;
        case'7':
            printf("July");
            break;
        case'8':
            printf("August");
            break;
        case'9':
            printf("September");
            break;
        case'10':
            printf("october");
            break;
        case'11':
            printf("november");
            break;
        case'12':
            printf("Decenber");
            break;
        default:
            printf("Error..Somthing is wrong");
            break;
    }
    return 0;
}