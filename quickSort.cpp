#include<bits/stdc++.h>
using namespace std;
void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int *arr , int si , int ei){
    int pivot = arr[si];
    // finding min element which is smaller than pivoit element
    int countSmaller = 0;
    for(int i = si + 1; i <= ei; i++){
        if(pivot >= arr[i]){
            countSmaller++;
        }
    }

    int pivotIndex = si + countSmaller;
    // swap 
    swap(&arr[si] , &arr[pivotIndex]);

    int i = si;
    int j = ei;

    while(i < pivotIndex && j > pivotIndex ){
        if(arr[i] <= pivot){
            i++;
        }else if(arr[j] > pivot){
            j--;
        }else{
            swap(&arr[i] , &arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;

}

void quick_Sort(int *arr , int si , int ei){
    // Base case
    if(si >= ei){
        return;
    }

    int pI = partition(arr , si , ei);
    quick_Sort(arr , si , pI - 1);
    quick_Sort(arr , pI + 1 , ei);
}

void quickSort(int *arr , int size){
    quick_Sort(arr , 0  , size-1);
}


int main(){
    int arr[] = {7,5,4,3,2,1};
    quickSort(arr , 6);
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}