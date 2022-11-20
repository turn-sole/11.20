#include<stdio.h>
//int numberof1(unsigned int n)
//{
////	/*int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;*/
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
	/*int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = numberof1(n);
	printf("%d\n", ret);
	return 0;
}*/
//int count_diff_one(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf_s("%d %d", &m, &n);
//	int ret = count_diff_one(m, n);
//	printf("%d\n", ret);
//	return 0;
//}
//int count_diff_one(int m, int n)
//{
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf_s("%d %d", &m, &n);
//	int ret = count_diff_one(m, n);
//	printf("%d\n", ret);
//	return 0;
//}
//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}
//int get_days_of_month(int y, int m)
//{
//	int day = 0;
//	switch (m)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		day = 31;
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		day = 30;
//		break;
//	case 2:
//	{
//		day = 28;
//		if (((y % 4 == 0) && (y % 100 != 0) || (y % 400) == 0))
//			day++;
//	}
//	}
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	scanf_s("%d %d", &y, &m);
//	int ret = get_days_of_month(y, m);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf_s("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf_s("%d", &tmp);
//			if (tmp > 0)
//				sum += tmp;
//		}
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf_s("%d %d", &n, &m);
//	int arr[n][m];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int arr[n];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int del = 0;
	scanf_s("%d", &del);
	for (i = 0; i < n; i++)
	{
		if (arr[i] == del)
			arr[i] = 0;
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
			printf("%d ", arr[i]);
	}
	return 0;
}