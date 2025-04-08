/* 파일명: assign02.c
* 문제: PA02. 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성.
* 작성자: 오태석
* 작성일: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int width, height;
    printf("가로의 길이? ");
    scanf("%d", &width);

    printf("세로의 길이? ");
    scanf("%d", &height);

    int area = width * height;
    int perimeter = 2 * (width + height);

    printf("직사각형의 넓이: %d\n", area);
    printf("직사각형의 둘레: %d\n", perimeter);

    return 0;
}

