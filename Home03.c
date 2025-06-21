#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    char homenumber[100000];
    char electricalunit[100000];
    int hours;
    double PayForElectricUse;

    printf("---------------------------\n");
    printf("  Pay for electric use is \n");
    printf("---------------------------\n");

    printf("Enter you home number : ");
    scanf("%99999s", homenumber);

    printf("Enter you electrical unit : ");
    scanf("%99999s", electricalunit);
    double unitValue = atof(electricalunit);

    if (unitValue >= 50.0) {
        PayForElectricUse = unitValue * 4.00;
    } else if (unitValue >= 20.0) {
        PayForElectricUse = unitValue * 4.50;
    } else {
        PayForElectricUse = unitValue * 5.00;
    }

    printf("-----------------------------------\n");
    printf("Pay for electric you is : %.2lf\n", PayForElectricUse);
    printf("-----------------------------------\n");
}