#include <stdio.h>

#define ROOM_COUNT 10
#define WATER_RATE 12.50
#define ELECTRIC_RATE 8.00

struct Room {
    char name[50];
    float rent;
    int water_unit;
    int electric_unit;
    float total;
};

void main() {
    struct Room rooms[ROOM_COUNT];
    int i;

    printf("---------------------\n");
    printf("  Program Rent Room              \n");
    printf("---------------------\n");

    for(i = 0; i < ROOM_COUNT; i++) {
        printf("\nRoom No. %d\n", i+1);
        printf("Enter name : ");
        scanf("%s", rooms[i].name);

        printf("Enter rent per room : ");
        scanf("%f", &rooms[i].rent);

        printf("Enter unit water use : ");
        scanf("%d", &rooms[i].water_unit);

        printf("Enter unit electric use : ");
        scanf("%d", &rooms[i].electric_unit);

        rooms[i].total = rooms[i].rent + (rooms[i].water_unit * WATER_RATE) + (rooms[i].electric_unit * ELECTRIC_RATE);
    }

    printf("\n----------------\n");
    printf("  Summary Result  \n");
    printf("------------------\n");

    for(i = 0; i < ROOM_COUNT; i++) {
        printf("\nRoom No. %d\n", i+1);
        printf("Name : %s\n", rooms[i].name);
        printf("Pay money total for rent room : %.2f\n", rooms[i].total);
    }

    printf("\n-----------------------\n");

}