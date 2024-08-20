#include  <stdio.h>
//reciving 3 number ------> grade1,grade2,grade3.
//calculate average.
// float average_between()
// {
//     int grade1,grade2,grade3;
//     float avg;
//     printf("Plese enter the three grades:- ");
//     scanf("%d%d%d",&grade1,&grade2,&grade3);

//     avg = (grade1+grade2+grade3)/3.0;
//     return avg;

// }
// int main()
// {
//     float cal;

//     cal=average_between();
//     printf("the average nummber is %f",cal);
//     return 0;
// }

float average_between(int grade1,int grade2,int grade3)
{
    float avg;
    avg = (grade1+grade2+grade3)/3.0;
    return avg;

}
int main()
{
    int g1,g2,g3;
    printf("enter 3 grades = ");
    scanf("%d%d%d" ,&g1,&g2,&g3);

    printf("Average = %f\n",average_between(g1,g2,g3));
    
}