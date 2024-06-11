/*이 프로그램은 두 수의 곱을 계산하는 프로그램이다. */
#include <stdio.h>
int product (int x, int y);  //도입부

void main(){
    int a, b, c;
    printf("Enter a number between 1 and 100");
    scanf("%d", &a); //정수형 입력 변수a의 주소
    printf("Enter another number between 1 and 100");
    scanf("%d", &a); 
    c=product(a, b); 
    printf("%d * %d = %d\n", a, b, c);
}  //main()함수

int product (int x, int y){
    return(x*y);
} //호출함수