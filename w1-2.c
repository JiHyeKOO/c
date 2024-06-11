/*화씨 섭씨 변환 프로그램*/

#include <stdio.h>

#define FZ_PT 32.0
#define S_FACTOR (5.0/9.0)

void main(){
    float fa, ce;
    printf("Enter Fahrenheit temperature");
    scanf("%f", &fa);
    ce=(fa-FZ_PT)*S_FACTOR;
    printf("Celsius equivalent : %.1f\n",ce);
}