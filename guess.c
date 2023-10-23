
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game()
{
	int r = rand() % 100 + 1;			//生成a-b的随机数
	int guess = 0;						//a + rand () % (b - a + 1)

	while (1)
	{
		printf("请猜数字>:");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
		}
		else if (guess > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

void meun()										//创建游戏菜单 meun   可在main函数中直接引用   
{
	printf("**********************\n");
	printf("******  1.play  ******\n");
	printf("******  0.exit  ******\n");
	printf("**********************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));			//以时间作为随机种子  使rand生成随机数
	do
	{
		meun();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}