#include<iostream>
 
int search( int arr[], int low, int high, int key){
    int mid = (high + low)/2;
    if( arr[mid] == key)
        return mid;
    if( arr[low] < arr[mid] ){
        if( key > arr[low] && key < arr[mid]){
            return search( arr , low, mid, key);
        }
        else 
            return search( arr , mid+1, high, key);
    }
    if( arr[mid+1] < arr[high] ){
        if( key > arr[mid+1] && key < arr[high]){
            return search( arr , mid+1 , high, key);
        }
        else 
            return search( arr , low, mid, key);
    }
}


int main() 
{ 
    int arr[] = { 3, 5, 1, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 2; 
    int i = search(arr, 0, n - 1, key); 
  
    if (i != -1) 
        std::cout << "Index: " << i << "\n"; 
    else
        std::cout << "Key not found"; 
} 