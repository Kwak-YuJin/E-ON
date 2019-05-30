#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int iCount1, iCount2, iValue; //변수 선언

	printf("중간부분 별 개수 <홀수만> : ");
	scanf("%d", &iValue);        //중간부분 별 개수 입력받음
	for (iCount1 = 1; iCount1 <= (iValue + 1) / 2; iCount1++)    //위의 삼각형만들기
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
	for (iCount1 = (iValue + 1) / 2 - 1; iCount1 >= 1; iCount1--)   //아래 삼각형만들기
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
