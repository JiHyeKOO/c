/* 이 프로그램은 두 수를 키보드로 입력받아 곱의 결과를 출력하는 프로그램이다.*/
/* 도입부 */

#include <stdio.h> //printf와 scanf를 사용하기 위한 헤더파일 포함
#pragma warning (disable:4996) //권장하지 않는 함수사용에 대한 경고메세지 무시

int a, b, c; //정수를 저장하는 변수선언
int product(int x, int y); //사용자함수 원형

void main() { 
    printf("Enter a number between 1 and 100 : "); /*첫번째 수 입력*/
    scanf("%d", &a);

    printf("Enter another number between 1 and 100 : "); /*두번째 수 입력*/
    scanf("%d", &b);

    c = product(a, b); /*사용자 함수 호출:두 수를 곱하고 결과c출력*/
    printf("%d * %d = %d \n", a, b, c);
    
}

int product(int x, int y) { /*두 수의 곱을 계산하여 돌려주는 사용자 함수*/
    return (x*y);
}
