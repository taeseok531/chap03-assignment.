/* 파일명: assign07.c
* 문제: PA07. 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을 작성. 실수값을 입력받을 때는 12.34처럼 소수 표기 방법이나 1.234e2처럼 지수 표기 방법을 둘 다 사용할 수 있게 하고 제곱과 세제곱을 출력할 때는 지수 표기 방법으로 출력하시오.
* 작성자: 오태석
* 작성일: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double num, square, cube;

    printf("실수? ");
    scanf("%lf", &num);

    square = num * num;
    cube = num * num * num;

    printf("제곱 : %e\n", square);
    printf("세제곱 : %e\n", cube);

    return 0;
}