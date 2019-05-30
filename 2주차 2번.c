#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main()
{
	printf("========== 메뉴 ==========\n");
	printf("PUSH : 1 \n");
	printf("POP : 2 \n");
	printf("SHOW : 3 \n");
	printf("종료하려면 1,2,3 이외의 수 입력 \n");

	int ivalue = 1, value, stack[10] = { 0 }, index = 0;	//배열 및 변수 선언


	while (ivalue == 1 || ivalue == 2 || ivalue == 3) {		//1,2,3이 입력되는 동안 실행


		printf("메뉴를 선택하세요 : ");
		scanf("%d", &ivalue);


		switch (ivalue)
		{
		case 1:
			printf("수 입력 : ");
			scanf("%d", &value);
			stack[index] = value;		//현재 인덱스 값에 수를 입력 후 다음 인덱스로 위치 이동 
			index++;
			break;
		case 2:
			index--;
			stack[index] = 0;			//직전 인덱스 위치로 이동 후 직전의 값을 0으로 함 
			break;
		case 3:
			for (int count = 0; count <= 9; count++)   //값이 0이 아닌값을 출력
			{	
				if (stack[count] != 0)
					printf("%d ", stack[count]);

			}
			printf("\n");
			break;
		default:
			printf("========= 스택 프로그램을 종료합니다 ==========\n");
		}



	}


}
