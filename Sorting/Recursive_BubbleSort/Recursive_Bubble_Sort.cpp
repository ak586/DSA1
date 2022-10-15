#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int n){
	if(n==0)
		return;
	for(int i=0; i<n-1; i++)
	{
		if(arr[i]>arr[i+1])
			swap(arr[i],arr[i+1]);
	BubbleSort(arr,n-1);
}
}

int main(){
int arr[]={4,3,2,1};
BubbleSort(arr,4);
for(int x: arr)
	cout<<x<<" ";

	return 0;


}
