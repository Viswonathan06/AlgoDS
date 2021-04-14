#include<bits/stdc++.h>

using namespace std;

int findMaximum( vector<int> arr, int l, int h){
    int mid = (l+h)/2;
    if( !(arr[mid] > arr[mid-1]) || !(arr[mid]<arr[mid+1]))
        return arr[mid];
    if( arr[mid] >= arr[l]){
        return findMaximum( arr, mid+1, h);
    }
    else if( arr[mid+1] <= arr[h] ){
        return findMaximum( arr, l, mid-1);
    }
    return -1;
}


int main()
{
    vector<int> arr = {1, 30, 40, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The maximum element is "<< findMaximum(arr, 0, n-1);
    return 0;
}