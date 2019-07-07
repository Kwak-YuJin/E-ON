#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
struct List
{
	char *title;
 	char *writer;
	int Year;
 	char *publisher;
 	char *genre;
 	struct List *nextList;
 };

struct List* FileIn(struct List *Start)
{
 	struct List *loopLiked = Start;
 	char *strInFileName;
 	FILE *inFile;

 	strInFileName = "input.txt";

	if ((inFile = fopen(strInFileName, "r")) == NULL) 
	{
 		printf("��� ���� ���� ����\n");
 		exit(1);
	}
	 	int ibuffer;
	 	char buffer[4][100];	

	 	while (!feof(inFile)) 
		{
	 		fscanf(inFile, "%s %s %d %s %s", buffer[0], buffer[1], &ibuffer, buffer[2], buffer[3]);
	 		char *out[4];
	 		for (int i = 0; i < 4; i++) 
			{
	 			out[i] = malloc(sizeof(char) * (strlen(buffer[i])));
	 			strcpy(out[i], buffer[i]);
		    }
     		struct List *newData = malloc(sizeof(struct List) * 1);
	 		newData->title = out[0];
	 		newData->writer = out[1];
	 		newData->Year = ibuffer;
	 		newData->publisher = out[2];
	 		newData->genre = out[3];
	 		newData->nextList = NULL;
	
	 		if (Start == NULL)
			{
				Start = newData;
	 			loopLiked = Start;
		    }
	 		else 
			{
	 			loopLiked->nextList = newData;
	 			loopLiked = loopLiked->nextList;
		    }
	    }
	 	fclose(inFile);
	 	return Start;
}

 void FileOut(struct List *printNode)
 {
 	char *strOutFileName;
 	FILE *outFile;

 	strOutFileName = "input.txt";

 	if ((outFile = fopen(strOutFileName, "w")) == NULL) 
	{
 		printf("��� ���� ���� ����\n");
 		exit(1);
	}

	while (printNode != NULL)
	{
		if (printNode->nextList == NULL)
		{
			fprintf(outFile, "%s %s %d %s %s", printNode->title, printNode->writer, printNode->Year, printNode->publisher, printNode->genre);
		}
		else
		{
			fprintf(outFile, "%s %s %d %s %s\n", printNode->title, printNode->writer, printNode->Year, printNode->publisher, printNode->genre);
		}
		printNode = printNode->nextList;
	}	
	 	fclose(outFile);
}

void PrintBook(struct List *Start);

char* In_String() 
 {		 
 	char buffer[100];
 	scanf("%s", buffer);
 	char *out = malloc(sizeof(char) * (strlen(buffer)));
 	strcpy(out, buffer);
 	return out;
}

struct List* AddBook(struct List *Start)
{
 	struct List* loopLinkd = Start;

 	printf("�߰��� ������ �Է��ϼ���. \n");
 	printf("(������, ����, ���ǿ���, ���ǻ��, �帣 ������ ��� �Է�)\n");

 	struct List *newData = malloc(sizeof(struct List) * 1);

 	newData->title = In_String();
 	newData->writer = In_String();
 	scanf("%d", &newData->Year);
 	newData->publisher = In_String();
 	newData->genre = In_String();;
 	newData->nextList = NULL;

 	if (Start == NULL)
	{
		Start = newData;
	}
 	else 
	{
 		while (loopLinkd->nextList != NULL) 
		{
 			loopLinkd = loopLinkd->nextList;
		}
	 		loopLinkd->nextList = newData;
	}
 	return Start;
}

struct List* SearchNode(struct List *testNode, char *sTest)
{
 	char sValue[10];
 	if (testNode == NULL) 
	{
 		return NULL;
	}
 	else 
	{
		while (testNode != NULL)
		{
			if (strstr(testNode->title, sTest) != NULL)
			{
				return testNode;
			}
			else if (strstr(testNode->writer, sTest) != NULL)
			{
				return testNode;
			}
			else if (strstr(_itoa(testNode->Year, sValue, 10), sTest) != NULL)
			{
				return testNode;
			}
			else if (strstr(testNode->publisher, sTest) != NULL)
			{
				return testNode;
			}
			else if (strstr(testNode->genre, sTest) != NULL)
			{
				return testNode;
			}
			else
			{
				testNode = testNode->nextList;
			}

		}
 		return NULL;
	}
	
}

void SearchBook(struct List *loopLinkd)
{
 	printf("�����˻�\n");
 	printf("(������, ����, ���ǿ���, ���ǻ��, �帣 �˻�����)\n");
 	printf("�˻��� �ܾ �Է��ϼ���: ");
 	char *sTest = In_String();
 	printf("\n");
 	printf("-----------------------------------\n");
 	struct List *printNode;
 	int c = 0;
 	while (loopLinkd != NULL) 
	{
 		printNode = SearchNode(loopLinkd, sTest);

	    if (printNode == NULL) 
		{ 
 		    break;
		}
 		else 
		{
			printf("%s, %s, %d, %s, %s\n", printNode->title, printNode->writer, printNode->Year, printNode->publisher, printNode->genre);
 			loopLinkd = printNode->nextList;
		}
	 		c++;
	}
 	printf("-----------------------------------\n");
 	printf("�˻����: �� (%d)�� �Դϴ�.\n", c);
}

