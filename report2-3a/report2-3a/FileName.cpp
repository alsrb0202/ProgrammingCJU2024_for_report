#include <stdio.h>

int main(void)
{
    float score;//변수가 실수이므로 자료형을 float로

    printf("점수를 입력 100.0 ~ 0.0 : ");
    scanf_s("%f", &score);

    if (100.0 >= score && score >= 90.0)//점수의 범위별로 등급을 분류
    {
        printf("학점: A\n");
    }
    else if (89.9>= score && score >= 80.0)
    {
        printf("학점: B\n");
    }
    else if (79.9 >= score && score >= 70.0)
    {
        printf("학점: C\n");
    }
    else if (69.9 >= score && score >= 60.0)
    {
        printf("학점: D\n");
    }
    else
    {
        printf("학점: F\n");
    }

    return 0;
}