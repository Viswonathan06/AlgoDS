#include<bits/stdc++.h>
using namespace std;

vector<int> twoOddNum(int Arr[], int N)  
{
    vector<int> ans;
    unordered_map<int, int> umap;
    
    for( int i=0; i<N; i++){
        umap[Arr[i]]++;
    }
    for( auto i: umap){
        if( i.second % 2 != 0){
            ans.push_back(i.first);
        }
    }
    sort( ans.begin(), ans.end(), greater<int>());
    
    return ans;
}

int main(){

    int array[] = { 2, 3, 3, 5, 1, 5, 6, 6};
    int size = sizeof(array)/sizeof(array[0]);
    vector<int> ans = twoOddNum(array, size);
    for( int a: ans){
        cout<<a<<" ";
    }
}