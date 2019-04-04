/*앞에서부터 읽을 때나 뒤에서부터 읽을 때나 모양이 같은 수를 대칭수(palindrome)라고 부릅니다.
두 자리 수를 곱해 만들 수 있는 대칭수 중 가장 큰 수는 9009 (= 91 × 99) 입니다.
세 자리 수를 곱해 만들 수 있는 가장 큰 대칭수는 얼마입니까?
*/

#include <stdio.h>
#include <string.h>


void main(void)
{
	int i, j, k, iResult = 0, len, test, iCount;
	char cValue[10];

	for (i = 1; i < 1000; i++) //i가 1부터 999까지 1씩 증가하며 반복
	{
		for (j = 1; j < 1000; j++) //j가 1부터 999까지 1씩 증가하며 반복
		{
			k = i * j;    // 세자리수 곱한 값을 k에 저장
			sprintf(cValue,"%d", k);    //k를 문자열로 변환하여 cValue에 저장
			len = strlen(cValue);     //문자열 크기를 len에 저장
			test = 1;                //test 의 값을 1로 지정

			for (iCount = 0; iCount < (len / 2); iCount++) //문자열의 길이의 1/2 수 만큼 반복
			{  
				if (cValue[iCount] != cValue[len - (iCount + 1)]) //문자열 배열의 위치를 이용하여 대칭인지 비교
				{ 
					test = 0;       //대칭이 아니면 test값을 0으로 바꿈
				}
			}
			if (test == 1) //test가 1이면 실행
			{       
				if (k > iResult) //k의 값이 결과값보다 크면
				{ 
					iResult = k;  //결과값에 k 저장
				}
			}
		}
	}

	printf("%d\n", iResult); //결과값 출력
}
