/* 파일명: assign03.c
* 문제: PA03. 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성. 질량은 kg 단위, 높이는 m 단위로 입력받는다.
* 작성자: 오태석
* 작성일: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
    double mass, height;
    printf("질량(kg)? ");
    scanf("%lf", &mass);
    printf("높이(m)? ");
    scanf("%lf", &height);

    double energy = mass * 9.8 * height;

    printf("위치에너지: %.6lf J\n", energy);
    return 0;
}