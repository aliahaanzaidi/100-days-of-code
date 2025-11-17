#include <stdio.h>
#include <math.h>

int main() 
{
    double principal, rate, time, simpleInterest, compoundInterest;

    printf("Enter Principal amount: ");
    if (scanf("%lf", &principal) != 1 || principal < 0) {
        printf("Error: Please enter a non-negative principal amount\n");
        return 1;
    }

    printf("Enter Rate of interest (in %%): ");
    if (scanf("%lf", &rate) != 1 || rate < 0) {
        printf("Error: Please enter a non-negative interest rate\n");
        return 1;
    }

    printf("Enter Time (in years): ");
    if (scanf("%lf", &time) != 1 || time < 0) {
        printf("Error: Please enter a non-negative time period\n");
        return 1;
    }

    simpleInterest = (principal * rate * time) / 100.0;

    compoundInterest = principal * pow((1.0 + rate / 100.0), time) - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}