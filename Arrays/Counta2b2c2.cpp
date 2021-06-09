#include<bits/stdc++.h>
using namespace std;
int hypoten( int x, int y){
    double m = pow(( pow(x,2) + pow(y,2)),0.5);
    // cout<<x<<" "<<y<<" "<<m<<"\n";
    if( int(m) == m)
        return m;
    
    return INT_MAX;
}

int Triplets( int n){
    int count = 0;
    for( int i=1; i <= n; i++){
        for( int j=1; j<=n; j++){
            if( hypoten(i,j) <= n)
                count++;
        }
    }
    return count/2;
}

int main()
{
 
    int n = 10;
 
    // function call
    cout << Triplets(100);
 
    return 0;
}