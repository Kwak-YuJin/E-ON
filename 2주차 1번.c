#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int iCount1, iCount2, iValue; //���� ����

	printf("�߰��κ� �� ���� <Ȧ����> : ");
	scanf("%d", &iValue);        //�߰��κ� �� ���� �Է¹���
	for (iCount1 = 1; iCount1 <= (iValue + 1) / 2; iCount1++)    //���� �ﰢ�������
	{
		for (iCount2 = 1; iCount2 <= iValue - iCount1 - (iValue / 2); iCount2++)
		{
			printf(" ");
		}
		for (iCount2 = 1; iCount2 <= iCount1 * 2 - 1; iCount2++)
		{
			printf("*");
		}

		printf("\n");
	}
	for (iCount1 = (iValue + 1) / 2 - 1; iCount1 >= 1; iCount1--)   //�Ʒ� �ﰢ�������
	{
		for (iCount2 = 1; iCount2 <= iValue - iCount1 - (iValue / 2); iCount2++)
		{
			printf(" ");
		}
		for (iCount2 = 1; iCount2 <= iCount1 * 2 - 1; iCount2++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
