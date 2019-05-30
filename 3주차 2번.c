#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

 void square(int *x1, int *x2, int *y1, int *y2, int *x3, int *x4, int *y3, int *y4)
 {
	 	if (((*x1 < *x3) && (*x2 < *x3)) || ((*x1 > *x4) && (*x2 > *x4)))
		 	{
		 		printf("No overlap");
		 	}
	 	else if (((*y1 < *y3) && (*y2 < *y3)) || ((*y1 > *y4) && (*y2 > *y4)))
		 	{
		 		printf("No overlap");
		 	}
		else {
			printf("overlap");
		}
		

		 }
 int main(void)
 {
	 	int x1, y1, x2, y2;
	 	int x3, y3, x4, y4;
	
		printf("1좌표를 입력 하시오 : ");
	 	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	 	printf("2좌표를 입력 하시오 : ");
	 	scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
	
		 	square(&x1, &x2, &y1, &y2, &x3, &x4, &y3, &y4);

		 	return 0;
	 }
