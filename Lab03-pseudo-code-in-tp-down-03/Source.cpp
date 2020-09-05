#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int n, i = 1, m, l = 1, p, k = 1;
	scanf("%d", &n);
	m = ((n * 2) - 1) - 2;
	p = n - 1;
	for (int i = 1; i <= (n * 2) - 1; i++)
	{
		if (i < n)
		{
			for (int j = 0; j < l; j++)
			{
				printf("* ");
			}
			for (int j = 0; j < m; j++)
			{
				printf("  ");
			}
			for (int j = 0; j < l; j++)
			{
				printf("* ");
			}
			printf("\n");
			m = m - 2;
			l++;
		}
		else if (i == n)
		{
			for (int j = 0; j < (n * 2) - 1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else if (i > n)
		{
			for (int j = 0; j < p; j++)
			{
				printf("* ");
			}
			for (int j = 0; j < k; j++)
			{
				printf("  ");
			}
			for (int j = 0; j < p; j++)
			{
				printf("* ");
			}
			printf("\n");
			k = k + 2;
			p--;
		}
	}
	return 0;
}
