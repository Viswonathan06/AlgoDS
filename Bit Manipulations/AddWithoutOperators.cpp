#include <bits/stdc++.h>

using namespace std;

int absolute( bitset<64> a, bitset<64> b){
    bitset<64> x = a^=b;
    cout<<x.to_ulong()<<"\n";
    bitset<64> y = a&=b;
    cout<<y<<"\n";
    cout<<x<<"\n";
    return y.to_ulong();
    
}


int main()
{
    int x = 10;
    int y= 5;
    bitset<64> a(x);
    bitset<64> b(y);
    
    cout<<absolute(a,b);

    // return tokens;
}