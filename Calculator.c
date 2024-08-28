#include <stdio.h>
#include <math.h>

void mainMenu();
void additionMenu();
void simpleAddition();
void advancedAddition();
void subtractionMenu();
void simpleSubtraction();
void absoluteDifference();
void miscellaneousMenu();
void areaCalMenu();
void triangleArea();
void rectangleArea();
void trapezoidArea();
void circleArea();
void ageCalculator();
void equationMenu();
void simpleEquation();
void complexEquation();
void divisionMenu();
void simpleDivision();
void advanceDivision();
void multiplicationMenu();
void simpleMultiply();
void moduloMultiply();
int main(){
        int userInput;
        while(1){ 
            mainMenu();
            scanf("%d",&userInput);
            switch(userInput){
                case 1:
                    int userInputAddition;
                    while(1){
                        additionMenu();
                        scanf("%d",&userInputAddition);
                        switch(userInputAddition){
                            case 1:
                                simpleAddition();
                                break;
                            case 2:
                                advancedAddition();
                                break;
                            case 3:
                                break;
                            
                        }
                        if(userInputAddition == 4){
                            break;
                        }
                    }
                    break;
                case 2:
                    int userInputSubtraction;
                    while(1){
                        subtractionMenu();
                        scanf("%d",&userInputSubtraction);
                        switch(userInputSubtraction){
                            case 1:
                                simpleSubtraction();
                                break;
                            case 2:
                                absoluteDifference();
                                break;

                        }
                        if(userInputSubtraction == 3){
                            break;
                        }
                    }
                    break;
                case 3:
                    int userInputdivide;
                    while(1){
                        divisionMenu();
                        scanf("%d",&userInputdivide);
                        switch(userInputdivide){
                            case 1:
                                simpleDivision();
                                break;
                            case 2:
                                advanceDivision();
                                break;
                            
                        }
                        if(userInputdivide == 3){
                            break;
                        }
                    }
                    break;
                case 4:
                    int userInputMulti;
                    while(1){
                        multiplicationMenu();
                        scanf("%d",&userInputMulti);
                        switch(userInputMulti){
                            case 1:
                                simpleMultiply();
                                break;
                            case 2:
                                moduloMultiply();
                                break;
                            case 3:
                                break;
                            case 4:
                                break;
                            
                        }
                        if(userInputMulti == 5){
                            break;
                        }
                    }
                    break;
                case 5:
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
                    
                    break;
                case 6:
                    int userInputMiscellaneous;
                    while(1){
                        miscellaneousMenu();
                        scanf("%d",&userInputMiscellaneous);
                        switch(userInputMiscellaneous){
                            case 1:
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
                            case 2:
                                ageCalculator();
                                break;
                            
                        }
                        if(userInputMiscellaneous==4){
                            break;
                        }
                    }
            }
                
        }
}

void additionMenu(){
    printf("\n         Addition Menu\n");
    printf("Which type of addition you would like to perform..?\n");
    printf("Press 1 for Simple addition\n");
    printf("Press 2 for Advanced addition\n");
    printf("Press 3 for matrix addition\n");
    printf("Press 4 for Returning to the Main Menu\n");
}
void mainMenu(){
    printf("\n                  Main Menu\n");
            printf("\n");
            printf("Which operation you would like to perform..?\n");
            printf("\n");
            printf("Press 1 for add\n");
            printf("Press 2 for subtract\n");
            printf("Press 3 for divide\n");
            printf("Press 4 for multiply\n");
            printf("Press 5 for solving equation\n");
            printf("Press 6 for Miscellaneous\n");
            printf("Press 7 for Exit\n");
}
void simpleAddition(){
    int num,num1,sum;
    printf("\nPlese enter the 1st number:  ");
    scanf("%d",&num);
    printf("\nPlsese enter the 2nd number: ");
    scanf("%d",&num1);

    sum = num + num1;
    
    printf("\nSummation of two number is %d\n",sum);
}

void advancedAddition(){
    int num,sum,i;
    printf("How many numbers you want to add\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        int num1;
        printf("Plese enter your number: \n");
        scanf("%d",&num1);
        sum+=num1;
    }
    printf("Summation of numbers is: %d",sum);
}

void subtractionMenu(){
    printf("\n        Subtraction Menu\n");
    printf("Which type of Subtraction you would like to perform..?\n");
    printf("Press 1 for Simple division\n");
    printf("Press 2 for Advenced division\n");
    printf("Press 3 for Returning to the Main Menu\n");
}
void simpleSubtraction(){
    int num,num1,subtract;
    printf("Plese enter the 1st number: \n");
    scanf("%d",&num);
    printf("Plese enter the 2nd number: \n");
    scanf("%d",&num1);

    subtract = num - num1;

    printf("\nThe Subtraction of two number is %d",subtract);
}

