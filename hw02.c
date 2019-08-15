// Mason McDaniel UTAID: 1001456342

#include "hw02-lib.h"
#include <stdio.h>

int main()
{
	int A[];
	int comparisons[];
	int avgComparisons = 0;

	for(int i=0; i<5; i++)
	{
		A* = randArray(100, 1, 2000, i+1);
		comparisons[i] = InsertionSort(A);
		avgComparisons += comparisons[i];
	}	
	avgComparisons = avgComparisons/5;
	printf("%f\n", avgComparisons);
}

int InsertionSort(A)
{
	int i = 1;
	int comparisons = 0;
	for(int j=2; j<(sizeof(A)/sizeof(int)); i++)
	{
		int key = A[j];
		// Insert A[j] into the sorted sequence
		i = j - 1;
		while((i > 0) && (A[i] > key))
		{
			comparisons++;
			A[i+1] = A[i];
			i = i-1;
		}
		A[i+1] = key;
	}
	return comparisons;
}