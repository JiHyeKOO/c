#include <stdio.h>
#pragma warning(disable:4996)

void main(){
    char ch;
    int Nchar = 0, Nnum = 0, Nblank = 0;
    printf("문자열을 입력하시오 : ");

    /*입력받은 문자열을 ch에 저장하고 '\n'이 아니라면 if문 실행*/
    while((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9') //ch가 0~9라면 Nnum변수 1추가
            ++Nnum;
        else if (ch == ' ' || ch == 't') //ch가 공백이나 탭이라면 Nblank 1추가
            ++Nblank;
        else
            ++Nchar; //그 외에는 Nchar에 1추가
    } 
    printf("\n ***** 결과 ***** \n");
    printf("숫자 = %d \n", Nnum);
    printf("공백 = %d \n", Nblank);
    printf("문자 = %d \n", Nchar);
    
}