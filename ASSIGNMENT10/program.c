#include <stdio.h>

int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int power(int x, int y) {
    int i, result = 1;
    for(i = 1; i <= y; i++) {
        result = result * x;
    }
    return result;
}

int main() {
    int choice;
    float a, b;
    int x, y;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f\n", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f\n", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f\n", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero not allowed\n");
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%d %d", &x, &y);
            printf("Result = %d\n", power(x, y));
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &x);
            if (x >= 0)
                printf("Factorial = %d\n", factorial(x));
            else
                printf("Factorial not defined for negative numbers\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
