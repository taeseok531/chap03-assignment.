/* 파일명: assign10.c
* 문제: PA10. 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성.
* 작성자: 오태석
* 작성일: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS		
#include <stdio.h>

int main() {
    double usd, rate, krw;

    printf("USD? ");
    scanf("%lf", &usd);

    printf("원/달러 환율? ");
    scanf("%lf", &rate);

    krw = usd * rate;

    printf("USD %.2lf = KRW %.2lf\n", usd, krw);

    return 0;
}