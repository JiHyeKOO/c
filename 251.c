/* 예제 7-1 다음은 구조체에 배열을 사용한 프로그램이다. */
#include <stdio.h>
#pragma warning(disable:4996)
struct entry{
    char fname[20];
    char lname[20];
    char phone[10];
};
struct entry list[4];
int i;

void main(){
    for (i=0; i < 4; i++){
        printf("Enter first name : ");
        scanf("%s",list[i].fname);
        printf("Enter last name : ");
        scanf("%s",list[i].lname);
        printf("Enter phone number : ");
        scanf("%s",list[i].phone);
        printf("\n");
    }
    printf("\n");
    for (i=0;i < 4; i++){
        printf("Name : %s %s", list[i].fname, list[i].lname);
        printf("\t\tPhone : %s \n", list[i].phone);
    }
}