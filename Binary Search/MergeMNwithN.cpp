#include <bits/stdc++.h>
using namespace std;

#define NA -1

void moveToEnd( vector<int> array, int size){
    for( int i=0; i<size; i++){
        if( array[i] == NA){
            array.erase(array.begin()+i);
            array.push_back(NA);
        }
    }
}

void merge(vector<int>& arr1, vector<int>& arr2, int m, int n){
    int i=0;
    int j = 0;
    vector<int> newArr;
    while( i < arr1.size() && j<arr2.size()){
            if( arr1[i] == NA){
                i++; continue;
            }
            if( arr2[j] == NA){
                j++; continue;
            }
            
            if( arr1[i]<arr2[j]){
                newArr.push_back(arr1[i++]);
            }
            else{
                newArr.push_back(arr2[j++]);
            }
        }
        
        while( i< arr1.size()){
            if( arr1[i] == NA){
                i++; continue;
            }
            newArr.push_back(arr1[i++]);
        }
        while( j< arr2.size()){
            if( arr2[j] == NA){
                j++; continue;
            }
            newArr.push_back(arr2[j++]);
        }
        
        arr1 = newArr;
    
}

void printArray( vector<int> arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
   /* Initialize arrays */
   vector<int> mPlusN= {2, 8, NA, NA, NA, 13, NA, 15, 20};
   vector<int> N = {5, 7, 9, 25};
    
   int n = sizeof(N) / sizeof(N[0]);
   int m = sizeof(mPlusN) / sizeof(mPlusN[0]) - n;
 
   /*Move the m elements at the end of mPlusN*/
   moveToEnd(mPlusN, m + n);
 
   /*Merge N[] into mPlusN[] */
   merge(mPlusN, N, m, n);
 
   /* Print the resultant mPlusN */
   printArray(mPlusN, mPlusN.size());
 
   return 0;
}