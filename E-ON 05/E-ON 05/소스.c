#include <stdio.h>

void main(void)
{
	int ivalue = 1, icount, test;    //���� ���� �� �ʱⰪ ����

	while (1)         //� ������ �𸣹Ƿ� ivalue 1�� �����ϸ� ���ѹݺ�
	{
		test = 1;   //test�� ����1�� ����
		
		for (icount = 1; icount <= 20; icount++) //icount�� 1~20���� 1�� �����ϸ� �ݺ�
		{
			if (ivalue % icount != 0) // 1~20�� ����������� �ʴ� ���� �ִٸ�
			{
				test = 0;   //test�� ���� 0���� �ٲ�
				break;  //�ݺ��� ����
			}
		}

		if (test == 1)  //test�� ���� 1�̸� �ݺ��� ����
		{
			break;
		}

		ivalue++; 

	}

		printf("1 ~20 ������ � ���ε� ������ �������� ���� ���� ���� %d�Դϴ�. \n", ivalue); //����� ���
	
}
