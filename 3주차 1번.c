#include <stdio.h>

int main(void)
{
	int x1, y1, x2, y2;   //한 줄에 4 개 씩 음이 아닌 정수
	int x3, y3, x4, y4;
	printf("입력\n");   //첫 줄에는 한 현의 정보가 다음 줄에는 다른 한 현의 정보가 입력된다
	scanf_s("%d%d%d%d", &x1, &y1, &x2, &y2);   // (x1, y1) 은 왼쪽 아래 좌표이고, (x2, y2) 은 오른쪽 위 좌표이다
	scanf_s("%d%d%d%d", &x3, &y3, &x4, &y4);   //입력되는 수는 200 보다 작다


	printf("출력\n");   //overlap 되는 경우에는 "Overlap" 아니면 "No overlap"
	if ((x1 <= x3 && x3 <= x2) || (x1 <= x4 && x4 <= x2) || (x3 <= x1 && x1 <= x4) || (x3 <= x2 && x2 <= x4))
	{
		if ((y1 <= y3 && y3 <= y2) || (y1 <= y4 && y4 <= y2) || (y3 <= y1 && y1 <= y4) || (y3 <= y2 && y2 <= y4))
			printf("Overlap\n");
		else
			printf("No overlap\n");
	}
	else if ((y1 <= y3 && y3 <= y2) || (y1 <= y4 && y4 <= y2) || (y3 <= y1 && y1 <= y4) || (y3 <= y2 && y2 <= y4))
	{
		if ((x1 <= x3 && x3 <= x2) || (x1 <= x4 && x4 <= x2) || (x3 <= x1 && x1 <= x4) || (x3 <= x2 && x2 <= x4))
			printf("Overlap\n");
		else
			printf("No overlap\n");
	}
	else
		printf("No overlap\n");


	return 0;
}
