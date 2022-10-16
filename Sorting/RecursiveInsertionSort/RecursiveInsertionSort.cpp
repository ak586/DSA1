#include<bits/stdc++.h>
using namespace std;

void Insert(int arr[] ,int i){
	int temp= arr[i];
	i--;
	while(i>=0 && arr[i]>temp){
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=temp;

}

void RecursiveInsertionSort(int arr[],int size){

	int x=size-1;
	if(size==1)
		return ;
	else
		RecursiveInsertionSort(arr,size-1);
	Insert(arr,x);

}

int main(){

	int arr[]={3,2,1};
	int size=3;
	cout<<"Before sorting ";
	for(int x: arr)
		cout<<x<<" ";
	cout<<endl;
	RecursiveInsertionSort(arr,size);
	cout<<"After sorting: ";
	for(int x: arr)
		cout<<x<<" ";


}
