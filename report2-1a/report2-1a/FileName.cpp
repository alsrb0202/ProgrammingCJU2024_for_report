#include<stdio.h>

int main(void)
{
	int num = 0;

	printf("홀수짝수 판별기 - 숫자를 입력:");
	scanf_s("%d", &num);

	//홀수인지 짝수인지의 판별은 2로 나누었을때 나머지의 여부로 결정한다

	if (num % 2 == 0)//2로 나누었을때 나머지가 0이라면
	{
		printf("입력한 수는 짝수입니다");
	}

	else//이외에 다른 수들은
	{
		printf("입력한 수는 홀수입니다");
	}

	return 0;


}