#include<stdio.h>

int main(void)
{
	int num = 0;

	printf("Ȧ��¦�� �Ǻ��� - ���ڸ� �Է�:");
	scanf_s("%d", &num);

	//Ȧ������ ¦�������� �Ǻ��� 2�� ���������� �������� ���η� �����Ѵ�

	switch (num%2)//2�� ������ ������������ ���̽� �з�
	{
	case 0:
	{
		printf("�Է��� ���� ¦���Դϴ�\n");//�������� 0�� ���
		break;
	}
	case 1:
	{
		printf("�Է��� ���� Ȧ���Դϴ�\n");//�������� 1�� ���
		break;
	}
	
	}
	return 0;
	
}