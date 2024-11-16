#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_FLIP 10000        // ���� ������ Ƚ��
#define COIN_FWD_BWD 3        // ������ ���� ���� (�ո�� �޸� ����)
#define COIN_FWD_STATUS 1     // �ո� ����
#define COIN_BWD_STATUS 2     // �޸� ����

// �ð� ������ ����Ͽ� �õ� ��ȣ ����
void GenRandSeed()
{
    // �ð� �õ带 ����Ͽ� ���� �� ����
    srand((unsigned int)(time(NULL)));
}

// ���� ���� ���� �Լ�
unsigned int GenRandFlipCoin(unsigned int nRange)
{
    unsigned int nRes = 0;
    while (1)
    {
        nRes = ((unsigned int)(rand()) % (nRange)); // ���� ���� ����
        if ((nRes == COIN_FWD_STATUS) || (nRes == COIN_BWD_STATUS))
            break; // �ո� �Ǵ� �޸� ������ ��� ���� ����
    }
    return nRes; // ������ ���� ���� ��ȯ
}

// ���� �Լ� ����
int main(void)
{
    // �ð� ������ ����Ͽ� �õ� ��ȣ ����
    GenRandSeed();

    // ���� �ʱ�ȭ
    int nNumSumFwdFlip = 0; // �ո� ���� Ƚ��
    int nNumSumBwdFlip = 0; // �޸� ���� Ƚ��

    // ���� ����
    for (unsigned int i = 0; i < NUM_FLIP; i++)
    {
        // ���� ���� ����, ���� ������, 1: �ո�, 2: �޸�
        unsigned int nStatusFlipCoin = GenRandFlipCoin(COIN_FWD_BWD);

        // �հ� ���
        switch (nStatusFlipCoin)
        {
        case COIN_FWD_STATUS: // �ո��� ���
            nNumSumFwdFlip++; // �ո� ī��Ʈ ����
            break;
        case COIN_BWD_STATUS: // �޸��� ���
            nNumSumBwdFlip++; // �޸� ī��Ʈ ����
            break;
        default: // ���� ó��
            printf("���� ���� �Ǵ� ���� �Լ����� Ȯ���Ͻʽÿ�...\n");
            break;
        }
    }

    // ��� ���
    printf("�հ� ���:(�ո�, �޸�):(%d,%d)\n", nNumSumFwdFlip, nNumSumBwdFlip);
    printf("Ȯ��:(�ո�, �޸�):(%.4lf,%.4lf)\n", (double)(nNumSumFwdFlip) / (NUM_FLIP), (double)(nNumSumBwdFlip) / (NUM_FLIP));
    return 0;
}