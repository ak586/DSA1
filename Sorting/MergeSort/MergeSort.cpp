#include<iostream>
using namespace std;

void merge(int arr[],int L,int mid , int R){
	//creating a temporary array to strore the merged array	
	int *temp=new int[R-L+1];
	//count of left side elements
	int LCount=mid-L+1;
	//count of elments present in right side
	int RCount=R-mid;
	//count for keeping track of number of elements inserted in temp
	int count=0;
	
	int i=0,j=0;
	int x=L;
	int y=mid+1;
	
        //merging arrays till one of them becomes empty
	while(i<LCount && j<RCount){
		if(arr[x]<arr[y]){
			temp[count]=arr[x];
			x++;
			i++;
		}
		else{
			temp[count]=arr[y];
			y++;
			j++;

		}
		count++;
	}
 	//if left array has elments left add these elements to temp
	
		while(i<LCount){
			temp[count++]=arr[x];
			i++;
			x++;
		}
	//if right side has elements left then do same as above
	
		while(j<RCount){
			temp[count++]=arr[y];
			y++;
			j++;
		}

	//copy elements to temp
	for(int a=0; a<LCount+RCount; a++){
		arr[L++]=temp[a];
}
}

void mergeSort(int arr[],int L,int R){

	if(L<R){
	int mid =(L+R)/2;
	//divide array in 2 parts
	mergeSort(arr,L,mid);//part 1 hey recursion sort part1 of the array 
	mergeSort(arr,mid+1,R);//part 2 and also sort part 2 of the array
	merge(arr,L,mid,R);
	}
}

int main(){

	int arr[]={4,0,2,1};
	cout<<"Before sorting "<<endl;
	for(int x: arr)
		cout<<x<<" ";
	cout<<endl;
	mergeSort(arr,0,3);
	cout<<"After Sorting "<<endl;
	for(int x: arr)
		cout<<x<<" ";


}
