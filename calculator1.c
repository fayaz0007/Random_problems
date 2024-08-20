#include <stdio.h>
#include <math.h>

void ageCalculator();
void areaCalMenu();
void triangleArea();
void rectangleArea();
void trapezoidArea();
void circleArea();
void equationMenu();
void simpleEquation();
void complexEquation();
int main(){
    int userInput;
    while(1){
        
    printf("\n         Addition Menu\n");
    printf("Which type of addition you would like to perform..?\n");
    printf("Press 1 for Age Calculation\n");
    printf("Press 2 for Area Calculation\n");
    printf("Press 3 for matrix Eqation Solver\n");
    printf("Press 4 for Exit\n");
    scanf("%d",&userInput);

    switch(userInput){
        case 1:
            ageCalculator();
            break;
        case 2:
            int userInputArea;
            while(1){
                areaCalMenu();
                scanf("%d",&userInputArea);
                switch(userInputArea){
                    case 1:
                        triangleArea();
                        break;
                    case 2:
                        rectangleArea();
                        break;
                    case 3:
                        trapezoidArea();
                        break;
                    case 4:
                        circleArea();
                }
                if(userInputArea == 5){
                    break;
                }
            }
            break;
        case 3:
            int userInputEquationMenu;
            while(1){
                equationMenu();
                scanf("%d",&userInputEquationMenu);
                switch(userInputEquationMenu){
                    case 1:
                        simpleEquation();
                        break;
                    case 2:
                        complexEquation();
                        break;
                            
                }
                if(userInputEquationMenu==3){
                        break;
                }
            }

    }
}
    
}
void ageCalculator(){
    int d1,m1,y1,d2,m2,y2,r1,r2,r3;
    printf("Enter your birth date (DD/MM/YYYY): ");
    scanf("%d%d%d",&d1,&m1,&y1);
    printf("\nEnter the present date (DD/MM/YYYY): ");
    scanf("%d%d%d",&d2,&m2,&y2);

    if((d1>31 || d1<1) && (d2>31 || d2<1) && (m1>12 || m1<1) && (m2>12 || m2<1)&&(y1<0 || y2<0)){
        printf("You enterd something wrong try again");
    }
    else{
        r3=y2-y1;
        if(d2>=d1){
            r1=d2-d1;
        }
        else{
            m2-=1;
            d2+=30;
            r1=d2-d1;
        }
        if(m2>=m1){
            r2=m2-m1;
        }
        else{
            y2-=1;
            m2+=12;
            r2=m2-m1;
        }
        
        
    }
    printf("\nYour Age is %d day %d month %d year\n",r1,r2,r3);
}
void areaCalMenu(){
    printf("\n\n    Area Calculator Menu\n");
    printf("Which type of Subtraction you would like to perform?\n");
    printf("Press 1 for Triangle\n");
    printf("Press 2 for Rectangle\n");
    printf("Press 3 for Trapezium\n");
    printf("Press 4 for Circle\n");
    printf("Press 5 for Returning to the Miscellaneous Menu\n");
}
void triangleArea(){
    double a,b,c,s,area;
    printf("Plese enter the leanth of 1st side\n");
    scanf("%lf",&a);
    printf("Plese enter the leanth of 2nd side\n");
    scanf("%lf",&b);
    printf("Plese enter the leanth of 3rd side\n");
    scanf("%lf",&c);
    
    s = (a+b+c)/2.0;
    area = sqrt((s*(s-a)*(s-b)*(s-c)));

    printf("The area of Triangle is: %.2lf",area);
}
void rectangleArea(){
    int leanth,width,rectangle;
    printf("Plese enter lenth of the Rectangle: ");
    scanf("%d",&leanth);
    printf("\nPlese enter width of the Rectangle: ");
    scanf("%d",&width);

    rectangle = leanth * width;

    printf("\nThe area of the Rectangle is: %d\n",rectangle);
}
void trapezoidArea(){
    double a,b,c,d;
    printf("Enter the length of side a: ");
    scanf("%lf", &a);
    printf("\nEnter the length of side b: ");
    scanf("%lf", &b);
    printf("\nEnter the length of side c: ");
    scanf("%lf", &c);

    d = (a + b) * c / 2.0;

    printf("The area of the trapezium is: %.2lf\n",  d);
}
void circleArea(){
    double R,circle;
    printf("Plese enter Radius: ");
    scanf("%lf",&R);
    float pi = 3.14159;

    circle = pi*(pow(R,2));

    printf("\nThe area of the circle is: %.2lf",circle);
}
void equationMenu(){
    printf("\n            Equation Solving Menu\n");
    printf("Which type of Subtraction you would like to perform?\n");
    printf("Press 1 for Simple Equation\n");
    printf("Press 2 for Complex Equation\n");
    printf("Press 3 for Returning to the Main Menu\n");
}
void simpleEquation(){
    double a,b,c,d,e,f;
    printf("Plese enter a1: ");
    scanf("%lf",&a);
    printf("\nPlese enter b1: ");
    scanf("%lf",&b);
    printf("\nPlese enter c1: ");
    scanf("%lf",&c);
    printf("\nPlese enter a2: ");
    scanf("%lf",&d);
    printf("\nPlese enter b2: ");
    scanf("%lf",&e);
    printf("\nPlese enter c3: ");
    scanf("%lf",&f);
    if(c<0){
        c=c+(c*2.0);
    }
    else if(c>0){
        c=c-(c*2.0);
    }
    if(f<0){
        f=f+(f*2.0);
    }
    else if(f>0){
        f=f-(f*2.0);
    }
        
    double dx,dy,D;
    dx =  (f*b-c*e)/(a*e-d*b);
    dy = (c*d -f*a)/(a*e-d*b);
    

    printf("\nThe value of X: %.2lf",dx);
    printf("\nThe value of Y: %.2lf\n",dy);
}
void complexEquation(){

    double a,b,c,d,e,f,x1,x2;
    printf("Enter the value of a,b,c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    d = sqrt(b * b);
    e = sqrt(4*a*c);
    f = (2*a);
    x1 = (-d + e) / f;
    x2 = (-d - e) / f;
    printf("x1 = %lf\n",x1);
    printf("x2 = %lf\n",x2);
    


}

