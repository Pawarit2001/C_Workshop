//คำสั้ง break and Continue ใน Loop
// break ใน Loop ทำงานเมื่อใด ออกจาก Loop ทัน
// Continue ใน Loop ทำงานเมื่อใด ถือว่าจบรอบนั้้น ให้ไปรอบต่อไปทันทีโดยไม่สนใจคำสั่งใดๆ ใน Loop

#include<stdio.h>

void main(){
    int i;

    for(i = 1 ; i <= 10 ; i = i + 1){
        printf("Hello....\n");
        if(i == 5){
            continue;
        }
        printf("Hi...\n");

    }


}