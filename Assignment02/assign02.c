/* ���ϸ�: assign02.c
* ����: PA02. ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ�.
* �ۼ���: ���¼�
* �ۼ���: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int width, height;
    printf("������ ����? ");
    scanf("%d", &width);

    printf("������ ����? ");
    scanf("%d", &height);

    int area = width * height;
    int perimeter = 2 * (width + height);

    printf("���簢���� ����: %d\n", area);
    printf("���簢���� �ѷ�: %d\n", perimeter);

    return 0;
}

