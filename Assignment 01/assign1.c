/* 파일명: assign01.c
* 문제: PA01. -한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성.
* 작성자: 오태석
* 작성일: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
    int length;
    printf("한 번의 길이? ");
    scanf("%d", &length);

    int area = length * length;
    int perimeter = 4 * length;

    printf("정사각형의 넓이: %d\n", area);
    printf("정사각형의 둘레: %d\n", perimeter);
    return 0;
} 