/* ���ϸ�: assign04.c
* ����: PA04. ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ�. ���� ũ��� N������ �Է¹ް�, �̵��� �Ÿ��� m ������ �Է¹޴´�.
* �ۼ���: ���¼�
* �ۼ���: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double force, distance;
    printf("��(N)? ");
    scanf("%lf", &force);
    printf("�̵� �Ÿ�(m)? ");
    scanf("%lf", &distance);

    double work = force * distance;

    printf("���� ��: %.2lf J\n", work);
    return 0;
}