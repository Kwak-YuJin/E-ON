#include <stdio.h>

void main(void)
{
	long long ivalue = 600851475143, icount ;  //���� ����
	
	for ( icount = 2 ; icount < ivalue ; icount++) //icount�� 2���� ivalue�̸��϶����� 1�� ���ϸ� �ݺ�
	{
		while (ivalue % icount == 0) //icount�� ������ �������� ���� �ݺ�
		{
			ivalue = ivalue / icount; //������ �������� ivalue�� icount�� ������ ����
		}                             //���� ���� �� ������ ���������� Ȯ��
		                              //�������� ������ ������ ���� ���� ū ���μ�
	}

	printf("%lld \n", ivalue); // ivalue�� �� ���

	return 0;
}