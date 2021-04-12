#include<iostream>

int BinarySearch( int arr[], int first, int last, int element){
    int mid= (first+last)/2;
    int pos;
    if( arr[mid]== element)
        return mid;
    else if ( element < arr[mid] && first>last ){
        last = mid-1;
        return BinarySearch( arr , first, last, element);
         
    }
    else if (element > arr[mid]  && first>last ){
        first=mid+1;
        return BinarySearch( arr , first, last, element);
         
    }
    else return -2;
}

int main(){

    int arr[]={ 2, 3, 4, 5, 6, 7, 9, 11, 15 };
    int size= sizeof(arr)/sizeof(arr[0]);
    std::cout<<size;
    std::cout<<"\nPosition is :"<<BinarySearch( arr, 0, size, 6)+1;


}