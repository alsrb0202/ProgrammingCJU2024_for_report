#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void generate_random_numbers(int min, int max, double* sum, double* sum_of_squares);
double calculate_mean(double sum, int count);
double calculate_variance(double sum_of_squares, double mean, int count);
double calculate_stddev(double variance);

int main() {
    int min, max;
    double sum = 0.0, mean, variance = 0.0, stddev;
    double sum_of_squares = 0.0;

    // ���� ������ �ʱ�ȭ
    srand(time(NULL));

    // ����ڷκ��� ���� �Է� �ޱ�
    printf("������ �ּҰ��� �Է��ϼ���: ");
    scanf_s("%d", &min);
    printf("������ �ִ밪�� �Է��ϼ���: ");
    scanf_s("%d", &max);

    // ���� ����
    if (min >= max) {
        printf("�ּҰ��� �ִ밪���� �۾ƾ� �մϴ�.\n");
        return 1;
    }

    // 10���� ������ ���� ���� �� ����, ������ ���� ���
    generate_random_numbers(min, max, &sum, &sum_of_squares);

    // ��� ���
    mean = calculate_mean(sum, 10);

    // �л� ���
    variance = calculate_variance(sum_of_squares, mean, 10);

    // ǥ������ ���
    stddev = calculate_stddev(variance);

    // ��� ���
    printf("����: %.2f\n", sum);
    printf("���: %.2f\n", mean);
    printf("�л�: %.2f\n", variance);
    printf("ǥ������: %.2f\n", stddev);

    return 0;
}

// ���� ���� �� ����, ������ ���� ��� �Լ�
void generate_random_numbers(int min, int max, double* sum, double* sum_of_squares) {
    int number;
    for (int i = 0; i < 10; i++) {
        number = rand() % (max - min + 1) + min;
        printf("%d ", number); // ������ ���� ���

        *sum += number;              // ���� ���
        *sum_of_squares += number * number; // ������ ���� ���
    }
    printf("\n");
}

// ��� ��� �Լ�
double calculate_mean(double sum, int count) {
    return sum / (double)count;  // �Ǽ� ��� ���
}

// �л� ��� �Լ�
double calculate_variance(double sum_of_squares, double mean, int count) {
    return (sum_of_squares / (double)count) - (mean * mean);
}

// ǥ������ ��� �Լ�
double calculate_stddev(double variance) {
    return sqrt(variance);
}