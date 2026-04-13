#include <stdio.h>

int findGCD(int a, int b) {
    int gcd;
    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}


int smallestCommonDivisor(int a, int b) {
    for(int i = 2; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            return i;
    }
    return -1; 
}

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    do {
        printf("\n Menu \n");
        printf("1. Smallest Common Divisor (other than 1)\n");
        printf("2. GCD of two numbers\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                int scd = smallestCommonDivisor(a, b);
                if(scd == -1)
                    printf("No common divisor other than 1\n");
                else
                    printf("Smallest Common Divisor = %d\n", scd);
                break;
            }

            case 2:
                printf("GCD = %d\n", findGCD(a, b));
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 3);

    return 0;
}
