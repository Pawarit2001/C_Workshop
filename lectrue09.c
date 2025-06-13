//input statement
//scanf() -> stdio.h รับค่าได้ทุกชนิดข้อมูล ตัวอักษร ข้อความ ตัวเลข
//getchar() -> stdio.h รับตัวอักษร
//getch() -> stdio.h รับตัวอักษร
//getche() -> stdio.h รับตัวอักษร

#include <stdio.h>

void main(){
    int aa;
    float bb;
    char cc[50];
    char dd, ee, ff, gg;

    printf("Input aa value : ");
    scanf("%d" , &aa );
    printf("AA value is %d", aa);
    printf("\nInput bb value : ");
    scanf("%f ,&bb");
    printf("BB valae is %f\n", bb);
    printf("BB value is %.2f\n", bb);
    printf("BB value is %.4f\n", bb);
    printf("Input cc valoe :");
    scanf("%s",&cc);
    printf("CC Value is %s\n", cc);


}