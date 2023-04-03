# include <iostream>

int Iterative_Unimodal_Search(int* array, int length);
int Recursive_Unimodal_Search(int* array, int left, int right);

int main(void) 
{
	int array[10] = { 1,2,3,4,5,6,10,9,8,7 };
	std::cout << Iterative_Unimodal_Search(array, 10) << std::endl;
	std::cout << Recursive_Unimodal_Search(array, 0, 9) << std::endl;
}