// Repl every elmnt with grtest elmnt on right side.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


void nextGreatest(int arr[], int size)
{
	int maxFromRight = arr[size - 1];
	arr[size - 1] = -1;

	for (int i = size - 2; i >= 0; i--)
	{
		int temp = arr[i];

		arr[i] = maxFromRight;

		if (maxFromRight < temp) maxFromRight = temp;

	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 16, 17, 4, 3, 5, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	nextGreatest(arr, size);
	printf("The modified array is: \n");
	printArray(arr, size);


    return 0;
}

