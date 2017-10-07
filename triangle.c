#include <stdio.h>

#define MAX 50

int main(int argc, char *argv[])
{
	int i, j;
	double num[100][100] = {0, 1};

	for (i = 1; i <= MAX + 1; i++)
	{
		for (j = 1; j <= i; j++)
		{
			num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
			printf("%.0f  ", num[i][j]);
		}
		printf("\n");
	}

	return 0;
}