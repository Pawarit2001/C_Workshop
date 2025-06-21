#include <stdio.h>

void main() {
    int n, i;
    float number, min, max, sum = 0, average;

    printf("------------------\n");
    printf("  Program Number\n");
    printf("-----------------+\n");
    printf("Enter number total : ");
    scanf("%d", &n);

    printf("------------------\n");

    for (i = 0; i < n; i++) {
        printf("Number %d : ", i + 1);
        scanf("%f", &number);

        if (i == 0) {
            min = max = number;
        } else {
            if (number < min)
                min = number;
            if (number > max)
                max = number;
        }

        sum += number;
    }

    average = sum / n;

    printf("---------------------------\n");
    printf("Minimum number is : %.2f\n", min);
    printf("Maximum number is : %.2f\n", max);
    printf("Sum number is     : %.2f\n", sum);
    printf("Average number is : %.2f\n", average);
    printf("---------------------------\n");

}