#include <stdio.h>

int main(void)
{
    float score;//������ �Ǽ��̹Ƿ� �ڷ����� float��

    printf("������ �Է� 100.0 ~ 0.0 : ");
    scanf_s("%f", &score);

    if (100.0 >= score && score >= 90.0)//������ �������� ����� �з�
    {
        printf("����: A\n");
    }
    else if (89.9>= score && score >= 80.0)
    {
        printf("����: B\n");
    }
    else if (79.9 >= score && score >= 70.0)
    {
        printf("����: C\n");
    }
    else if (69.9 >= score && score >= 60.0)
    {
        printf("����: D\n");
    }
    else
    {
        printf("����: F\n");
    }

    return 0;
}