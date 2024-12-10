#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TOTAL_NUMBERS 100
#define SAMPLE_SIZE 10

// 배열의 총합 계산
double calculateSum(int* arr, int size) 
{
    double sum = 0.0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

// 배열의 분산 계산
double calculateVariance(int* arr, int size, double mean) 
{
    double variance = 0.0;
    for (int i = 0; i < size; i++) 
    {
        variance += pow(arr[i] - mean, 2);
    }
    return variance / size;
}

// 배열의 표준편차 계산
double calculateStandardDeviation(double variance) 
{
    return sqrt(variance);
}

int main(void) 
{
    int numbers[TOTAL_NUMBERS];
    int sample[SAMPLE_SIZE];
    int minRange, maxRange;

    // 무작위 수 생성
    srand((unsigned int)time(NULL));
    for (int i = 0; i < TOTAL_NUMBERS; i++) 
    {
        numbers[i] = rand() % 100; // 0부터 99까지의 정수 생성
    }

    // 범위 입력
    printf("추출할 범위의 최소값과 최대값을 입력하세요 (예: 20 50): ");
    scanf_s("%d %d", &minRange, &maxRange);

    // 입력값 검사
    if (minRange < 0 || maxRange > 100 || minRange > maxRange) 
    {
        printf("오류: 최소값은 0 이상, 최대값은 100 이하이어야 하며, 최소값은 최대값보다 작아야 합니다.\n");
        return 1;
    }

    // 범위 내의 숫자 추출
    int count = 0;
    for (int i = 0; i < TOTAL_NUMBERS && count < SAMPLE_SIZE; i++) 
    {
        if (numbers[i] >= minRange && numbers[i] <= maxRange) 
        {
            sample[count++] = numbers[i];
        }
    }

    // 추출된 숫자가 10개 미만일 경우
    if (count < SAMPLE_SIZE) 
    {
        printf("범위 내에서 10개의 숫자를 추출할 수 없습니다. 추출된 숫자 개수: %d\n", count);
        return 1;
    }

    // 총합, 분산, 표준편차 계산
    double sum = calculateSum(sample, SAMPLE_SIZE);
    double mean = sum / SAMPLE_SIZE;
    double variance = calculateVariance(sample, SAMPLE_SIZE, mean);
    double stddev = calculateStandardDeviation(variance);

    // 결과 출력
    printf("추출된 숫자: ");
    for (int i = 0; i < SAMPLE_SIZE; i++) 
    {
        printf("%d ", sample[i]);
    }
    printf("\n총합: %.2lf\n", sum);
    printf("분산: %.2lf\n", variance);
    printf("표준편차: %.2lf\n", stddev);

    return 0;
}