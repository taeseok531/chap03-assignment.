/* ���ϸ�: assign01.c
* ����: PA01. -�� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ�.
* �ۼ���: ���¼�
* �ۼ���: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
    int length;
    printf("�� ���� ����? ");
    scanf("%d", &length);

    int area = length * length;
    int perimeter = 4 * length;

    printf("���簢���� ����: %d\n", area);
    printf("���簢���� �ѷ�: %d\n", perimeter);
    return 0;
} 