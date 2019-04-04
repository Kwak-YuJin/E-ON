/*�տ������� ���� ���� �ڿ������� ���� ���� ����� ���� ���� ��Ī��(palindrome)��� �θ��ϴ�.
�� �ڸ� ���� ���� ���� �� �ִ� ��Ī�� �� ���� ū ���� 9009 (= 91 �� 99) �Դϴ�.
�� �ڸ� ���� ���� ���� �� �ִ� ���� ū ��Ī���� ���Դϱ�?
*/

#include <stdio.h>
#include <string.h>


void main(void)
{
	int i, j, k, iResult = 0, len, test, iCount;
	char cValue[10];

	for (i = 1; i < 1000; i++) //i�� 1���� 999���� 1�� �����ϸ� �ݺ�
	{
		for (j = 1; j < 1000; j++) //j�� 1���� 999���� 1�� �����ϸ� �ݺ�
		{
			k = i * j;    // ���ڸ��� ���� ���� k�� ����
			sprintf(cValue,"%d", k);    //k�� ���ڿ��� ��ȯ�Ͽ� cValue�� ����
			len = strlen(cValue);     //���ڿ� ũ�⸦ len�� ����
			test = 1;                //test �� ���� 1�� ����

			for (iCount = 0; iCount < (len / 2); iCount++) //���ڿ��� ������ 1/2 �� ��ŭ �ݺ�
			{  
				if (cValue[iCount] != cValue[len - (iCount + 1)]) //���ڿ� �迭�� ��ġ�� �̿��Ͽ� ��Ī���� ��
				{ 
					test = 0;       //��Ī�� �ƴϸ� test���� 0���� �ٲ�
				}
			}
			if (test == 1) //test�� 1�̸� ����
			{       
				if (k > iResult) //k�� ���� ��������� ũ��
				{ 
					iResult = k;  //������� k ����
				}
			}
		}
	}

	printf("%d\n", iResult); //����� ���
}
