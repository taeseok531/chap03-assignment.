/* ���ϸ�: assign10.c
* ����: PA10. ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ�.
* �ۼ���: ���¼�
* �ۼ���: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS		
#include <stdio.h>

int main() {
    double usd, rate, krw;

    printf("USD? ");
    scanf("%lf", &usd);

    printf("��/�޷� ȯ��? ");
    scanf("%lf", &rate);

    krw = usd * rate;

    printf("USD %.2lf = KRW %.2lf\n", usd, krw);

    return 0;
}