#include <stdio.h>

int main(void)
{
    int angle;
    int res;

    printf("�װ����� ���� �Է� : ");
    scanf_s("%d", &angle);

    angle = (angle >= 0) * (angle - (angle / 360) * 360) + (angle < 0) * (angle + 360);//������ 0������ 360�� ������ ��ȯ�ϴ� �����Դϴ�

    res = (angle >= 0 && angle <= 180) * angle + (angle > 180) * (angle - 360);//������ 180���� �Ѿ���� ������������ �ٲپ��ִ� �����Դϴ�

    printf("�װ����� ������ %d��\n", res);

    return 0;
}