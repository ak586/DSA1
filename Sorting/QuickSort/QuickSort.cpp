#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
	int pivot = arr[start];
	int i = start;
	int j = end;
	while (i < j)
	{
		while (arr[i] <= pivot)
		{
			i++;
		}

		while (arr[j] > pivot)
		{
			j--;
		}
		if (i < j)
			swap(arr[i], arr[j]);
	}
	swap(arr[start], arr[j]);
	return j;
}

void QuickSort(int arr[], int start, int end)
{

	if (start < end)
	{

		int pivot = partition(arr, start, end);
		QuickSort(arr, start, pivot - 1);
		QuickSort(arr, pivot + 1, end);
	}
}

int main()
{

	int arr[] = {5, 4, 5, 2, 1};
	int n = 5;
	QuickSort(arr, 0, n - 1);
	for (int x : arr)
		cout << x << " ";
	return 0;
}
