//Without recursion
#include <stdio.h>

int factorial_iterative(int n) {
    int i, fact = 1;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int num;
    scanf("%d", &num);

    printf("Factorial (Iterative) = %d\n", factorial_iterative(num));

    return 0;
}
//With recursion
#include <stdio.h>

int factorial_recursive(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

int main() {
    int num;
    scanf("%d", &num);

    printf("Factorial (Recursive) = %d\n", factorial_recursive(num));

    return 0;
}
