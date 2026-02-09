#include<stdio.h>
#include<math.h>


int main() {
    double x, sum = 1.0, term = 1.0;
    int n, i;

    // Get user input for x and the number of terms n
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n (number of terms after 1): ");
    scanf("%d", &n);

    // Loop to calculate each term and add it to the sum
    for (i = 1; i <= n; i++) {
        term = term * (x / i); // Efficiently calculates (x^i / i!)
        sum = sum + term;
    }

    printf("\nThe sum of the series is: %.4lf\n", sum);

    return 0;
}