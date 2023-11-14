
// The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted part. This process is repeated for the remaining unsorted portion until the entire list is sorted.

#include<bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[], int n){

    int i, j, min_idx;

    for(int i=0; i<n;i++){

        min_idx = i;

        for(int j =i+1;j<n;j++){
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }

        if(arr[min_idx] != arr[i])
            swap(arr[min_idx], arr[i]);

    }

}


void print(int arr[], int n){
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    
}
int main(){

    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr)/sizeof(arr[0]);

    Selection_Sort(arr, n);
    cout<<"Sorted Array: "<<endl;
    print(arr, n);
    cout<<endl;

}

// Complexity Analysis of Selection Sort
// Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:

// One loop to select an element of Array one by one = O(N)
// Another loop to compare that element with every other Array element = O(N)
// Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2)