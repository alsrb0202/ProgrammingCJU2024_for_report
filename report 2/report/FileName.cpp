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
    
    //���ᰡ��
    int hot6_price = 1200;
    int pocari_price = 1000;
    int letsbe_price = 800;

    printf("1. �ֽĽ� - 1200��\n");
    printf("2. ��ī�� - 1000��\n");
    printf("3. ������ - 800��\n");
    printf("���� �Է��ϼ���: ");
    scanf_s("%d", &money);

    //���ἱ��
    printf("������ ������ ��ȣ�� �����ϼ���: ");
    scanf_s("%d", &choice);

    // ������ ������ ���� Ȯ��
    price = (choice == 1) ? hot6_price : (choice == 2) ? pocari_price :
        (choice == 3) ? letsbe_price : -1;//�޴��� 123�� ���������� -1����

    // �ܾ� Ȯ�� �� �ܵ� ���
    (price != -1 && money >= price) ?
        (change = money - price,
            coin1000 = change / 1000, change %= 1000,
            coin500 = change / 500, change %= 500,
            coin100 = change / 100,
            printf("������ ����� �ܵ��� ����������\n", choice, money - price),
            printf("�ܵ��� ������ �����ϴ�:\n"),
            printf("1000�� ����: %d��\n", coin1000),
            printf("500�� ����: %d��\n", coin500),
            printf("100�� ����: %d��\n", coin100)) :
        (price == -1 ? printf("�߸��� �����Դϴ�.\n") : printf("�ܾ��� �����մϴ�.\n"));//�޴��� �߸������ϰų� ���̸��ڸ���

    return 0;
}