#include<bits/stdc++.h>

using namespace std;

void unionfind( vector<vector<int>> edges, vector<int>& arr){
    
    for( auto edge: edges){
        int root = edge[0];
        int leaf = edge[1];
        int parent = root;
        int child = leaf;

        while( arr[root] >= 0){
            root = arr[root];
        }
        
        while( arr[leaf] >= 0){
            leaf = arr[leaf];
        }
        if( root == leaf){
            cout<<parent<<" "<<child<<"\n";
            cout<<"not including\n";
            continue;
        }

        arr[root]+=arr[leaf];
        arr[leaf] = root;

    }
    cout<<true<<"\n";
}

int main(){

    vector<vector<int>> edges = {{0,2},
                                 {1,2},
                                 {2,0}};
    int n = 3;
    vector<int> arr(n, -1);
    unionfind( edges, arr);
    for( int a: arr){
        cout<<a<<" ";
    }
}