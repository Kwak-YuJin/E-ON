#include <stdio.h>

int main(void)
{
	int x1, y1, x2, y2;   //�� �ٿ� 4 �� �� ���� �ƴ� ����
	int x3, y3, x4, y4;
	printf("�Է�\n");   //ù �ٿ��� �� ���� ������ ���� �ٿ��� �ٸ� �� ���� ������ �Էµȴ�
	scanf_s("%d%d%d%d", &x1, &y1, &x2, &y2);   // (x1, y1) �� ���� �Ʒ� ��ǥ�̰�, (x2, y2) �� ������ �� ��ǥ�̴�
	scanf_s("%d%d%d%d", &x3, &y3, &x4, &y4);   //�ԷµǴ� ���� 200 ���� �۴�


	printf("���\n");   //overlap �Ǵ� ��쿡�� "Overlap" �ƴϸ� "No overlap"
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
