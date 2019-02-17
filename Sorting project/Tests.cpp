#include <iostream>
#include <stdlib.h>
#include <vector>
#include "./Tests.h"
using namespace std;


int Tests::IntegerSorter(int a[])
{
	system("cls");
	cout << "Integer Sorting Function" << endl;
	cout << "This function will randomly generate 10 integers for the array then print before and after sorting them. \n" << endl;
	for (int j = 0; j < 10; j++) {
		a[j] = rand() % 100; //Using stdlib, I can use the rand function with the number limit 100 to generate 10 random integers for this function to use.
	}

	cout << "Before sorting: ";
	for (int i = 0; i < 10; i++)
	{
		if (i <= 8)
		{
			cout << a[i] << " "; // This if statement within this for loop will print out these random numbers in the order they were generated. 
		} else {
			cout << a[i] << ".\n" << endl;
		}
	}
	
	
	for (int i = 0; i <= 8; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	cout << "After sorting: ";
	for (int i = 0; i < 10; i++)
	{
		if (i <= 8)
		{
			cout << a[i] << " "; // This if statement within this for loop will print out these random numbers in ascending order as they've been filtered through the couple for loops before this. 
		}
		else {
			cout << a[i] << ".\n" << endl;
		}
	}

	cout << "Press any key to return to menu...";
	cin.ignore();
	cin.get();
	
	return 0;
};//Done

float Tests::FloatSorter(float b[10])
{
	b[] = {myinf, -myinf, 0, 1, 3.4, -5};
	cout << "Float Sorter Function" << endl;
	cout << "Before sorting:";
	for(int i = 0; i < 10; i++)
	{
		cout << b[i] << " ";
	}
	//----------------
	//Sorts the floating point objects
	for (int i = 0; i <= 8; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			if (b[i] > b[j])
			{
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	//--------------
	cout << "\nAfter sorting: ";
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << " ";
	}

	cin.ignore();
	cin.get();
	return 0.0f;
}