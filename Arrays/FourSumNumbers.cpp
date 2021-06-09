#include<bits/stdc++.h>
using namespace std;

bool included(vector<vector<int>> arr, vector<int> m  ){
        for( vector<int> a: arr){
            if( a == m){
                return true;
            }
        }
        return false;
    }
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
            // Store sums of all pairs
        // in a hash table
        // sort(arr.begin(), arr.end());
        int n = arr.size();
        int X = k;
        vector<vector<int> > ans;
        unordered_map<int, pair<int, int> > mp;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                mp[arr[i] + arr[j]] = { i, j };
     
        // Traverse through all pairs and search
        // for X - (current pair sum).
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int sum = arr[i] + arr[j];
     
                // If X - sum is present in hash table,
                if (mp.find(X - sum) != mp.end()) {
     
                    // Making sure that all elements are
                    // distinct array elements and an element
                    // is not considered more than once.
                    pair<int, int> p = mp[X - sum];
                    if (p.first != i && p.first != j
                        && p.second != i && p.second != j) {
                        // cout << arr[i] << ", " << arr[j] << ", "
                        //      << arr[p.first] << ", "
                        //      << arr[p.second];
                        vector<int> a = {arr[i],arr[j], arr[p.first],arr[p.second]};
                        sort(a.begin(), a.end());
                        if(!included(ans,a))
                        ans.push_back(a);
                        // i++; j++;
                        // return;
                    }
                }
            }
        }
        return ans;
    }

    int main(){
        vector<int> arr= { 10, 20, 30, 40, 1, 2 };
        int X = 91;
        
        // Function call
        vector<vector<int>> ans = fourSum(arr, X);
        for( vector<int> a: ans){
            for( int x : a){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
    }