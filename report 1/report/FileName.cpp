#include <stdio.h>

int main(void)
{
    int angle;
    int res;

    printf("항공기의 각도 입력 : ");
    scanf_s("%d", &angle);


    res = (angle >= 0 && angle <= 180); //각도가 0~180도 사이면 그대로 표출
    res = (angle > 180);
    res = (angle - 360);//각도가 180이상이면 -360후 각도 표출

    printf("항공기의 각도는 %d도\n", res);

    return 0;
}