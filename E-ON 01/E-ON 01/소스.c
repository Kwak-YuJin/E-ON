#include <stdio.h>

int main(void)
{
	int ivalue, isum = 0; //변수 선언 및 초기화

	for (ivalue = 1; ivalue < 1000; ivalue++) //ivalue가 1부터 1000미만일때까지 1씩 증가하며 반복
	{
		if (ivalue % 3 == 0 || ivalue % 5 == 0) //ivalue가 3또는 5로 나누어 떨어진다면
		{
			isum += ivalue; //isum에 ivalue값 더함
		}
	}

	printf("1000보다 작은 자연수 중 3 또는 5의 배수의 합은 %d입니다. \n", isum); //isum값 출력

	return 0;
}