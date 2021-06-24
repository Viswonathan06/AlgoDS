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

    vector<vector<int>> edges = {{1,3 ,7},
                                 {1,2, 1},
                                 {2,4, 5},
                                 {3,4, 2},
                                 {2,5, 6},
                                 {5,7, 9},
                                 {5,6, 3},
                                 {6,8, 8},
                                 {7,8, 4}};
    int n = 8;
    vector<int> arr(n, -1);
    sort( edges.begin(), edges.end(), [](auto a ,auto b){
        return a[2]<b[2];
    });
    unionfind( edges, arr);
    for( int a: arr){
        cout<<a<<" ";
    }
}