#include <stdio.h>

int main(void)
{
    int angle;
    int res;

    printf("�װ����� ���� �Է� : ");
    scanf_s("%d", &angle);


    res = (angle >= 0 && angle <= 180); //������ 0~180�� ���̸� �״�� ǥ��
    res = (angle > 180);
    res = (angle - 360);//������ 180�̻��̸� -360�� ���� ǥ��

    printf("�װ����� ������ %d��\n", res);

    return 0;
}