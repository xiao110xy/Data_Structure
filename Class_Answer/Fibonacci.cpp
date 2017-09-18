
#include <stdio.h>
#include <stdlib.h>
#include <atlalloc.h>
#include <string>

// k阶斐波拉契数列
int Fibonacci(int k,int m)
{
	if (k < 1 && m < 1)
		return 0;
	if (m < k)
		return 0;
	else if (m == k)
		return 1;
	else {
		int *p = new int[m + 1];
		int x = 0;
		for (int i = 0; i != k - 1; ++i) {
			p[i] = 0;
		}
		p[k - 1] = 1;
		for (int i = k; i != m; i++) {
			x = 0;
			for (int j = i - k; j != i; ++j) {
				x += p[j];
			}
			p[i] = x;
		}
		return p[m-1];

	}

}


int fab(int k, int m)
{
	int s = 0;
	if (k < 1 || m < 1)
		return -1;
	if (m < k)
		return 0;
	if (m == k)
		return 1;
	if (m > k)
	{
		for (int i = m - k; i < m; i++)
			s += fab(k, i);
		return s;
	}
}


int fab1(int k, int m)
{
	int temp[1000],sum;
	for (int i = 0; i < k - 1; i++)
	{
		temp[i] = 0;
	}
	temp[k - 1] = 1;
	temp[k] = 1;
	int j = 0;
	sum = 1;
	for (int i = k + 1; i < m; i++, j++)
	{
		temp[i] = 2 * sum - temp[j];
		sum = temp[i];
	}
	return temp[m - 1];
}

//int comparechar(std::string a, std::string b)
//{
//	int l = a.length() < b.length() ? a.length(): b.length();
//	int k = 0;
//	for (k = 0; k < l; k++)
//	{
//		if (a[k] != b[k])
//			break;
//	}
//
//}