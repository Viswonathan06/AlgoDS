#include<bits/stdc++.h>
 
using namespace std;
int lcs( string a, string b, int i, int j){
    cout<<a[i]<<" "<<b[j]<<"\n";
    if(i>=a.length() || j>= b.length())
        return 0;
    if( a[i] == b[j]){
        return 1+lcs(a,b,i+1, j+1);
    }

    return max(lcs(a,b,i+1,j),lcs(a,b,i,j+1));
}


int main()
{
    string a = "hasjhdvjhdvnbasvdnbasd";
    string b = "ahdxvav";
    cout<<lcs(a,b,0,0);
}