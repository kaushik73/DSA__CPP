// Adaptable algorithm ->jaise chalte jaa rahe hai array sort hota jaa rha hai 
// It is a stable algorithm

#include <iostream>
using namespace std;
// Insertion Sort m swap nahi shift karte hai
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
	int key;
	for (int i = 1; i < n; i++)
	{
		key = arr[i];
		int j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int arr[] = {12, 11, 10, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}
