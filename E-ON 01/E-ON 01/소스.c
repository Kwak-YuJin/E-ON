#include <stdio.h>

int main(void)
{
	int ivalue, isum = 0; //���� ���� �� �ʱ�ȭ

	for (ivalue = 1; ivalue < 1000; ivalue++) //ivalue�� 1���� 1000�̸��϶����� 1�� �����ϸ� �ݺ�
	{
		if (ivalue % 3 == 0 || ivalue % 5 == 0) //ivalue�� 3�Ǵ� 5�� ������ �������ٸ�
		{
			isum += ivalue; //isum�� ivalue�� ����
		}
	}

	printf("1000���� ���� �ڿ��� �� 3 �Ǵ� 5�� ����� ���� %d�Դϴ�. \n", isum); //isum�� ���

	return 0;
}