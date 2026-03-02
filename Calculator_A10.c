#include <stdio.h>

int main() {
    int choice;
    int x, y, i, fact = 1;
    float a, b, result = 1;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power (x^y)\n6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a + b);
            break;

        case 2:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a - b);
            break;

        case 3:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a * b);
            break;

        case 4:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a / b);
            break;

        case 5:
            scanf("%d %d", &x, &y);
            for (i = 1; i <= y; i++)
                result = result * x;
            printf("Result = %.2f", result);
            break;

        case 6:
            scanf("%d", &x);
            for (i = 1; i <= x; i++)
                fact = fact * i;
            printf("Factorial = %d", fact);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
