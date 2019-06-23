#include <stdio.h> 

 int main() 
 {
	 	int n, i, *pi;
	 	scanf("%d", &n);

	 	pi = (int*)malloc(n * sizeof(int)); //시행횟수 입력

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

 	scanf("%d %d %d %d", &xy1[0], &xy1[1], &xy1[2], &xy1[3]);  //첫번쨰 사각형 범위 입력
 	scanf("%d %d %d %d", &xy2[0], &xy2[1], &xy2[2], &xy2[3]);  //두번째 사각형 범위 입력
	

	p1 = xy1;
 	p2 = xy2;


	overlap_x = term(p1, (p1 + 2), p2, (p2 + 2));
 	overlap_y = term((p1 + 1), (p1 + 3), (p2 + 1), (p2 + 3));

	return (overlap_x * overlap_y);
 }


 int term(int *(x_s_1), int *(x_b_1), int *(x_s_2), int *(x_b_2))  //지역함수 생성
 {
 	int j, overlap_test = 0;

 	if ((*(x_b_1)-*(x_s_1)) >= (*(x_b_2)-*(x_s_2))) //첫번째 사각형의 좌표폭이 두번째 사각형의 좌표폭보다 크거나 같다면 실행
 	{
	 		for (j = *(x_s_1); j <= *(x_b_1); j++)  //좌표 (x_s_1)부터 좌표(x_b_1)까지 좌표값을 1씩 증가시키며 반복
		 	{
		 			if (j == *(x_b_2) || j == *(x_s_2))  //좌표j가 (x_b_2) 또는 (x_s_2)와 같을 때 실행
			 		{
			 			overlap_test = 1;   
			 		}
			}
 	}
	else  //첫번째 사각형의 좌표폭이 두번째 사각형의 좌표폭보다 작거나 같다면 실행
	{
				for (j = *(x_s_2); j <= *(x_b_2); j++)  //좌표 (x_s_2)부터 좌표(x_b_2)까지 좌표값을 1씩 증가시키며 반복
			 	{
					if (j == *(x_b_1) || j == *(x_s_1))  //좌표j가 (x_b_1) 또는 (x_s_1)와 같을 때 실행
				 	{
				 		overlap_test = 1;
				 	}
			 	}
    }
	 	return overlap_test;
 }