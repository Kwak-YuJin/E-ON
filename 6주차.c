#include <stdio.h> 

 int main() 
 {
    printf("���ڿ� �Է�:");
	char buffer[100];
	scanf("%s", buffer);
	int length = strlen(buffer);
	char *sTest = (char*)malloc(sizeof(char) * (length));
	strcpy(sTest, buffer);	
	int sel = 1;

	for (int i = 0; i < length / 2; i++) 
	{
		if (sTest[i] != sTest[length - i - 1]) 
		{
			 			sel = -1;
			 			break;
		}
		
	}
	 	printf("���:");
	 	if (sel == 1)
		{
		 	printf("ȸ���Դϴ�.\n");
	    }
	 	else 
		{
	 		printf("ȸ���� �ƴմϴ�.\n");
	    }
	 	
		return 0;

 }
