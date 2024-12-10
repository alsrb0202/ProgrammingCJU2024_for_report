#include <stdio.h>

void crossProduct(double v1[], double v2[], double result[]) //crossProduct �Լ��� ����Ͽ� ������ ���
{
    result[0] = v1[1] * v2[2] - v1[2] * v2[1];
    result[1] = v1[2] * v2[0] - v1[0] * v2[2];
    result[2] = v1[0] * v2[1] - v1[1] * v2[0];
}

double dotProduct(double v1[], double v2[]) //dotProduct �Լ��� ����Ͽ� ������ ���
{
    return v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
}

int main(void) 
{
    double vector1[3], vector2[3];
    double cross[3];
    double dot;

    //���� �Է�
    printf("ù ��° ������ x, y, z ���� �Է�: ");
    scanf_s("%lf %lf %lf", &vector1[0], &vector1[1], &vector1[2]);

    printf("�� ��° ������ x, y, z ���� �Է�: ");
    scanf_s("%lf %lf %lf", &vector2[0], &vector2[1], &vector2[2]);

    // ���� ���
    crossProduct(vector1, vector2, cross);
    printf("����: (%.2lf, %.2lf, %.2lf)\n", cross[0], cross[1], cross[2]);

    // ���� ���
    dot = dotProduct(vector1, vector2);
    printf("����: %.2lf\n", dot);

    return 0;
}