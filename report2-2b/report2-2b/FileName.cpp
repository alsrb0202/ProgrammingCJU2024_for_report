#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("a�� b�� ���� ����ΰ��� �˾ƺ��� ���� a�� �Է�: ");
    scanf_s("%d", &num1);

    printf("a�� b�� ���� ����ΰ��� �˾ƺ��� ���� b�� �Է�: ");
    scanf_s("%d", &num2);

    switch (num2) 
    {
    case 0:
    {
        printf("�� ��° ������ 0�� �� �� �����ϴ�.\n");// �� ��° ������ 0�� ��� ������ ���� ����
        break;
    }
    default:
        switch (num1 % num2)//num1�� num2�� ������ �������� ���� ������� �Ǵ�
        {
        case 0:
        {
            printf("%d��(��) %d�� ����Դϴ�.\n", num1, num2);
            break;
        }
        default:
        {
            printf("%d��(��) %d�� ����� �ƴմϴ�.\n", num1, num2);
            break;
        }
        break;
        }
    }

    return 0;
}