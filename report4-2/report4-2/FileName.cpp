#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TOTAL_NUMBERS 100
#define SAMPLE_SIZE 10

// �迭�� ���� ���
double calculateSum(int* arr, int size) 
{
    double sum = 0.0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

// �迭�� �л� ���
double calculateVariance(int* arr, int size, double mean) 
{
    double variance = 0.0;
    for (int i = 0; i < size; i++) 
    {
        variance += pow(arr[i] - mean, 2);
    }
    return variance / size;
}

// �迭�� ǥ������ ���
double calculateStandardDeviation(double variance) 
{
    return sqrt(variance);
}

int main(void) 
{
    int numbers[TOTAL_NUMBERS];
    int sample[SAMPLE_SIZE];
    int minRange, maxRange;

    // ������ �� ����
    srand((unsigned int)time(NULL));
    for (int i = 0; i < TOTAL_NUMBERS; i++) 
    {
        numbers[i] = rand() % 100; // 0���� 99������ ���� ����
    }

    // ���� �Է�
    printf("������ ������ �ּҰ��� �ִ밪�� �Է��ϼ��� (��: 20 50): ");
    scanf_s("%d %d", &minRange, &maxRange);

    // �Է°� �˻�
    if (minRange < 0 || maxRange > 100 || minRange > maxRange) 
    {
        printf("����: �ּҰ��� 0 �̻�, �ִ밪�� 100 �����̾�� �ϸ�, �ּҰ��� �ִ밪���� �۾ƾ� �մϴ�.\n");
        return 1;
    }

    // ���� ���� ���� ����
    int count = 0;
    for (int i = 0; i < TOTAL_NUMBERS && count < SAMPLE_SIZE; i++) 
    {
        if (numbers[i] >= minRange && numbers[i] <= maxRange) 
        {
            sample[count++] = numbers[i];
        }
    }

    // ����� ���ڰ� 10�� �̸��� ���
    if (count < SAMPLE_SIZE) 
    {
        printf("���� ������ 10���� ���ڸ� ������ �� �����ϴ�. ����� ���� ����: %d\n", count);
        return 1;
    }

    // ����, �л�, ǥ������ ���
    double sum = calculateSum(sample, SAMPLE_SIZE);
    double mean = sum / SAMPLE_SIZE;
    double variance = calculateVariance(sample, SAMPLE_SIZE, mean);
    double stddev = calculateStandardDeviation(variance);

    // ��� ���
    printf("����� ����: ");
    for (int i = 0; i < SAMPLE_SIZE; i++) 
    {
        printf("%d ", sample[i]);
    }
    printf("\n����: %.2lf\n", sum);
    printf("�л�: %.2lf\n", variance);
    printf("ǥ������: %.2lf\n", stddev);

    return 0;
}