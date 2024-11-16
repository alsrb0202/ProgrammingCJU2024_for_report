#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(int target) {
    int guess;
    int attempts = 10;

    printf("0���� 100 ������ ������ ���߼���. ��ȸ�� %d�� ���ҽ��ϴ�.\n", attempts);

    while (attempts > 0) {
        printf("������ �Է��ϼ���: ");
        scanf_s("%d", &guess);

        if (guess < 0 || guess > 100) {
            printf("0���� 100 ������ ������ �Է��ϼ���.\n");
            continue;
        }

        if (guess < target) {
            printf("UP �� ū���Դϴ�.\n");
        }
        else if (guess > target) {
            printf("DOWN �� ���� ���Դϴ�.\n");
        }
        else {
            printf("�����մϴ�! ������ ���߼̽��ϴ�: %d\n", target);
            return;
        }

        attempts--;
        printf("��ȸ�� %d�� ���ҽ��ϴ�.\n", attempts);
    }

    printf("�����߽��ϴ�. ������ %d�����ϴ�.\n", target);
}

int main() {
    srand(time(NULL)); // ���� �ʱ�ȭ
    int target = rand() % 101; // 0���� 100 ������ ���� ����

    playGame(target);

    return 0;
}