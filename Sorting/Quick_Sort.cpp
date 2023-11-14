
// QuickSort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.

#include<bits/stdc++.h>
using namespace std;

int partition(int *arr, int low, int high){

    int pivot = arr[high];

    int i = (low - 1);

    int j;

    for(j=low; j<=high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]); // swapping itself to same position
        }
    }

    swap(arr[i+1], arr[high]);
    return (i+1);
}

void quicksort(int *arr, int low, int high){
    // base condition

    if(low < high){

        int pi = partition(arr,low,high);

    //Recursion Call
    //smaller element than pivot goes left and
    //higher element goes right
    quicksort(arr, low, pi-1);
    quicksort(arr, pi+1,high);

    }
}
int main(){
    int arr[] = {10,7,8,9,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,n-1);

    cout<<"sorted array"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}