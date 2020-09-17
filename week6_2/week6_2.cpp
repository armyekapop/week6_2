#include<stdio.h>
int main()
{
	int size = 0;
	scanf_s("%d", &size);
	int metrix_1[100][100] = { 0 };
	int metrix_2[100][100] = { 0 };
	int minus[100][100] = { 0 };
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			scanf_s("%d", &metrix_1[i][j]);
		}
	}
	printf("-\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			scanf_s("%d", &metrix_2[i][j]);
		}
	}
	printf("=\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			minus[i][j] = metrix_1[i][j] - metrix_2[i][j];
			printf("%d ", minus[i][j]);
		}
		printf("\n");
	}
	return 0;
}