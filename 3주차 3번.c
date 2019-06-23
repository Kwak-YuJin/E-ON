#include <stdio.h> 

 int main() 
 {
	 	int n, i, *pi;
	 	scanf("%d", &n);

	 	pi = (int*)malloc(n * sizeof(int)); //����Ƚ�� �Է�

	 	for (i = 0; i <= (n - 1); i++)
		{
		     * (pi + i) = Overlap_find();
		}

		for (i = 0; i <= (n - 1); i++)
		{
		     printf("%d", *(pi + i));
		}
	
 }


 int Overlap_find(void)
 {
 	int xy1[4], xy2[4], input_num_1, input_num_2, i, num = 0;
 	int *p1, *p2;
 	int overlap_x = 0, overlap_y = 0;
 	int square10[4] = { 1000,100,10,1 };

 	scanf("%d %d %d %d", &xy1[0], &xy1[1], &xy1[2], &xy1[3]);  //ù���� �簢�� ���� �Է�
 	scanf("%d %d %d %d", &xy2[0], &xy2[1], &xy2[2], &xy2[3]);  //�ι�° �簢�� ���� �Է�
	

	p1 = xy1;
 	p2 = xy2;


	overlap_x = term(p1, (p1 + 2), p2, (p2 + 2));
 	overlap_y = term((p1 + 1), (p1 + 3), (p2 + 1), (p2 + 3));

	return (overlap_x * overlap_y);
 }


 int term(int *(x_s_1), int *(x_b_1), int *(x_s_2), int *(x_b_2))  //�����Լ� ����
 {
 	int j, overlap_test = 0;

 	if ((*(x_b_1)-*(x_s_1)) >= (*(x_b_2)-*(x_s_2))) //ù��° �簢���� ��ǥ���� �ι�° �簢���� ��ǥ������ ũ�ų� ���ٸ� ����
 	{
	 		for (j = *(x_s_1); j <= *(x_b_1); j++)  //��ǥ (x_s_1)���� ��ǥ(x_b_1)���� ��ǥ���� 1�� ������Ű�� �ݺ�
		 	{
		 			if (j == *(x_b_2) || j == *(x_s_2))  //��ǥj�� (x_b_2) �Ǵ� (x_s_2)�� ���� �� ����
			 		{
			 			overlap_test = 1;   
			 		}
			}
 	}
	else  //ù��° �簢���� ��ǥ���� �ι�° �簢���� ��ǥ������ �۰ų� ���ٸ� ����
	{
				for (j = *(x_s_2); j <= *(x_b_2); j++)  //��ǥ (x_s_2)���� ��ǥ(x_b_2)���� ��ǥ���� 1�� ������Ű�� �ݺ�
			 	{
					if (j == *(x_b_1) || j == *(x_s_1))  //��ǥj�� (x_b_1) �Ǵ� (x_s_1)�� ���� �� ����
				 	{
				 		overlap_test = 1;
				 	}
			 	}
    }
	 	return overlap_test;
 }