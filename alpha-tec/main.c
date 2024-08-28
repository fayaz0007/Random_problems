#include <stdio.h>

int main()
{
 int distance,speed;
 int time;
 printf("plese enter your distance: ");
 scanf("%d",&distance);
 printf("plese enter your speed: ");
 scanf("%d",&speed);
 time=distance/speed;
 float speed_in_minuts=speed/60.0;
 int time_remaining_minuts = (distance % speed)/speed_in_minuts;
 printf("you will cover %d distance in: %dhours%dminuts",(int)distance,time,time_remaining_minuts);
    return 0;

}