void absoluteDifference(){
    int num,num1,temp,difference;
    printf("Plese enter the 1st number: \n");
    scanf("%d",&num);
    printf("Plese enter the 2nd number: \n");
    scanf("%d",&num1);

    if(num<num1){
        temp = num;
        num = num1;
        num1 = temp;
    }

    difference = num - num1;

    printf("the Absolute difference of two number is: %d",difference);

}
void miscellaneousMenu(){
    printf("\n            Miscellaneous Menu\n");
    printf("Which type of Subtraction you would like to perform.?\n");
    printf("Press 1 for Area Calculator\n");
    printf("Press 2 for Age Calculator\n");
    printf("Press 3 for Statistics\n");
    printf("Press 4 for Returning to the Main Menu\n");

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
void simpleEquation(){
    double a,b,c,d,e,f;
    printf("Plese enter a1: ");
    scanf("%lf",&a);
    printf("\nPlese enter b1: ");
    scanf("%lf",&b);
    printf("\nPlese enter c1: ");
    scanf("%lf",&c);
    printf("Plese enter a2: ");
    scanf("%lf",&d);
    printf("Plese enter b2: ");
    scanf("%lf",&e);
    printf("Plese enter c3: ");
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
void equationMenu(){
    printf("\n            Equation Solving Menu\n");
    printf("Which type of Subtraction you would like to perform?\n");
    printf("Press 1 for Simple Equation\n");
    printf("Press 2 for Complex Equation\n");
    printf("Press 3 for Returning to the Main Menu\n");
}
void complexEquation(){
    double a,b,c,d,x1,x2;

    printf("Enter the value of a,b,c: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    d = sqrt(b*b-4*a*c);

    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);

    printf("x1 = %lf\n",x1);
    printf("x2 = %lf\n",x2);

}
void divisionMenu(){
    printf("\n\n              Division Menu\n");
    printf("Which type of Subtraction you would like to perform?\n");
    printf("Press 1 for Simple division\n");
    printf("Press 2 for Advanced division\n");
    printf("Press 3 for Returning to the Main Menu\n");
    
}
void simpleDivision(){
    float a,b,divid;
    printf("Plese enter the 1st number: ");
    scanf("%f",&a);
    printf("\nPlese enter the 2nd number: ");
    scanf("%f",&b);

    divid = a/b;

    printf("\nThe division of  1st & 2nd number is: %.2f",divid);
}
void advanceDivision(){
        float a,b, x,y;
    printf("Plese enter the 1st number: ");
    scanf("%f",&a);
    printf("\nPlese enter the 2nd number: ");
    scanf("%f",&b);

    x = a/b;
    y= fmod(a,b);

    printf("\nThe value of X: %.2llf",x);
    printf("\nThe value of Y: %.2llf",y);  
}
void multiplicationMenu(){
    printf("\n\n    Multiplication Menu\n");
    printf("Which type of Subtraction you would like to perform?\n");
    printf("Press 1 for  Simple Multiply\n");
    printf("Press 2 for Modulo Multiply\n");
    printf("Press 3 for Matrix Multiplication\n");
    printf("Press 4 for Exponentiation\n");
    printf("Press 5 for Returning to the Miscellaneous Menu\n");
}
void simpleMultiply(){
    int a,b,multipy;
    printf("Plese enter the 1st number: ");
    scanf("%d",&a);
    printf("\nPlese enter the 2nd number: ");
    scanf("%d",&b);

    multipy = a*b;

    printf("\nThe multiply of  1st & 2nd number is: %d",multipy);
}
void moduloMultiply(){
    int a,b,c,multipy;
    printf("Plese enter the 1st number: ");
    scanf("%d",&a);
    printf("\nPlese enter the 2nd number: ");
    scanf("%d",&b);
    printf("\nPlese enter the 3rd number: ");
    scanf("%d",&c);

    multipy = (a*b)%c;

    printf("\nThe modulo of  1st & 2nd number is: %d",multipy);
}
void exponenTiation(){
    int a,b,c,multipy;
    printf("Plese enter the 1st number: ");
    scanf("%d",&a);
    printf("\nPlese enter the 2nd number: ");
    scanf("%d",&b);
    printf("\nPlese enter the 3rd number: ");
    scanf("%d",&c);

    multipy = pow(a,b)%c;

    printf("\nThe  Exponentiation of 1st & 2nd number is: %d",multipy);
}
