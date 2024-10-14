#include <stdio.h>

int main(void) {
    int a = 0;//계산하는수 1
    int b = 0;//계산하는수 2
    char giho;// 기호
    int dap = 0;// 답

    printf("계산할 문제를 입력 (예: 1 + 1) : ");
    scanf_s("%d %c %d", &a, &giho, sizeof(giho), & b);


    if (giho == '+')//만약 기호가 +일때
    {
        dap = a + b;
        printf("답 : %d\n", dap);
    }
    else if (giho == '-') //만약 기호가+가아니고-일때
    {
        dap = a - b;
        printf("답 : %d\n", dap);
    }
    else if (giho == '*') //만약 기호가 +가 아니고 -가 아니고 *일때
    {
        dap = a * b;
        printf("답 : %d\n", dap);
    }
    else if (giho == '/')//만약 기호가 +가 아니고 -가 아니고 *가 아니고 /일때
    {
        dap = a / b;
        printf("답 : %d\n", dap);
    }

    return 0;
}