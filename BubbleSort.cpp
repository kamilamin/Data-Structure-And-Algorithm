#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;


int main()
{
	int arr[100];
	int temp, n = 5;

	cout << "Enter element in array: \n";
	for (int i = 0; i < n; i++)
	{
	
		cin >> arr[i];
	}

	cout << "\nUnsorted list is :\n";
	for (int i = 0; i < n; i++)
	{
		cout <<"\t"<< arr[i];
	}	
	cout << endl ;

/* Bubble sort*/
	for (int i = 0; i < n - 1 ; i++)
	{
		for (int j = 0; j < n - 1 - i ; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}/*End of if*/
		}/*End of inner for loop*/
		cout << "\nAfter Pass " << i+1 << " elements are : ";
	
		for (int k = 0; k < n; k++)
		cout << arr[k] << " ";
		cout << endl;
	}/*End of outer for loop*/

	cout << "\nSorted list is :\n";
	for (int i = 0; i < n; i++)
	cout << arr[i] << " " ;
	cout << endl;
}/*End of main()*/