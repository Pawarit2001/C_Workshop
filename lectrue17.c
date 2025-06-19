//Contron Statement : switch-case พิสูจน์/ตรวจสอบหลายครั้งแต่เป็นการพิสูจน์ว่าเท่ากันหรือไม่เท่านั้น 
//และพิสูจน์ได้เฉพาะตัวเลขและตัวอักษร

//ตัวอย่าง โปรแกรมตรวจสอบสายรถเมย์ จากการป้อนข้อมูลจากผู้ใช้งานและแสดงออกมา 
//กรณีผู้ใช้งานป้อนสาย 3 แสดงข้อความ Go to sanamlung
//กรณีผู้ใช้งานป้อนสาย 123 แสดงข้อความ Go to Pinkloa
//กรณีผู้ใช้งานป้อนสาย 84 แสดงข้อความ Go to Wat Rai King
//กรณีผู้ใช้งานป้อนสาย 81 แสดงข้อความ Go to Oam Noi
//กรณีผู้ใช้งานป้อนสายอื่นๆ แสดงข้อความ Don't have data of BUS Number


#include<stdio.h>

void main(){

    int BUSNO;

    printf("Input bus number :");
    scanf("%d" , &BUSNO);
    printf("---------\n");
    switch( BUSNO ){
        case 3 : printf("Go to sanamlung"); break;
        case 123 : printf("Go to Pinkloa"); break;
        case 84 : printf("Go to Wat Rai King"); break;
        case 81 : printf("Go to Oam Noi"); break;
        default : printf("Don't have data of BUS Number");
    }



}