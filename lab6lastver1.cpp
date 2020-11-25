#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	system("chcp 1251");
	system("cls");
	int count = 0;
	int** mas, n;
	printf("Задайте кол-во строк и столбцов данного массива\n");
	scanf_s("%d", &n);
	mas = (int**)malloc(n * sizeof(int*));
	for (int i = 0;i < n;i++)
	{
		mas[i] = (int*)malloc(n * sizeof(int));
	}
	printf("Заполните массив\n");
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			scanf_s("%d", &mas[i][j]);
		}
	}
	for (int i = 0;i < n;i++)
	{
		printf("\n");
		for (int j = 0;j < n;j++)
		{
			printf("%d", mas[i][j]);
		}
	}


	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (mas[i][j] == mas[j][i])
			{
				count++;

			}




		}
	}

	if (count == n * n)
	{
		printf("\nМассив является симметричным относительно своей главной диагонали.");

	}
	else
	{
		printf("\nМассив не является симметричным относительно своей главной диагонали");
	}
	for (int i = 0;i < n;i++)
	{
		free(mas[i]);
	}
	free(mas);
	return 0;
}
