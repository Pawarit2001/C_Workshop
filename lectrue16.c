#include<stdio.h>

void main(){
    int score;
    printf("Input Score : ");
    scanf("%d",&score);
    if (score>=80)
    {
        printf("Your grade is A");
    }
    else if (score>=70)
    {
        printf("Your grade is B");
    }
    else if (score>=60)
    {
        printf("Your grade is C");
    }
    else if (score>=50)
    {
        printf("Your grade is D");
    }
    else
    {
        printf("Your grade is F");
    }
}