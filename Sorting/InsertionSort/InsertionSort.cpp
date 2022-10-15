#include<bits/stdc++.h>
using namespace std;
//place elements in it's correct position
void insertionSort(int arr[],int size){ 

	for(int i=0; i<size; i++){
		for(int j=0; j<size-1; j++){
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}


}

int main(){

	int arr[]={-1,-2,0,-10,2,1,0};
	int size=7;
	insertionSort(arr,size);
	for(int x: arr)
		cout<<x<<" ";
	return 0;

}
