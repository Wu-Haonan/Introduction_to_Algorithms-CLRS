#include <iostream>

int* Merge_operation(int* array, int* left_array, int* right_array,int left_length, int right_length)
{
    int i = 0;
    int j = 0;
    int count = 0;

    while (i < left_length && j < right_length)
    {
        if (*(left_array + i) < *(right_array + j))
        {
            array[count] = *(left_array + i);
            i++;
            count++;
        }
        else
        {
            array[count] = *(right_array + j);
            j++;
            count++;
        }
    }

    if (i < left_length) 
    {
        for (; i < left_length; i++)
        {
            array[count] = *(left_array + i);
            count++;
        }
    }

    if (j < right_length)
    {
        for (; j < right_length; j++)
        {
            array[count] = *(right_array + j);
            count++;
        }
    }
    return array;
}

int* Merge_Sort(int* array, int length)
{
    if (length == 1)
    {
        return array;
    }
    else
    {
        int left_length = length / 2;
        int right_length = length - left_length;

        int* left_array = new int[left_length];
        int* right_array = new int[right_length];
        int count = 0;
        for (int i = 0; i < left_length; i++)
        {
            left_array[i] = *(array + count);
            count++;
        }
        for (int i = 0; i < right_length; i++)
        {
            right_array[i] = *(array + count);
            count++;
        }
        Merge_Sort(left_array, left_length);
        Merge_Sort(right_array, right_length);
        Merge_operation(array,left_array, right_array, left_length, right_length);
        return array;
    }
}