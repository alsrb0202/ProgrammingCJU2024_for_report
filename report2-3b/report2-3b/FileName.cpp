#include <stdio.h>

int main(void)
{
    float score;//������ �Ǽ��̹Ƿ� �ڷ����� float��

    printf("������ �Է� 100.0 ~ 0.0 : ");
    scanf_s("%f", &score);

    int grade = score / 10; // switch-case������ ������ �ʿ��ϹǷ� 10���� ������ ������ ��ȯ

    switch (grade)
    {
    case 10: // 100.0��
    {
        printf("����: A\n");
        break;
    }
    case 9:  // 90.0-99.9��
    {
        printf("����: A\n");
        break;
    }
    case 8:  // 80.0-89.9��
    {
        printf("����: B\n");
        break;
    }
    case 7:  // 70.0-79.9��
    {
        printf("����: C\n");
        break;
    }
    case 6:  // 60.0-69.9��
    {
        printf("����: D\n");
        break;
    }
    default: // 59.9����
        printf("����: F\n");
        break;
    }

    return 0;
}