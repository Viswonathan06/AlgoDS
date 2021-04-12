#include<bits/stdc++.h>
using namespace std;
#define INT_MAX 100000

void display( vector<int> arr){
    for( int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
int pivot( vector<int>& arr, int l, int r){
    
    int pivot = arr[0];
    int i=l;
    int j = r;
    while( i< j){
        do{
            i++;
        }while( pivot > arr[i]);
        do{
            j--;
        }while( pivot < arr[j]);
        if( i<j)
            swap( arr[i], arr[j]);

    }
    swap( arr[0], arr[j]);
    cout<<"\n";
    display( arr);
    return j;
}

void quickSort( vector<int>& arr, int l, int r){
    if( l < r){
        int j = pivot( arr, l, r);
        quickSort(arr, l, j);
        quickSort(arr, j+1, r);
    }
    

}

int main(){
    vector<int> arr = { 10, 16, 8, 12, 15, 6, 3, 9, 5, INT_MAX};
    quickSort(arr, 0, arr.size()-1);
}