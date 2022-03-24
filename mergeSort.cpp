#include<bits/stdc++.h>
using namespace std;
void merge(int arr[] , int si , int ei){
	int size = ei - si + 1;
	int mid = (si + ei)/2;

	int* output = new int[size];
	int i = si;
	int j = mid + 1;
	int k = 0;
//      merge sorted array
	while(i <= mid && j <= ei){
		if(arr[i] < arr[j]){
			output[k] = arr[i];
			i++;
			k++;
		}else{
			output[k] = arr[j];
			j++;
			k++;
		}
	}

	while(i <= mid){
		output[k] = arr[i];
		i++;
		k++;
	}
	while(j <= ei){
		output[k] = arr[j];
		j++;
		k++;
	} 


    int m = 0;
	for(int i = si; i <= ei; i++){
		arr[i] = output[m];
		m++;
	}

	delete []output;
}

void merge_Sort(int arr[] , int si , int ei){
	// base case
	if(si >= ei){
	   return;
	}

	int mid = (si+ei)/2;

	merge_Sort(arr , 0 , mid);
	merge_Sort(arr , mid+1 , ei);
	merge(arr , si , ei);
}


void mergeSort(int *arr , int size){
	merge_Sort(arr , 0 , size-1);
}


int main(){

    int arr[] = {6,5,4,3,2,1};
	mergeSort(arr , 6);
	for(int i = 0; i < 6; i++){
		cout<<arr[i]<<" ";
	}

}
