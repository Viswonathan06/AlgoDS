#include<bits/stdc++.h>
using namespace std;

void aToiFunction( string s){
    int num = 0;
    int init = 0;
    bool neg = false;
    for( int i=0; i<s.length(); i++){
        if(isdigit(s[i])){
            if( init == 1 && s[i-2] == '-'){
                neg = true;
            }
            init++;
            int x = s[i] - '0';
            num = (num*10) + ( s[i]- '0');
        }
    }
    if( neg){
        num = num*-1;
    }
    cout<<num;
}

int main(){
    string s = "Geeks-23421 for too";
    aToiFunction(s);
}