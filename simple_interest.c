#include <stdio.h>

// the function to calculate simple interest
double calculateSimpleInterest(double P, double r, double n) {
    return (P * r * n) / 100.0;
}

int main() {
    double principal, rate, custom_years;

    // user enters the values
    printf("Enter principal amount ($): ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (%%): ");
    scanf("%lf", &rate);

    // an array of the different time periods in years
    double periods[] = {0.5, 1.0, 3.0, 5.0, 10.0};
    int num_periods = sizeof(periods) / sizeof(periods[0]);

    printf("\nprincipal amount: $%.2f\n", principal);
    printf("annual rate: %.2f%%\n", rate);
    printf(" %-12s  %-17s \n", "Time (Years)", "Interest Accrued");

    for (int i = 0; i < num_periods; i++) {
        double interest = calculateSimpleInterest(principal, rate, periods[i]);
        printf(" %-12.1f  $%-16.2f \n", periods[i], interest);
    }

    // let the user try their own time period too
    printf("\nEnter your own time period in years: ");
    scanf("%lf", &custom_years);
    double custom_interest = calculateSimpleInterest(principal, rate, custom_years);
    printf("Interest after %.1f years: $%.2f\n", custom_years, custom_interest);

    return 0;
}