/* ���ϸ�: assign03.c
* ����: PA03. ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ�. ������ kg ����, ���̴� m ������ �Է¹޴´�.
* �ۼ���: ���¼�
* �ۼ���: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
    double mass, height;
    printf("����(kg)? ");
    scanf("%lf", &mass);
    printf("����(m)? ");
    scanf("%lf", &height);

    double energy = mass * 9.8 * height;

    printf("��ġ������: %.6lf J\n", energy);
    return 0;
}