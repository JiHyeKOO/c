/*선행처리기#define을 이용한 상수 정의*/

#include <stdio.h> //선행처리기 표준입출력함수 헤더파일 포함

/*매크로 함수 정의*/
#define IN "원의 반지름은 100입니다. \n" 
#define PI 3.145926535
#define AREA(X) (PI*(X)*(X)) // 매크로 함수 AREA 정의 > 매크로명(인수)(수식)
#define OUT printf("원의 면적을 구하고 프로그램을 종료합니다. \n")

void main(){
    printf("%s \n",IN); // IN
    printf("원의 면적은 %10.5f입니다. \n\n", AREA(100)); 
    // AREA : 10의 제곱 * PI
    OUT; // OUT
}