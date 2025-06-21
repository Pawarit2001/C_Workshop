#include <stdio.h>

void main() {
    char loanName[100];
    float loanAmount;
    float benefit;

    printf("---------------------------\n");
    printf("  Program Benefit of Loan\n");
    printf("---------------------------\n");

    printf("Enter name of loan : ");
    scanf(" %[^\n]", loanName);

    printf("Enter money of loan : ");
    scanf("%f", &loanAmount);

    if (loanAmount >= 1000) {
        benefit = loanAmount * 0.025;
    } 
    else {
        benefit = loanAmount * 0.055;
    }

    printf("\nBenefit of loan your is : %.2f\n", benefit);

}
