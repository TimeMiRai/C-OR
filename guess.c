
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game()
{
	int r = rand() % 100 + 1;			//����a-b�������
	int guess = 0;						//a + rand () % (b - a + 1)

	while (1)
	{
		printf("�������>:");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("��С��\n");
		}
		else if (guess > r)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

void meun()										//������Ϸ�˵� meun   ����main������ֱ������   
{
	printf("**********************\n");
	printf("******  1.play  ******\n");
	printf("******  0.exit  ******\n");
	printf("**********************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));			//��ʱ����Ϊ�������  ʹrand���������
	do
	{
		meun();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}