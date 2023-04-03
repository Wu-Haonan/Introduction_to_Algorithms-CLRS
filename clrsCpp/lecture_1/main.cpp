#include <iostream>
int* Insertion_Sort(int* array, int length);
int* Insertion_Sort_nonincreasing(int* array, int length);
int* Merge_Sort(int* array, int length);
int Iterative_Binary_Search(int* array, int v, int n);
int Recursive_Binary_Search(int* array, int v, int l, int r);
int* Search_two_elements_equal_x(int* S, int x, int n);

int main()
{
    std::cout << "insertion_sort nondecreasing permutation\n" << std::endl;
    int array_0[9] = { 9,8,7,6,5,4,3,2,1 };
    for (int i = 0; i < 9; i++)
    {
        std::cout << *(Insertion_Sort(array_0, 9) + i) << ' ';
    }
    std::cout << "\n" <<std::endl;

    std::cout << "insertion_sort nonincreasing permutation\n" << std::endl;
    int array_1[9] = { 1,2,3,4,5,6,7,10,9 };
    for (int i = 0; i < 9; i++)
    {
        std::cout << *(Insertion_Sort_nonincreasing(array_1, 9) + i) << ' ';
    }
    std::cout << "\n" << std::endl;

    std::cout << "Merge_Sort nondecreasing permutation\n" << std::endl;
    int array_2[9] = { 9,8,7,6,5,4,3,2,1 };
    for (int i = 0; i < 9; i++)
    {
        std::cout << *(Merge_Sort(array_2, 9) + i) << ' ';
    }
    std::cout << "\n" << std::endl;
    

    std::cout << "iterative binary search\n" << std::endl;
    int array_3[9] = { 1,2,3,4,5,6,7,8,9 };
    std::cout << Iterative_Binary_Search(array_3,6,9) << std::endl;
    std::cout << Iterative_Binary_Search(array_3, 10, 9) << std::endl;
    std::cout << "\n" << std::endl;

    std::cout << "recursive binary search\n" << std::endl;
    int array_4[9] = { 1,2,3,4,5,6,7,8,9 };
    std::cout << Recursive_Binary_Search(array_4, 6, 0,9) << std::endl;
    std::cout << Recursive_Binary_Search(array_4, 10, 0,9) << std::endl;
    std::cout << "\n" << std::endl;

    std::cout << "recursive binary search\n" << std::endl;
    int array_5[9] = { 1,2,3,4,5,6,7,8,9 };
    std::cout << Search_two_elements_equal_x(array_5, 6, 9)[0]<< ' ';
    std::cout << Search_two_elements_equal_x(array_5, 6, 9)[1] << std::endl;
    std::cout << Search_two_elements_equal_x(array_5, 11, 9)[0] << ' ';
    std::cout << Search_two_elements_equal_x(array_5, 11, 9)[1] << std::endl;
    std::cout << "\n" << std::endl;


    std::cout << "Done!\n" << std::endl;
}
