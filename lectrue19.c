//Contron Statement (Loop) คือการทำงานเต็มๆ ซ้ำ
//มีคำสั่งที่ใช้อยู่ 3 คำสั่ง คือ while, do-while, for

#include<stdio.h>

void main(){

    // int x;
    // x = 1;
    // while( x <= 5){ 
    //     printf("Hello....");
    //     x = x + 1;
    // }

    // int y;
    // y = 1;
    // do{
    //     printf("Hello...");
    //     y = y + 1;
    // }while( y <= 5 );

    int z;
    for(z = 1; z <= 5; z = z + 1){
        printf("Hello...");
    }
}