#include <stdio.h>
#pragma warning(disable:4996)
#define SNUM "202435-160164"
#define SDEP "데이터통계학과"
#define SNM "구지혜"

int main(void){

    int Koo_Jihye;
    
    printf("5부터 10 사이의 짝수 숫자를 입력하시오 \n(0을 입력시 프로그램 종료)\n\n");

    while(Koo_Jihye != 0){

        printf("숫자입력 : ");
        scanf("%d",&Koo_Jihye);

        if (Koo_Jihye % 2 == 0 && Koo_Jihye >=5 && Koo_Jihye <=10)
        {
            printf("----------------------------------- \n");
            printf("입력한 숫자 %d 은 5부터 10사이의 짝수 입니다. \n",Koo_Jihye);
            printf("----------------------------------- \n");
        }
        else if(Koo_Jihye % 2 == 0 && Koo_Jihye != 0 && (Koo_Jihye <=5 || Koo_Jihye >= 10))
        {
            printf("----------------------------------- \n");
            printf("☆ 5부터 10사이의 짝수를 입력하시오. 학과: %s \n",SDEP);
            printf("----------------------------------- \n");
        }
        else if(Koo_Jihye % 2 != 0 )
        {
            printf("----------------------------------- \n");
            printf("★ 짝수를 입력하시오. 학번: %s \n",SNUM);
            printf("----------------------------------- \n");
        }
    }
    printf("----------------------------------- \n");
    printf("♥ 프로그램을 종료합니다. 이름: %s \n",SNM);
    printf("----------------------------------- \n");    

}