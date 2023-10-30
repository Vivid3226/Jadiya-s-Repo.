#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2,realPart,imaginaryPart;

    // Taking input from the user
    printf("Enter the values of a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculating the discriminant
    discriminant = b * b - 4 * a * c;

    // Nested switch case based on discriminant
    switch (discriminant > 0) {
        case 1:  // Positive discriminant, real roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two distinct real roots:\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
            break;

        case 0:  // Non-positive discriminant
            switch (discriminant == 0) {
                case 1:  // Zero discriminant, real and equal roots
                    root1 = -b / (2 * a);
                    printf("Two equal real roots:\n");
                    printf("Root 1 = Root 2 = %.2lf\n", root1);
                    break;

                case 0:  // Negative discriminant, complex roots
                     realPart = -b / (2 * a);
                     imaginaryPart = sqrt(-discriminant) / (2 * a);
                    printf("Complex roots:\n");
                    printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
                    printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
                    break;
            }
            break;
    }

    return 0;
}