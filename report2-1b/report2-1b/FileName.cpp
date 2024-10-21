#include<stdio.h>

int main(void)
{
	int num = 0;

	printf("홀수짝수 판별기 - 숫자를 입력:");
	scanf_s("%d", &num);

	//홀수인지 짝수인지의 판별은 2로 나누었을때 나머지의 여부로 결정한다

	switch (num%2)//2로 나눈후 나머지값으로 케이스 분류
	{
	case 0:
	{
		printf("입력한 수는 짝수입니다\n");//나머지가 0일 경우
		break;
	}
	case 1:
	{
		printf("입력한 수는 홀수입니다\n");//나머지가 1일 경우
		break;
	}
	
	}
	return 0;
	
}