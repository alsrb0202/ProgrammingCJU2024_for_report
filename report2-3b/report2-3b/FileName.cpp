#include <stdio.h>

int main(void)
{
    float score;//변수가 실수이므로 자료형을 float로

    printf("점수를 입력 100.0 ~ 0.0 : ");
    scanf_s("%f", &score);

    int grade = score / 10; // switch-case구문은 정수가 필요하므로 10으로 나누어 정수로 변환

    switch (grade)
    {
    case 10: // 100.0점
    {
        printf("학점: A\n");
        break;
    }
    case 9:  // 90.0-99.9점
    {
        printf("학점: A\n");
        break;
    }
    case 8:  // 80.0-89.9점
    {
        printf("학점: B\n");
        break;
    }
    case 7:  // 70.0-79.9점
    {
        printf("학점: C\n");
        break;
    }
    case 6:  // 60.0-69.9점
    {
        printf("학점: D\n");
        break;
    }
    default: // 59.9이하
        printf("학점: F\n");
        break;
    }

    return 0;
}