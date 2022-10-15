#include<bits/stdc++.h>
using namespace std;
//place elements in it's correct position
void insertionSort(int arr[],int size){ 

	for(int i=1; i<size; i++){
		int temp=arr[i];
		int j=i-1;
		while(j>=0&& arr[j]>temp){
			arr[j+1]=arr[j];
	j--;	}		
		arr[j+1]=temp;
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
