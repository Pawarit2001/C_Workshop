// ตัวแปล กับ Format code
#include <stdio.h>

void main()
{
    // สร้างตัวแปลต้องมีชนิดข้อมูล ชื่อตัวแปล
    int aa = 10;                //(%d) //ทศนิยมไม่เกิน 6 หลัก
    float bb = 20.125;          //(%f) //ทศนิยมไม่เกิน 6 หลัก
    double cc = 30.32153132;    //(%lf) //ทศนิยมเกิน 6 หลัก
    char dd = '#';              //(%c) //ตัวอักษร Charactor คือ ตัวอักษรตัวเดียว อยู่ใน '?'
    char ee[] = "Hello World!"; //(%s) //ข้อความ string คือ ตัวอักษรตั้งแต่ 0 ตัวขึ้นไป อยู่ใน "????"
    long ff = 32152154;         //(%ld) //จำนวนเต็มเกินหลักหมื่น

    printf("AA : %d", aa);
    printf("\nBB : %f", bb);
    printf("\nCC : %lf", cc);
    printf("\nDD : %c", dd);
    printf("\nEE : %s", ee);
    printf("\nFF : %ld", ff);
}