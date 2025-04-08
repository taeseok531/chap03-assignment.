/* 파일명: assign06.c
* 문제: PA06. 아파트의 면적을 제곱미터로 입력받아 몇 평인지 출력하는 프로그램을 작성. 1제곱미터는 0.3025에 해당. 프로그램을 작성할 때 이름 있는 상수를 이용해보자.
* 작성자: 오태석
* 작성일: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
    double area_m2;
    printf("아파트의 면적(제곱미터)? ");
    scanf("%lf", &area_m2);

    double area_pyeong = area_m2 * 0.3025;

    printf("%.2lf 제곱미터 = %.2lf 평\n", area_m2, area_pyeong);
    return 0;
}