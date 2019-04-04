#include <stdio.h>

void main(void)
{
	long long ivalue = 600851475143, icount ;  //변수 선언
	
	for ( icount = 2 ; icount < ivalue ; icount++) //icount가 2부터 ivalue미만일때까지 1씩 더하며 반복
	{
		while (ivalue % icount == 0) //icount가 나누어 떨어지는 동안 반복
		{
			ivalue = ivalue / icount; //나누어 떨어지면 ivalue를 icount로 나누어 저장
		}                             //작은 수가 또 나누어 떨어지는지 확인
		                              //마지막에 나누어 떨어진 수가 가장 큰 소인수
	}

	printf("%lld \n", ivalue); // ivalue의 값 출력

	return 0;
}