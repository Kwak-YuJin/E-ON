#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main()
{
	printf("========== �޴� ==========\n");
	printf("PUSH : 1 \n");
	printf("POP : 2 \n");
	printf("SHOW : 3 \n");
	printf("�����Ϸ��� 1,2,3 �̿��� �� �Է� \n");

	int ivalue = 1, value, stack[10] = { 0 }, index = 0;	//�迭 �� ���� ����


	while (ivalue == 1 || ivalue == 2 || ivalue == 3) {		//1,2,3�� �ԷµǴ� ���� ����


		printf("�޴��� �����ϼ��� : ");
		scanf("%d", &ivalue);


		switch (ivalue)
		{
		case 1:
			printf("�� �Է� : ");
			scanf("%d", &value);
			stack[index] = value;		//���� �ε��� ���� ���� �Է� �� ���� �ε����� ��ġ �̵� 
			index++;
			break;
		case 2:
			index--;
			stack[index] = 0;			//���� �ε��� ��ġ�� �̵� �� ������ ���� 0���� �� 
			break;
		case 3:
			for (int count = 0; count <= 9; count++)   //���� 0�� �ƴѰ��� ���
			{	
				if (stack[count] != 0)
					printf("%d ", stack[count]);

			}
			printf("\n");
			break;
		default:
			printf("========= ���� ���α׷��� �����մϴ� ==========\n");
		}



	}


}
