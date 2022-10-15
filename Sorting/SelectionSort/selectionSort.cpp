#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int size)
{
	for(int i=0; i<size; i++){
		int min=arr[i];
		for(int j=i; j<size; j++){
		//find the minimum element 
			if(min>arr[j])
				swap(min,arr[j]);
		}
		arr[i]=min;

	}

}

int main()
{

	int arr[]={6,7,9,9,8,6,5,3};
	SelectionSort(arr,8);
	for(int x: arr)
		cout<<x<<" ";

}



