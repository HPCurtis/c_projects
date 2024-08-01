/*
The follwing is a cli application wrtiten in C that conducts
the keyfunctions of the compound interest calculator found at 
https://www.thecalculatorsite.com/finance/calculators/compoundinterestcalculator.php
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

double accrued_amount(double p, int n, double r, int t);
int compound_frequency();

int main()
{
    double principal;
    double interestRate;
    int years;
    int freq;
    double accrued;

    // Get the users initial investment
    printf("What is your initial investment: ");
    scanf("%lf", &principal);

    // Get the interest rate.
    printf("What is the interest rate (%%) of the investment: ");
    scanf("%lf", &interestRate);
    interestRate /= 100;

    // Get the number of years of the investment
    printf("Number of years of the investment: ");
    scanf("%d", &years);

    freq = compound_frequency();

    accrued = accrued_amount(principal, freq, interestRate, years);
    printf("Accrued amount: %.2lf\n", accrued);
    return 0;
}

double accrued_amount(double p, int n, double r, int t)
{
    double accrued;
    accrued = p * pow( (1 + r/n), (n * t) );
    return accrued;
}

int compound_frequency()
{
    char freq[9];
    int valid_input = 0;

    do {
        printf("Please enter the compounding frequency of your investment, 1. Annual, Quarterly, Monthly or Daily: ");
        scanf("%s", freq);

        if (strcmp(freq, "Annual") == 0) {
            return 1;
        } else if (strcmp(freq, "Quarterly") == 0) {
            return 4;
        } else if (strcmp(freq, "Monthly") == 0) {
            return 12;
        } else if (strcmp(freq, "Daily") == 0) {
            return 365;
        } else {
            printf("Invalid input. Please try again.\n");
        }
    } while (!valid_input);
}

