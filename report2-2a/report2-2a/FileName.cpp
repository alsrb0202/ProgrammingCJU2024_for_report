#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("a는 b에대해 배수인가를 알아보기위한 a를 입력 : ");
    scanf_s("%d", &num1);

    printf("a는 b에대해 배수인가를 알아보기위한 b를 입력 : ");
    scanf_s("%d", &num2);

    // 두 번째 정수가 0일 경우 나누기 오류 방지
    if (num2 == 0)
    {
        printf("두 번째 정수는 0이 될 수 없습니다.\n");
    }
    else if (num1 % num2 == 0)//num1을 num2로 나누고 나머지를 통해 배수여부 판단
    {
        printf("%d은(는) %d의 배수입니다.\n", num1, num2);
    }
    else
    {
        printf("%d은(는) %d의 배수가 아닙니다.\n", num1, num2);
    }

    return 0;
}