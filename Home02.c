#include <stdio.h>

void main() {
    char name[100];
    char carNumber[99];
    int hours;
    double rentalCost = 0.0;

    printf("---------------------\n");
    printf("  Program Rent Taxi\n");
    printf("---------------------\n");
    
    printf("Enter name for rent : ");
    scanf("%99s", name); 

    printf("Enter car number for rent : ");
    scanf("%98s", carNumber);

    printf("Enter hour for rent : ");
    scanf("%d", &hours);


    if (hours >= 16) 
        rentalCost = hours * 70.50;
    else if (hours >= 11 && hours <= 15) 
        rentalCost = hours * 80.00;
    else if (hours >= 6 && hours <= 10)
        rentalCost = hours * 90.50;
    else if (hours >= 1 && hours <= 5) 
        rentalCost = hours * 100.00;
    else {
        rentalCost = 0.0;
        printf("Invalid hours entered. Rental cost is 0.\n");
    }

    printf("----------------------------\n");
    printf("  Pay for rent is : %.2lf\n", rentalCost);
    printf("----------------------------\n");

}
