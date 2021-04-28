#include <bits/stdc++.h>

using namespace std;

int turnRightOff( bitset<64> a){
    int x = (int)a.to_ulong();
    x = x-1;
    bitset<64> b(x);
    bitset<64>n = (a&=b);
    return (int)n.to_ulong();
}


int main()
{
    int x;
    cin>>x;
    bitset<64> a(x);
    cout<<turnRightOff(x);
}