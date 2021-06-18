#include<bits/stdc++.h>
using namespace std;

int lis( vector<int> a){

    int i=0, j=1, count =0;
    vector<int> dp(a.size(),1);
    while(j<a.size()){
        if(a[i]<a[j]){
            dp[j] =max(dp[i]+1, dp[j]);
            i++;
            if( i==j ){
                j++; i = 0;
            }
        }
        else{
            i++; 
            if( i == j){
                j++; i = 0;
            }
        }
    }
    sort(dp.begin(), dp.end(), greater<int>());
    return dp[0];
}

int main(){
    vector<int> arr = { -1, 3, 4, 5, 2, 2, 2, 2};
    cout<<lis(arr);
}