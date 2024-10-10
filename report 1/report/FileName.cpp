#include <stdio.h>

int main(void)
{
    int angle;
    int res;

    printf("항공기의 각도 입력 : ");
    scanf_s("%d", &angle);

    angle = (angle >= 0) * (angle - (angle / 360) * 360) + (angle < 0) * (angle + 360);//각도를 0도에서 360로 범위를 변환하는 수식입니다

    res = (angle >= 0 && angle <= 180) * angle + (angle > 180) * (angle - 360);//각도가 180도를 넘어갔을때 음수영역으로 바꾸어주는 수식입니다

    printf("항공기의 각도는 %d도\n", res);

    return 0;
}