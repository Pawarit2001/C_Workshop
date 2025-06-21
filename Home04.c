#include <stdio.h>
#include <stdlib.h>

void main(){
    char Tourgroupnamehead[100];
    char Tourgrouptelephonehead[11];
    int Numberoftourparticipants;
    double pricetopay;

    printf("-------------------------------\n");
    printf("  Number of tour participants  \n");
    printf("-------------------------------\n");

    printf("Enter name of head group : ");
    scanf("%99s", Tourgroupnamehead);

    printf("Enter telephone of head group : ");
    scanf("%10s", Tourgrouptelephonehead);

    printf("Enter number of group : ");
    scanf("%d", &Numberoftourparticipants);

    if(Numberoftourparticipants >= 11)
        pricetopay = Numberoftourparticipants * 150;
    else if(Numberoftourparticipants >= 6 && Numberoftourparticipants <= 10)
        pricetopay = Numberoftourparticipants * 210;
    else if(Numberoftourparticipants >= 3 && Numberoftourparticipants <= 5)
        pricetopay = Numberoftourparticipants * 250;
    else if(Numberoftourparticipants >= 1 && Numberoftourparticipants <= 2)
        pricetopay = Numberoftourparticipants * 300;
    else{
        pricetopay = 0.00;
        printf("The number of tourists you entered is incorrect. Price set to 0.\n");
    }

    printf("------------------------------------\n");
    printf("  Pay for package tour is : %.2lf\n", pricetopay);
    printf("------------------------------------\n");
    
}