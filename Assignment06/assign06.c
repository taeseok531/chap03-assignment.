/* ���ϸ�: assign06.c
* ����: PA06. ����Ʈ�� ������ �������ͷ� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ�. 1�������ʹ� 0.3025�� �ش�. ���α׷��� �ۼ��� �� �̸� �ִ� ����� �̿��غ���.
* �ۼ���: ���¼�
* �ۼ���: 2025.04.08
*/
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
    double area_m2;
    printf("����Ʈ�� ����(��������)? ");
    scanf("%lf", &area_m2);

    double area_pyeong = area_m2 * 0.3025;

    printf("%.2lf �������� = %.2lf ��\n", area_m2, area_pyeong);
    return 0;
}