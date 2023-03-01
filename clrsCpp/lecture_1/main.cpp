#include <iostream>
int* Insertion_Sort(int* array, int length);
int* Insertion_Sort_nonincreasing(int* array, int length);
int* Merge_Sort(int* array, int length);

int main()
{
    /*std::cout << "Insertion_Sort nondecreasing permutation\n" << std::endl;
    int array_0[9] = { 9,8,7,6,5,4,3,2,1 };
    for (int i = 0; i < 9; i++)
    {
        std::cout << *(Insertion_Sort(array_0, 9) + i) << ' ';
    }
    std::cout << std::endl;
    std::cout << "Done!\n" << std::endl;

    std::cout << "Insertion_Sort nonincreasing permutation\n" << std::endl;
    int array_1[9] = { 1,2,3,4,5,6,7,10,9 };
    for (int i = 0; i < 9; i++)
    {
        std::cout << *(Insertion_Sort_nonincreasing(array_1, 9) + i) << ' ';
    }
    std::cout << std::endl;*/

    std::cout << "Merge_Sort nondecreasing permutation\n" << std::endl;
    int array_1[3] = {3,2,1 };
    for (int i = 0; i < 3; i++)
    {
        std::cout << *(Merge_Sort(array_1, 3) + i) << ' ';
    }
    std::cout << std::endl;
    std::cout << "Done!\n" << std::endl;
}
