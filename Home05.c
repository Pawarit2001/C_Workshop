#include <stdio.h>

void main() {
    int n, i;
    char id[20], name[50];
    float gpa;

    printf("------------------------\n");
    printf("  Program Study Result \n");
    printf("------------------------\n");

    printf("Enter number of student : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("\nStudent No. %d\n", i);
        printf("Enter student id : ");
        scanf("%s", id);
        printf("Enter student name : ");
        scanf("%s", name);
        printf("Enter student GPA : ");
        scanf("%f", &gpa);

        printf("Study result is : ");
        
        if(gpa >= 2.00 && gpa <= 4.00) {
            printf("PASS\n");
        } else {
            printf("NOT PASS\n");
        }
    }

    printf("----------------------------\n");

}