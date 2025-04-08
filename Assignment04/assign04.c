/* 파일명: assign04.c
* 문제: PA04. 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성. 힘의 크기는 N단위로 입력받고, 이동한 거리를 m 단위로 입력받는다.
* 작성자: 오태석
* 작성일: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double force, distance;
    printf("힘(N)? ");
    scanf("%lf", &force);
    printf("이동 거리(m)? ");
    scanf("%lf", &distance);

    double work = force * distance;

    printf("일의 양: %.2lf J\n", work);
    return 0;
}