//input statement
//gets() -> stdio.h รับค่าข้อความ

#include <stdio.h>
void main (){
    char nickname[100];

    printf("Input your nickname : ");
    scanf("%s", &nickname);
    gets(nickname)

}