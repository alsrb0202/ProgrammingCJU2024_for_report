#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("a�� b������ ����ΰ��� �˾ƺ������� a�� �Է� : ");
    scanf_s("%d", &num1);

    printf("a�� b������ ����ΰ��� �˾ƺ������� b�� �Է� : ");
    scanf_s("%d", &num2);

    // �� ��° ������ 0�� ��� ������ ���� ����
    if (num2 == 0)
    {
        printf("�� ��° ������ 0�� �� �� �����ϴ�.\n");
    }
    else if (num1 % num2 == 0)//num1�� num2�� ������ �������� ���� ������� �Ǵ�
    {
        printf("%d��(��) %d�� ����Դϴ�.\n", num1, num2);
    }
    else
    {
        printf("%d��(��) %d�� ����� �ƴմϴ�.\n", num1, num2);
    }

    return 0;
}