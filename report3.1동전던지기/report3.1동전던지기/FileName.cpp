#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_FLIP 10000        // 동전 던지기 횟수
#define COIN_FWD_BWD 3        // 동전의 상태 범위 (앞면과 뒷면 포함)
#define COIN_FWD_STATUS 1     // 앞면 상태
#define COIN_BWD_STATUS 2     // 뒷면 상태

// 시간 정보를 사용하여 시드 번호 생성
void GenRandSeed()
{
    // 시간 시드를 사용하여 랜덤 수 생성
    srand((unsigned int)(time(NULL)));
}

// 랜덤 숫자 생성 함수
unsigned int GenRandFlipCoin(unsigned int nRange)
{
    unsigned int nRes = 0;
    while (1)
    {
        nRes = ((unsigned int)(rand()) % (nRange)); // 랜덤 숫자 생성
        if ((nRes == COIN_FWD_STATUS) || (nRes == COIN_BWD_STATUS))
            break; // 앞면 또는 뒷면 상태일 경우 루프 종료
    }
    return nRes; // 생성된 랜덤 상태 반환
}

// 메인 함수 루프
int main(void)
{
    // 시간 정보를 사용하여 시드 번호 생성
    GenRandSeed();

    // 변수 초기화
    int nNumSumFwdFlip = 0; // 앞면 던진 횟수
    int nNumSumBwdFlip = 0; // 뒷면 던진 횟수

    // 유한 루프
    for (unsigned int i = 0; i < NUM_FLIP; i++)
    {
        // 랜덤 숫자 생성, 동전 던지기, 1: 앞면, 2: 뒷면
        unsigned int nStatusFlipCoin = GenRandFlipCoin(COIN_FWD_BWD);

        // 합계 계산
        switch (nStatusFlipCoin)
        {
        case COIN_FWD_STATUS: // 앞면인 경우
            nNumSumFwdFlip++; // 앞면 카운트 증가
            break;
        case COIN_BWD_STATUS: // 뒷면인 경우
            nNumSumBwdFlip++; // 뒷면 카운트 증가
            break;
        default: // 오류 처리
            printf("메인 루프 또는 서브 함수에서 확인하십시오...\n");
            break;
        }
    }

    // 결과 출력
    printf("합계 결과:(앞면, 뒷면):(%d,%d)\n", nNumSumFwdFlip, nNumSumBwdFlip);
    printf("확률:(앞면, 뒷면):(%.4lf,%.4lf)\n", (double)(nNumSumFwdFlip) / (NUM_FLIP), (double)(nNumSumBwdFlip) / (NUM_FLIP));
    return 0;
}