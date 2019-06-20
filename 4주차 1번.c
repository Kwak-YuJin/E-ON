#include <stdio.h> 
#include <stdlib.h>

 struct data { // 구조체 선언
    int value;
 	int test;
 	struct data *next;
};
void RemoveSp(struct data **start) {
 	struct data *del = *start;	
    * start = (*start)->next;	//시작지점을 다음 시작지점으로 이동
 	free(del);					
}

 void MoveLast(struct data **start, struct data **end) {
 	(*end)->next = *start;			//끝지점을 시작지점과 연결함 
     * start = (*start)->next;		//시작지점을 다음 시작지점으로 이동 
     * end = (*end)->next;			//끝지점을 다음 끝지점으로 이동
 	(*end)->next = NULL;			 
}

int TestDaTa(struct data *testdata) {
 	int test = 0;
 	int testValue = testdata->value;
 	while (testdata != NULL) {
 		if (testValue < testdata->value)
 			return 1;
 		testdata = testdata->next;
	}
 	return 0;

}
void main(void) {
 	int allCount, setNum, timeValue = 0;
 	
	printf("입력 \n");
 	scanf("%d %d", &allCount, &setNum);
 	
	struct data *start = malloc(sizeof(struct data) * 1); 
 	struct data *end = start;		 
 
	for (int c = 0; c < allCount; c++)
	{
 		int iValue;
		scanf("%d", &iValue);
 		end->value = iValue;     //입력받은 수를 마지막 값으로 설정
 		
		if (c == setNum) {
 			end->test = 1;		// test값에 1 대입 
		}
		else {
 			end->test = 0;
		}
 		if (c + 1 == allCount) {
 			end->next = NULL;	
		}
 		else {
 			end->next = malloc(sizeof(struct data) * 1);
 			end = end->next;
		}
	}
 	while (1) {
 		if (TestDaTa(start) == 1) {				//뒤에 높은 우선순위가 있다면 뒤로 보내도록 함
 			MoveLast(&start, &end);		 
		}
 		else {							
 			timeValue++;				    //한 번 프린트 될때마다 timeValue의 값을 1씩 증가시킴 
 			if (start->test == 1) {		
 				break;
			}
 			else {
 				RemoveSp(&start);		
			}
		}
	}
 	printf("\n출력 \n");
 	printf("%d\n", timeValue);
}
