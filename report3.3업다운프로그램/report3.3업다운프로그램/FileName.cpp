#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(int target) {
    int guess;
    int attempts = 10;

    printf("0부터 100 사이의 정수를 맞추세요. 기회가 %d번 남았습니다.\n", attempts);

    while (attempts > 0) {
        printf("정수를 입력하세요: ");
        scanf_s("%d", &guess);

        if (guess < 0 || guess > 100) {
            printf("0부터 100 사이의 정수를 입력하세요.\n");
            continue;
        }

        if (guess < target) {
            printf("UP 더 큰수입니다.\n");
        }
        else if (guess > target) {
            printf("DOWN 더 작은 수입니다.\n");
        }
        else {
            printf("축하합니다! 정답을 맞추셨습니다: %d\n", target);
            return;
        }

        attempts--;
        printf("기회가 %d번 남았습니다.\n", attempts);
    }

    printf("실패했습니다. 정답은 %d였습니다.\n", target);
}

int main() {
    srand(time(NULL)); // 난수 초기화
    int target = rand() % 101; // 0부터 100 사이의 난수 생성

    playGame(target);

    return 0;
}