void EditBook(struct List *Start)
{
 	if (Start == NULL)

	{
 		return;
	}
 	PrintBook(Start);

 	struct List* testNode = Start;
 	while (1) 
	{
 		printf("\n������ �������� ��Ȯ�� �Է��ϼ���:");
 		char *deltitle = In_String();

 		while (testNode != NULL) 
		{
			if (strcmp(testNode->title, deltitle) == 0)
			{
 				break;
			}
 			else 
			{
					testNode = testNode->nextList;
			}
		}
 		if (testNode == NULL)
		{
			testNode = Start;
			printf("�˻��� �������� �����ϴ�.\n");
		}
 		else 
		{
 			break;
		}
	}

	printf("������ ����� �����ϼ���(1.������ 2.���� 3.���ǿ��� 4.���ǻ�� 5.�帣) : ");
	int sel;
 	while (1) 
	{
 		scanf("%d", &sel);
 		switch (sel)
 		{
 		case 1:
			printf("������ ������ �Է� : ");
			testNode->title = In_String();
 			break;
 		case 2:
 			printf("������ ���� �Է� : ");
			testNode->writer = In_String();
 			break;
		case 3:
 			printf("������ ���ǿ��� �Է� : ");
			int year;
 			scanf("%d", &year);
			testNode->Year = year;
			break;
 		case 4:
			printf("������ ���ǻ�� �Է� : ");
     		testNode->publisher = In_String();
 			break;
		case 5:
 			printf("������ ���ǻ�� �Է� : ");
			testNode->genre = In_String();
			break;
		default:
			printf("�߸��� �Է��Դϴ�. �ٽ��Է��ϼ���:");
			continue;
			break;
		}
 		break;
	}
 	printf("\n�����Ϸ� :");
 	printf("%s %s %d %s %s\n", testNode->title, testNode->writer, testNode->Year, testNode->publisher, testNode->genre);
}

struct List* DeleteBook(struct List *Start)
{
 	PrintBook(Start);

	struct List* testNode = Start;
	
 	while (1) 
	{
 		printf("\n������ �������� ��Ȯ�� �Է��ϼ���:");
 		char *deltitle = In_String();
 		while (testNode != NULL) 
		{
 			if (strcmp(testNode->title, deltitle) == 0)
			{
				break;
			}
			else
			{
 				testNode = testNode->nextList;
			}
		}
 		if (testNode == NULL) 
		{
			testNode = Start;
 			printf("�˻��� �������� �����ϴ�.\n");
		}
		else 
		{
			break;
		}
	}
    struct List* loopNode = Start;
		
	if (testNode == Start)
	{
		Start = Start->nextList;
		free(testNode);
	}
 	else 
	{
		while (loopNode != NULL) 
		{
			if (loopNode->nextList == testNode)
			{
 				break;
			}
			else 
			{
 				loopNode = loopNode->nextList;
			}
		}
		loopNode->nextList = testNode->nextList;
		free(testNode);
	}
 	printf("���� ���� �Ǿ����ϴ�.\n");
	return Start;
}

void PrintBook(struct List *Start)
{
 	struct List *loopLinkd = Start;
	printf("\n������ ���� ���ǿ��� ���ǻ�� �帣\n");
 	printf("-----------------------------------\n");
 	while (loopLinkd != NULL) 
	{
		printf("%s %s %d %s %s\n", loopLinkd->title, loopLinkd->writer, loopLinkd->Year, loopLinkd->publisher, loopLinkd->genre);
 		loopLinkd = loopLinkd->nextList;
	}
 	printf("-----------------------------------\n");
}

void menu(struct List *Start)
{
 	int sel;
 	while (1) 
	{
 		printf("=======================\n");
 		printf("1.���� �߰� \n");
 		printf("2.���� �˻� \n");
		printf("3.���� ���� ���� \n");
 		printf("4.���� ���� \n");
		printf("5.���� �� ���� ��� ��� \n");
 		printf("6.���� \n");
		printf("7.���α׷� ������(�ڵ�����) \n");
		printf("�Է�: ");
 		scanf("%d", &sel);
		printf("\n");
		switch (sel)
 		{
		case 1:
 			printf("1.���� �߰� \n");
			Start = AddBook(Start);
 			break;
		case 2:
 			printf("2.���� �˻� \n");
			SearchBook(Start);
 			break;
 		case 3:
 			printf("3.���� ���� ���� \n");
			EditBook(Start);
 			break;
		case 4:
 			printf("4.���� ���� \n");
			Start = DeleteBook(Start);
			break;
 		case 5:
			printf("5.���� �� ���� ��� ��� \n");
			PrintBook(Start);
 			break;
 		case 6:
 			printf("6.���� \n");
 			FileOut(Start);
 			break;
 		case 7:
 			printf("7.���α׷� ������(�ڵ�����) \n");
 			FileOut(Start);
 			return;
 			break;
	 		default:
 			printf("�ٽ��Է��ϼ���.\n");
 			break;
 		}
 		printf("\n");
	}
}

int main()
{
	struct List *Start = NULL;
	Start = FileIn(Start);
 	menu(Start);

 	return 0;
}

