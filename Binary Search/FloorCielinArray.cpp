#include<iostream>


void FloorCiel( int arr[], int low, int high, int key){
    
    //std::cout<<size<<"\n";
    int mid = (high + low)/2;
    if ( arr[mid] == key){
        std::cout<<"Floor == ciel == "<<arr[mid];
    }
    else if( arr[low] > key){
        std::cout<<"Floor =  -"<<"  Ciel= "<<arr[low];
    }
    else if( arr[high] < key){
        std::cout<<"Floor =  "<<arr[high]<<"  Ciel=  -";
    }


    if( arr[low] < key && arr[mid] > key){
        if( low+1 == mid){
            std::cout<<"Floor = "<<arr[low]<<"  Ciel= "<<arr[mid];
            return;
        }
        FloorCiel( arr, low, mid-1, key);
    }
    else if( arr[mid] < key && arr[high] > key){
        if( mid+1 == high){
            std::cout<<"Floor = "<<arr[mid]<<"  Ciel= "<<arr[high];
            return;
        }
        FloorCiel ( arr, mid+1, high, key);
    }
}

int main() 
{ 
    int arr[] = { 1, 2, 8, 10, 10, 12, 19 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 20; 
    FloorCiel(arr, 0, n - 1, key);
} 
