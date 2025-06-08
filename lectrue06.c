// Variable ตัวแปร ************
// สร้าง (ประกาศ/declare) ตัวแปรใน C  ต้องระบุชนิดของตัวแปร
// ชนิดข้อมูล  ชื่อตัวแปร;
#include <stdio.h>

void main()
{
    // int ชนิดจำนวนเต็มไม่เกินหลักหมื่น
    int midtermScore = 50;
    int finalScore = 20;
    int quizScore;
    int totalScore;

    quizScore = 15;
    totalScore = midtermScore + finalScore + quizScore;

    // ตัวแปรห้ามนำไปเขียนใน "???" ให้เขียนหลัง ,
    // โดยตำแหน่งที่จะเอาข้อมูลในตัวแปรไปแสดงให้ใช้ Format Code (จะขึ้นต้นด้วย %)
    printf("Midterm score = %d\n", midtermScore);
    printf("Final score = %d\n", finalScore);
    printf("Quiz score = %d\n", quizScore);
    printf("Total score = %d\n", totalScore);
}