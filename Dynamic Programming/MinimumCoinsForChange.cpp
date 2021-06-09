#include<bits/stdc++.h>
using namespace std;
// { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, ...}
// { 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, ...}
int V;
bool findX( vector<int> arr, int x){
    for( auto a: arr){
        if( a == x)
            return true;
    }
    return false;
}
void getChange( vector<int> coins, int V){
    vector<int> dp(V+1);
    for( int i=1; i<dp.size(); i++){
        if( findX( coins, i)){
             dp[i] = 1;
             continue;
        }
        int min = INT_MAX;
        for( auto a: coins){
            if( a< i){
                int coinNo = dp[i-a]+ dp[a];
                if( coinNo < min)
                    min = coinNo;
            }
        }    
        dp[i] = min;      
        
    }
    cout<<dp[V]<<" \n";
}
int main(){

    vector<int> coins = { 9, 6, 5, 1};
    V = 11;
    getChange( coins, V);

}