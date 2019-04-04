#include <stdio.h>

int main(void)
{
	int a = 1, b = 2, isum = 2; //변수 선언 및 초기값 설정

	for (int i = 3; i <= 4000000; i++) //i 선언, i가 3부터 400만이하일 때까지 1씩 증가하며 반복
	{
		if (a + b == i) // a + b의 값이 i값과 같다면
		{
			if (i % 2 == 0) //i가 2로 나누어 떨어지다면 
			{
				isum += i; //isum의 값에 i의 값을 더함
			}
			a = b; //a에 b의 값을 넣어줌
			b = i; //b에 i의 값을 넣어줌
		}
		
	}
	printf("피보나치 수열에서 짝수이면서 4백만 이하인 모든 항을 더한 값은 %d입니다.\n", isum); //isum의 값 출력

	return 0;
}