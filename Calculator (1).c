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
void matrixMultioy();
void exponentiation_Calculation();
void statistics_Calculation();
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
                                matrixMultioy();
                                break;
                            case 4:
                                exponentiation_Calculation();
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
                            case 3:
                                statistics_Calculation();
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
    double a, b, c;
    printf("Enter the coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * a);
        printf("Roots are real and identical:\n");
        printf("Root 1 = Root 2 = %.2lf\n", root);
    }
    else
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

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

    printf("\nThe division of  1st & 2nd number is: %d",multipy);
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

    printf("\nThe division of  1st & 2nd number is: %d",multipy);
}
void matrixMultioy(){
    int first[10][10],secend[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum = 0;

    printf("Enter rows and colume for first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and colume for secend matrix: ");
    scanf("%d%d",&r2,&c2);

    while(c1!=r2){
        printf("Error! colume of firest matrix not equal to row of secend\n");
        printf("Enter rows and colume for first matrix: ");
        scanf("%d%d",&r1,&c1);
        printf("Enter rows and colume for secend matrix: ");
        scanf("%d%d",&r2,&c2);
    }
    //firest matrix input
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&first[i][j]);
        }
    }
    //secend matrix input
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&secend[i][j]);
        }
    }
    //print first matrix
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    //print secend matrix
    printf("\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d ",secend[i][j]);
        }
        printf("\n");
    }

    //main calculation
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
                sum = sum + first[i][k] * secend[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    printf("\n\n Result: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
void exponentiation_Calculation(){
    int a,b,m,result;
    printf("Plese enter the 1st number: ");
    scanf("%d",&a);
    printf("\nPlese enter the 2nd number: ");
    scanf("%d",&b);
    printf("\nPlese enter the 3rd number: ");
    scanf("%d",&m);
    int cal = pow(a,b);
    result =cal%m;

    printf("So the result is: %d",result);
}
void statistics_Calculation(){
    int N;
    printf("Enter the number of integers (N): ");
    scanf("%d", &N);

    int numbers[N];
    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }
    int min_value = numbers[0];

    int max_value = numbers[0];

    double sum = 0;

    int most_frequent_value = numbers[0];
    int max_count = 1;
    int unique_values = 0;

    for (int i = 0; i < N; i++) {
       sum += numbers[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    double median_value;
    if (N % 2 == 0) {
        median_value = (numbers[N / 2 - 1] + numbers[N / 2]) / 2.0;
    } else {
        median_value = numbers[N / 2];
    }

    double avg_value = sum / N;
    double variance_value = 0;

    for (int i = 0; i < N; i++) {
        if (numbers[i] < min_value) {
            min_value = numbers[i];
        }
        if (numbers[i] > max_value) {
            max_value = numbers[i];
        }

        int current_value = numbers[i];
        int current_count = 0;
        for (int j = 0; j < N; j++) {
            if (numbers[j] == current_value) {
                current_count++;
            }
        }
        if (current_count > max_count) {
            max_count = current_count;
            most_frequent_value = current_value;
        }

        int is_unique = 1;
        for (int j = 0; j < i; j++) {
            if (numbers[j] == numbers[i]) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            unique_values++;
        }

        variance_value += (numbers[i] - avg_value) * (numbers[i] - avg_value);
    }
    variance_value /= N;

    printf("a. Min: %d\n", min_value);
    printf("b. Max: %d\n", max_value);
    printf("c. Avg: %lf\n", avg_value);
    printf("d. Most frequent value: %d\n", most_frequent_value);
    printf("e. Unique values: %d\n", unique_values);
    printf("f. Median: %lf\n", median_value);
    printf("g. Variance: %lf\n", variance_value);

}
