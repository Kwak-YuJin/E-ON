#include <stdio.h>

void main(void)
{
	int ivalue = 1, icount, test;    //변수 선언 및 초기값 설정

	while (1)         //어떤 수인지 모르므로 ivalue 1씩 증가하며 무한반복
	{
		test = 1;   //test의 값을1로 지정
		
		for (icount = 1; icount <= 20; icount++) //icount가 1~20까지 1씩 증가하며 반복
		{
			if (ivalue % icount != 0) // 1~20중 나누어떨어지지 않는 수가 있다면
			{
				test = 0;   //test의 값을 0으로 바꿈
				break;  //반복문 종료
			}
		}

		if (test == 1)  //test의 값이 1이면 반복문 종료
		{
			break;
		}

		ivalue++; 

	}

		printf("1 ~20 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 %d입니다. \n", ivalue); //결과값 출력
	
}
