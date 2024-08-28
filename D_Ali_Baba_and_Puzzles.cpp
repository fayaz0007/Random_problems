#include <stdio.h>
#include <math.h>

void durationCalculator();
void shapeMenu();
void triangleVolume();
void rectangleVolume();
void trapezoidVolume();
void circleVolume();
void equationSolverMenu();
void linearEquation();
void quadraticEquation();

int main()
{
    int userChoice;
    while (1)
    {
        printf("\n         Calculator Menu\n");
        printf("Select the operation you want to perform:\n");
        printf("1. Calculate age\n");
        printf("2. Calculate area\n");
        printf("3. Solve Equations\n");
        printf("4. Exit\n");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 1:
            durationCalculator();
            break;
        case 2:
        {
            int shapeChoice;
            while (1)
            {
                shapeMenu();
                scanf("%d", &shapeChoice);
                switch (shapeChoice)
                {
                case 1:
                    triangleVolume();
                    break;
                case 2:
                    rectangleVolume();
                    break;
                case 3:
                    trapezoidVolume();
                    break;
                case 4:
                    circleVolume();
                    break;
                }
                if (shapeChoice == 5)
                {
                    break;
                }
            }
            break;
        }
        case 3:
        {
            int equationChoice;
            while (1)
            {
                equationSolverMenu();
                scanf("%d", &equationChoice);
                switch (equationChoice)
                {
                case 1:
                    linearEquation();
                    break;
                case 2:
                    quadraticEquation();
                    break;
                }
                if (equationChoice == 3)
                {
                    break;
                }
            }
            break;
        }
        case 4:
            return 0;
        }
    }
}

void durationCalculator()
{
    int startDay, startMonth, startYear, endDay, endMonth, endYear;
    int days, months, years;

    printf("Enter the start date (DD/MM/YYYY): ");
    scanf("%d%d%d", &startDay, &startMonth, &startYear);

    printf("Enter the end date (DD/MM/YYYY): ");
    scanf("%d%d%d", &endDay, &endMonth, &endYear);

    if (startDay < 1 || startDay > 31 || startMonth < 1 || startMonth > 12 || startYear < 0 ||
        endDay < 1 || endDay > 31 || endMonth < 1 || endMonth > 12 || endYear < 0)
    {
        printf("Invalid input. Please enter valid dates.\n");
        return;
    }

    // Calculate the duration
    years = endYear - startYear;
    months = endMonth - startMonth;
    days = endDay - startDay;

    // Adjust negative values
    if (days < 0)
    {
        months--;
        days += 30; // Assuming a month has 30 days for simplicity
    }
    if (months < 0)
    {
        years--;
        months += 12;
    }

    printf("\nDuration: %d years, %d months, %d days\n", years, months, days);
}

void shapeMenu()
{
    printf("\n\n    Volume Calculator Menu\n");
    printf("Select the shape for volume calculation:\n");
    printf("1. Triangle\n");
    printf("2. Rectangle\n");
    printf("3. Trapezoid\n");
    printf("4. Circle\n");
    printf("5. Return to Main Menu\n");
}

void triangleVolume()
{
    double baseArea, height, volume;

    // Get user input for base area and height
    printf("Enter the base area of the triangle: ");
    scanf("%lf", &baseArea);

    printf("Enter the height of the triangular pyramid: ");
    scanf("%lf", &height);

    // Calculate the volume of the triangular pyramid
    volume = (1.0 / 3.0) * baseArea * height;

    // Display the result
    printf("The volume of the triangular pyramid is: %.2lf\n", volume);
}

void rectangleVolume()
{
    double length, width, height, volume;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    printf("Enter the height of the rectangle: ");
    scanf("%lf", &height);

    // Calculate the volume of the rectangle (length * width * height)
    volume = length * width * height;

    printf("The volume of the rectangle is: %.2lf\n", volume);
}

void trapezoidVolume()
{
    double length1, length2, height, volume;

    printf("Enter the length of the first parallel side: ");
    scanf("%lf", &length1);

    printf("Enter the length of the second parallel side: ");
    scanf("%lf", &length2);

    printf("Enter the height of the trapezoid: ");
    scanf("%lf", &height);

    // Calculate the volume of the trapezoid
    volume = 0.5 * (length1 + length2) * height;

    printf("The volume of the trapezoid is: %.2lf\n", volume);
}

void circleVolume()
{
    double radius, volume;

    // Input the radius of the circle
    printf("Please enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Check if the radius is non-negative
    if (radius < 0)
    {
        printf("Invalid radius. Please enter a non-negative value.\n");
        return;
    }

    // Calculate the volume of the circle (assuming a sphere for simplicity)
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    // Display the result
    printf("The volume of the sphere is: %.2lf\n", volume);
}

void equationSolverMenu()
{
    printf("\n            Equation Solver Menu\n");
    printf("Select the type of equation to solve:\n");
    printf("1. Linear Equation\n");
    printf("2. Quadratic Equation\n");
    printf("3. Return to Main Menu\n");
}

void linearEquation()
{
    double a1, b1, c1, a2, b2, c2;

    printf("Enter coefficients for the first equation (a1, b1, c1): ");
    scanf("%lf%lf%lf", &a1, &b1, &c1);

    printf("Enter coefficients for the second equation (a2, b2, c2): ");
    scanf("%lf%lf%lf", &a2, &b2, &c2);

    double determinant = a1 * b2 - a2 * b1;

    if (determinant == 0)
    {
        printf("The system of equations has no unique solution.\n");
    }
    else
    {
        double x = (c1 * b2 - c2 * b1) / determinant;
        double y = (a1 * c2 - a2 * c1) / determinant;

        printf("The solution for the system of equations is:\n");
        printf("X = %.2lf\n", x);
        printf("Y = %.2lf\n", y);
    }
}

void quadraticEquation()
{
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
