/* ���ϸ�: assign07.c
* ����: PA07. �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷��� �ۼ�. �Ǽ����� �Է¹��� ���� 12.34ó�� �Ҽ� ǥ�� ����̳� 1.234e2ó�� ���� ǥ�� ����� �� �� ����� �� �ְ� �ϰ� ������ �������� ����� ���� ���� ǥ�� ������� ����Ͻÿ�.
* �ۼ���: ���¼�
* �ۼ���: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double num, square, cube;

    printf("�Ǽ�? ");
    scanf("%lf", &num);

    square = num * num;
    cube = num * num * num;

    printf("���� : %e\n", square);
    printf("������ : %e\n", cube);

    return 0;
}