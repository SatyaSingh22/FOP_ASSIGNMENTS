#include <stdio.h>
#include <math.h>


int isPrime(int n) {
    if(n <= 1)
        return 0;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}


long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void primeFactors(int n) {
    printf("Prime factors: ");
    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

   
    printf("Square root = %.2f\n", sqrt(num));

    printf("Square = %d\n", num * num);

 
    printf("Cube = %d\n", num * num * num);

 
    if(isPrime(num))
        printf("It is a Prime number\n");
    else
        printf("It is not a Prime number\n");

    if(num >= 0)
        printf("Factorial = %lld\n", factorial(num));
    else
        printf("Factorial not defined for negative numbers\n");


    if(num > 1)
        primeFactors(num);
    else
        printf("\nNo prime factors");

    return 0;
}
