#include<iostream>

int LargestInArray( int arr[], int low, int high){
    int mid = (high + low)/2;
    if( low == high){
        return arr[mid];
    }
    
    if( arr[mid] < arr[mid-1] && arr[mid] > arr[mid+1]){
        return LargestInArray( arr, low, mid);
    }
    else if( arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1]){
        return LargestInArray( arr, mid+1, high);
    }
    return arr[mid];


}

int main() 
{ 
    int arr[] = {8, 10, 20, 80, 100, 200, 400, 500, 3, 2, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 20; 
    std::cout<<LargestInArray(arr, 0, n - 1);
} 