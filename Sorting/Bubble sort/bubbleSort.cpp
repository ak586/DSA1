#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			if(arr[i]>arr[j])
				swap(arr[i],arr[j]);
		}
	}

}

int main(int argc, char const *argv[])
{
	int arr[]={5,4,3,2,1};
	bubbleSort(arr,5);
	for(int x:arr)
		cout<<x<<" ";
    return 0;
}
