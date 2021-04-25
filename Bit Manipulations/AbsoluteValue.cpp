#include <bits/stdc++.h>

using namespace std;

int absolute( bitset<64> a){
    if((int)(a.to_ulong())>0){
        return a.to_ulong();
    }

    a = ~a;
    int b = (int)(a.to_ulong());
    return b+1;
}


int main()
{
    int x;
    cin>>x;
    bitset<64> a(x);
    cout<<absolute(x);

    // return tokens;
}