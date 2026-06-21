#include <stdio.h>

#define PI 3.141592653589793

int recArea(int length, int width)
{
    return length * width;
}

int recPerim(int length, int width)
{
    return 2 * (length + width);
}

double triArea(int baseLength, int height)
{
    return 0.5 * baseLength * height;
}

int triPerim(int baseLength, int side1, int side2)
{
    return baseLength + side1 + side2;
}

double circleArea(double radius)
{
    return PI * radius * radius;
}

double circlePerim(double radius)
{
    return 2 * PI * radius;
}

int main()
{
    int choice, baseLength, length, width, height, side1, side2, times;
    int operand;
    double radius;

    printf("Available shapes:\n");
    printf("1. Triangle\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");

    printf("\nEnter number of calculations to perform: ");
    scanf("%d", &times);

    for (int i = 0; i < times; i++)
    {
        printf("\nEnter the shape (1, 2, or 3): ");
        scanf("%d", &choice);

        printf("Choose operation:\n");
        printf("1. Area\n");
        printf("2. Perimeter\n");
        scanf("%d", &operand);

        if (choice == 1)
        {
            printf("Enter base length: ");
            scanf("%d", &baseLength);

            printf("Enter perpendicular height: ");
            scanf("%d", &height);

            printf("Enter side 1: ");
            scanf("%d", &side1);

            printf("Enter side 2: ");
            scanf("%d", &side2);

            if (operand == 1)
            {
                double ans = triArea(baseLength, height);
                printf("Area of triangle = %.2f\n", ans);
            }
            else if (operand == 2)
            {
                int ans = triPerim(baseLength, side1, side2);
                printf("Perimeter of triangle = %d\n", ans);
            }
            else
            {
                printf("Invalid operation.\n");
            }
        }
        else if (choice == 2)
        {
            printf("Enter radius of circle: ");
            scanf("%lf", &radius);

            if (operand == 1)
            {
                double ans = circleArea(radius);
                printf("Area of circle = %.2f\n", ans);
            }
            else if (operand == 2)
            {
                double ans = circlePerim(radius);
                printf("Circumference of circle = %.2f\n", ans);
            }
            else
            {
                printf("Invalid operation.\n");
            }
        }
        else if (choice == 3)
        {
            printf("Enter length: ");
            scanf("%d", &length);

            printf("Enter width: ");
            scanf("%d", &width);

            if (operand == 1)
            {
                int ans = recArea(length, width);
                printf("Area of rectangle = %d\n", ans);
            }
            else if (operand == 2)
            {
                int ans = recPerim(length, width);
                printf("Perimeter of rectangle = %d\n", ans);
            }
            else
            {
                printf("Invalid operation.\n");
            }
        }
        else
        {
            printf("Invalid shape selection.\n");
        }
    }

    return 0;
}
