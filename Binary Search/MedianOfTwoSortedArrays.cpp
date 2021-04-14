#include<bits/stdc++.h>
using namespace std;

int mod( int x){
    if( x <0){
        return -x;
    }
    return x;
}
int getMedian( vector<int> arr1,int l1, int h1, vector<int> arr2, int l2, int h2 ){

    int m1 = arr1[(l1+h1)/2];
    int m2 = arr2[(l2+h2)/2];
    if( m1 == m2 ){
        return m1;
    }
    if( mod(l1-h1) == 1 && mod(l2-h2) == 1){
        int m = max(arr1[l1], arr2[l2]);
        int n = min(arr1[h1],arr2[h2]);
        int x = (m+n)/2;
        return x;
    }
    if( m1 > m2){
        return getMedian( arr1, l1, (l1+h1)/2, arr2, (l2+h2)/2, h2); 
    }
    else{
        return getMedian( arr1, (l1+h1)/2, h1, arr2, l2, (l2+h2)/2);
    }

    
}

int main()
{
    vector<int> ar1 = {1, 12, 15, 26, 38};
    vector<int> ar2 = {2, 13, 17, 30, 45};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);

    if (n1 == n2){
        int x = getMedian(ar1, 0, ar1.size()-1, ar2, 0, ar2.size()-1 );
        cout<<"Median is "<<x;
    }
    else
        printf("Doesn't work for arrays of unequal size");
    return 0;
}