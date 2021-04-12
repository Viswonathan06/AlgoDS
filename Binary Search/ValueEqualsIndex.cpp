#include<iostream>

int FixedElement( int arr[], int low, int high ){
    int mid= (high + low)/2;
    if( low == high ){
        return -1;
    }
    if( arr[mid] == mid){
        return mid;
    }
    else if( arr[mid] > mid )
        return FixedElement( arr, low, mid);
    else if( arr[mid] < mid)
        return FixedElement( arr, mid+1, high);
    else return -1;
}
int main() 
{ 
    int arr[] = {-10, -5, 3, 4, 7, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 20; 
    std::cout<<FixedElement(arr, 0, n - 1);
} 