#include<bits/stdc++.h>

using namespace std;

pair<int,int> twoRepeated (int arr[], int N)
    {
        // pair<int, int> ans;
        map<int, int> umap;
        for( int i=0; i<N+2; i++){
            // cout<<arr[i]<<"\n";
            umap[arr[i]]++;
        }
        vector<int> ans;
        for( auto i: umap){
            if( i.second == 2){
                ans.push_back(i.first);
            }
        }
        // sort(ans.begin(), ans.end());
        return make_pair(ans[0], ans[1]);
        
    }

int main(){
    int arr[] = {1,2,1,3,4,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int N = size-2;
    pair<int, int> p = twoRepeated(arr, N);
    cout<<p.first<<" "<<p.second;
}