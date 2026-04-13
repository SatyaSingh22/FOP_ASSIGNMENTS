#include <stdio.h>

int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

float power(float x, int n) {
    float result = 1;
    for(int i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int n;
    float x, sum = 0;
    int sign = 1;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

   
    for(int i = 1; i <= n; i++) {
        int exponent = 2 * i - 1;
        sum += sign * (power(x, exponent) / factorial(exponent));
        sign = -sign; 
    }

    printf("Sum of sine series = %.5f\n", sum);

    return 0;
}
