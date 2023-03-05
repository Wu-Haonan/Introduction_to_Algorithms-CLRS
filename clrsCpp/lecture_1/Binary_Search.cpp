#include <iostream>

int Iterative_Binary_Search(int* array, int v, int n)
{
	// A[1...n] is the sorted array
	// v is the query number
	// n is the length of the array
	int l = 0;
	int r = n - 1;
	while (l <= r)
	{
		int m = floor((l + r) / 2);
		if (array[m] == v)
		{
			return m;
		}
		else if (array[m] < v) // l < m < v < r
		{
			l = m + 1;
		}
		else // l < v < m < r
		{
			r = m - 1;
		}
	}
	return -1;
}


int Recursive_Binary_Search(int* array, int v, int l, int r)
{
	if (l > r)
	{
		return -1;
	}
	else
	{
		int m = floor((l + r) / 2);
		if (array[m] == v)
		{
			return m;
		}
		else if (array[m] < v)
		{
			return Recursive_Binary_Search(array, v, m + 1, r);
		}
		else
		{
			return Recursive_Binary_Search(array, v, l, m - 1);
		}
	}
}


int* Search_two_elements_equal_x(int* S, int x, int n)
{
	for (int i = 0; i < n; i++)
	{
		int pos = Iterative_Binary_Search(S, x, n);
		if (pos != -1)
		{
			int array[2] = { i,pos };
			return array;
		}
	}
	int array[2] = { -1,-1 };
	return array;
}