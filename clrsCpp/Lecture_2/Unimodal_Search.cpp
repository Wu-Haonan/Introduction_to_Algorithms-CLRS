# include <iostream>

int Iterative_Unimodal_Search(int* array,int length)
{
	int l = 0;
	int r = length - 1;
	while (l < r)
	{
		int m = floor((l + r) / 2);
		if (array[m] > array[m + 1])
		{
			r = m;
		}
		if (array[m] < array[m + 1])
		{
			l = m + 1;
		}
	}
	return array[r];
}

int Recursive_Unimodal_Search(int* array, int left, int right)
{
	if (left == right) {
		return array[left];
	}
	else {
		int m = floor((left + right) / 2);
		if (array[m] > array[m + 1]) {
			right = m;
		}
		else {
			left = m + 1;
		}
		return Recursive_Unimodal_Search(array, left, right);
	}
}