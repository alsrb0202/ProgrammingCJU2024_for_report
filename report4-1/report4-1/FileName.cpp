#include <stdio.h>

void crossProduct(double v1[], double v2[], double result[]) //crossProduct 함수를 사용하여 외적을 계산
{
    result[0] = v1[1] * v2[2] - v1[2] * v2[1];
    result[1] = v1[2] * v2[0] - v1[0] * v2[2];
    result[2] = v1[0] * v2[1] - v1[1] * v2[0];
}

double dotProduct(double v1[], double v2[]) //dotProduct 함수를 사용하여 내적을 계산
{
    return v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
}

int main(void) 
{
    double vector1[3], vector2[3];
    double cross[3];
    double dot;

    //벡터 입력
    printf("첫 번째 벡터의 x, y, z 값을 입력: ");
    scanf_s("%lf %lf %lf", &vector1[0], &vector1[1], &vector1[2]);

    printf("두 번째 벡터의 x, y, z 값을 입력: ");
    scanf_s("%lf %lf %lf", &vector2[0], &vector2[1], &vector2[2]);

    // 외적 계산
    crossProduct(vector1, vector2, cross);
    printf("외적: (%.2lf, %.2lf, %.2lf)\n", cross[0], cross[1], cross[2]);

    // 내적 계산
    dot = dotProduct(vector1, vector2);
    printf("내적: %.2lf\n", dot);

    return 0;
}