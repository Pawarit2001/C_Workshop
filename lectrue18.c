//Contron Statement : if-else-if 

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

    if (BUSNO == 3)
    {
        printf("Go to sanamlung");
    }
    else if (BUSNO == 123)
    {
        printf("Go to Pinkloa");
    }
    else if (BUSNO == 84)
    {
        printf("Go to Wat Rai King");
    }
    else if (BUSNO == 81)
    {
        printf("Go to Oam Noi");
    }
    else
    {
        printf("Don't have data of BUS Number");
    }
}

