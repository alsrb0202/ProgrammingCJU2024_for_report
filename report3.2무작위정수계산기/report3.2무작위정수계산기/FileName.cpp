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

    // 난수 생성기 초기화
    srand(time(NULL));

    // 사용자로부터 범위 입력 받기
    printf("정수의 최소값을 입력하세요: ");
    scanf_s("%d", &min);
    printf("정수의 최대값을 입력하세요: ");
    scanf_s("%d", &max);

    // 범위 검증
    if (min >= max) {
        printf("최소값은 최대값보다 작아야 합니다.\n");
        return 1;
    }

    // 10개의 무작위 정수 생성 및 총합, 제곱의 총합 계산
    generate_random_numbers(min, max, &sum, &sum_of_squares);

    // 평균 계산
    mean = calculate_mean(sum, 10);

    // 분산 계산
    variance = calculate_variance(sum_of_squares, mean, 10);

    // 표준편차 계산
    stddev = calculate_stddev(variance);

    // 결과 출력
    printf("총합: %.2f\n", sum);
    printf("평균: %.2f\n", mean);
    printf("분산: %.2f\n", variance);
    printf("표준편차: %.2f\n", stddev);

    return 0;
}

// 난수 생성 및 총합, 제곱의 총합 계산 함수
void generate_random_numbers(int min, int max, double* sum, double* sum_of_squares) {
    int number;
    for (int i = 0; i < 10; i++) {
        number = rand() % (max - min + 1) + min;
        printf("%d ", number); // 생성된 정수 출력

        *sum += number;              // 총합 계산
        *sum_of_squares += number * number; // 제곱의 총합 계산
    }
    printf("\n");
}

// 평균 계산 함수
double calculate_mean(double sum, int count) {
    return sum / (double)count;  // 실수 평균 계산
}

// 분산 계산 함수
double calculate_variance(double sum_of_squares, double mean, int count) {
    return (sum_of_squares / (double)count) - (mean * mean);
}

// 표준편차 계산 함수
double calculate_stddev(double variance) {
    return sqrt(variance);
}