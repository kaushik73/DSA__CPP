// 1st program to show that array and pointers are different
#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 10, 20, 30, 40, 50, 60 };

	// Assigns address of array to ptr
	int* ptr = arr;
	cout << "Value of first element is " << *ptr;
    ptr++; //or ptr[1]
	cout << "Value of first element is " << *ptr;
    cout << "\nptr[2] = " << ptr[2] << "\n";
	return 0;
}
