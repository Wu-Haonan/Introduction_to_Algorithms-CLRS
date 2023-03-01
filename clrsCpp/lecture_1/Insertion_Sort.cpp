#pragma once
#include <iostream>

int* Insertion_Sort(int* array, int length)
{
    // Use Insertion_sort to permutate the array as a nondecreasing array
    for (int i = 1; i < length; i++) // iteration from 2nd element in array
    {
        int key = *(array + i);
        int j = i - 1;
        while (j >= 0 && *(array + j) > key)
        {
            *(array + j + 1) = *(array + j); // move jth element to (j+1)th position
            j--;
        }
        *(array + j + 1) = key;
    }
    return array;
}

int* Insertion_Sort_nonincreasing(int* array, int length)
{
    // Use Insertion_sort to permutate the array as a nonincreasing array
    for (int i = 1; i < length; i++) // iteration from 2nd element in array
    {
        int key = *(array + i);
        int j = i - 1;
        while (j >= 0 && *(array + j) < key)
        {
            *(array + j + 1) = *(array + j); // move jth element to (j+1)th position
            j--;
        }
        *(array + j + 1) = key;
    }
    return array;
}



