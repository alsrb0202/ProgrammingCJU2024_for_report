#include <stdio.h>

int main(void) {
    int a = 0;//����ϴ¼� 1
    int b = 0;//����ϴ¼� 2
    char giho;// ��ȣ
    int dap = 0;// ��

    printf("����� ������ �Է� (��: 1 + 1) : ");
    scanf_s("%d %c %d", &a, &giho, sizeof(giho), & b);


    if (giho == '+')//���� ��ȣ�� +�϶�
    {
        dap = a + b;
        printf("�� : %d\n", dap);
    }
    else if (giho == '-') //���� ��ȣ��+���ƴϰ�-�϶�
    {
        dap = a - b;
        printf("�� : %d\n", dap);
    }
    else if (giho == '*') //���� ��ȣ�� +�� �ƴϰ� -�� �ƴϰ� *�϶�
    {
        dap = a * b;
        printf("�� : %d\n", dap);
    }
    else if (giho == '/')//���� ��ȣ�� +�� �ƴϰ� -�� �ƴϰ� *�� �ƴϰ� /�϶�
    {
        dap = a / b;
        printf("�� : %d\n", dap);
    }

    return 0;
}