#include <stdio.h>

int main(void) 
{
    int money;
    int choice;
    int price;
    int change;
    int coin1000;
    int coin500;
    int coin100;
    
    //음료가격
    int hot6_price = 1200;
    int pocari_price = 1000;
    int letsbe_price = 800;

    printf("1. 핫식스 - 1200원\n");
    printf("2. 포카리 - 1000원\n");
    printf("3. 레쓰비 - 800원\n");
    printf("돈을 입력하세요: ");
    scanf_s("%d", &money);

    //음료선택
    printf("구매할 음료의 번호를 선택하세요: ");
    scanf_s("%d", &choice);

    // 선택한 음료의 가격 확인
    price = (choice == 1) ? hot6_price : (choice == 2) ? pocari_price :
        (choice == 3) ? letsbe_price : -1;//메뉴를 123중 고르지않으면 -1산출

    // 잔액 확인 및 잔돈 계산
    (price != -1 && money >= price) ?
        (change = money - price,
            coin1000 = change / 1000, change %= 1000,
            coin500 = change / 500, change %= 500,
            coin100 = change / 100,
            printf("선택한 음료와 잔돈을 가져가세요\n", choice, money - price),
            printf("잔돈은 다음과 같습니다:\n"),
            printf("1000원 동전: %d개\n", coin1000),
            printf("500원 동전: %d개\n", coin500),
            printf("100원 동전: %d개\n", coin100)) :
        (price == -1 ? printf("잘못된 선택입니다.\n") : printf("잔액이 부족합니다.\n"));//메뉴를 잘못선택하거나 돈이모자를때

    return 0;
}