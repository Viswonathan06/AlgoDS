#include<bits/stdc++.h>
using namespace std;

void merge( vector<int>& arr, int l, int r ){
    int mid = (l + r) /2;
    int nL = mid-l+1;
    int nR = r-mid;
    vector<int> L (nL, 0);
    vector<int> R (nR, 0);

    int i, j, k;

    for( i = 0; i<nL; i++){
        L[i] = arr[l+i];
        // cout<<L[i]<<" ";
    } 
    for( j = 0; j<nR; j++){
        R[j] = arr[mid+1+j];
        // cout<<R[j]<<" ";
    }

    i = 0; k = l; j = 0;

    while( i<nL && j<nR){
        if( L[i]< R[j]){
            arr[k] = L[i];
            i++; k++;
        }
        else{
            arr[k] = R[j];
            j++; k++;
        }
    }

    while( i<nL){
        arr[k] = L[i];
        i++; k++;
    }
    while( j<nR){
        arr[k] = R[j];
        j++; k++;
    }
    // cout<<"\n";
    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<< " ";
    // }


}

void mergeSort( vector<int>& arr, int l, int r){
    if(l >= r){
        return;
    }
    int mid = l+(r-l)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr, l, r);
}



int main(){
    vector<int> arr = { 1, 4, 3, 2, 6, 7, 5, 9};
    mergeSort(arr,0, arr.size()-1);
    for( int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}