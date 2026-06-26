#include <stdio.h>

#define PI 3.141592653589793

// --- Mathematical Helper Functions ---
double recArea(double length, double width) { return length * width; }
double recPerim(double length, double width) { return 2 * (length + width); }
double triArea(double baseLength, double height) { return 0.5 * baseLength * height; }
double triPerim(double baseLength, double side1, double side2) { return baseLength + side1 + side2; }
double circleArea(double radius) { return PI * radius * radius; }
double circlePerim(double radius) { return 2 * PI * radius; }

// --- Shape Processor Functions ---
void processTriangle(int operation) {
    double baseLength, height, side1, side2;
    if (operation == 1) {
        printf("Enter base length: ");
        scanf("%lf", &baseLength);
        printf("Enter perpendicular height: ");
        scanf("%lf", &height);
        printf("Area of triangle = %.2f\n", triArea(baseLength, height));
    } else if (operation == 2) {
        printf("Enter base length (side 1): ");
        scanf("%lf", &baseLength);
        printf("Enter side 2: ");
        scanf("%lf", &side1);
        printf("Enter side 3: ");
        scanf("%lf", &side2);
        printf("Perimeter of triangle = %.2f\n", triPerim(baseLength, side1, side2));
    } else {
        printf("Invalid operation.\n");
    }
}

void processCircle(int operation) {
    double radius;
    printf("Enter radius of circle: ");
    scanf("%lf", &radius);

    if (operation == 1) {
        printf("Area of circle = %.2f\n", circleArea(radius));
    } else if (operation == 2) {
        printf("Circumference of circle = %.2f\n", circlePerim(radius));
    } else {
        printf("Invalid operation.\n");
    }
}

void processRectangle(int operation) {
    double length, width;
    printf("Enter length: ");
    scanf("%lf", &length);
    printf("Enter width: ");
    scanf("%lf", &width);

    if (operation == 1) {
        printf("Area of rectangle = %.2f\n", recArea(length, width));
    } else if (operation == 2) {
        printf("Perimeter of rectangle = %.2f\n", recPerim(length, width));
    } else {
        printf("Invalid operation.\n");
    }
}

// --- Main Engine ---
int main() {
    int choice, times, operation;

    printf("Available shapes:\n1. Triangle\n2. Circle\n3. Rectangle\n");
    printf("\nEnter number of calculations to perform: ");
    if (scanf("%d", &times) != 1 || times <= 0) {
        printf("Invalid calculation count.\n");
        return 1;
    }

    for (int i = 0; i < times; i++) {
        printf("\n--- Calculation %d of %d ---\n", i + 1, times);
        printf("Enter the shape (1=Triangle, 2=Circle, 3=Rectangle): ");
        scanf("%d", &choice);

        printf("Choose operation (1=Area, 2=Perimeter/Circumference): ");
        scanf("%d", &operation);

        switch (choice) {
            case 1:
                processTriangle(operation);
                break;
            case 2:
                processCircle(operation);
                break;
            case 3:
                processRectangle(operation);
                break;
            default:
                printf("Invalid shape selection.\n");
        }
    }
    return 0;
}
