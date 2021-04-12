#include<bits/stdc++.h>
using namespace std;

char nonRepeating( string s){
    for( int i =0; i<s.length(); i++){
        s[i] = tolower(s[i]);
    } 
    cout<<s;
    vector<int> count(26, 0);
    for( int i =0; i<s.length(); i++){
        int index = s[i]%97;
        count[index]++;
    } 
    for( int i =0; i<s.length(); i++){
        if( count[s[i]%97] == 1){
            return s[i];
        }
    }
    
}
int main(){
    string s = "GeeksForGeeks";
    int a = nonRepeating( s);
    char m = char(a);
    // int a = 'z';
    // a=a%97;
    // cout<<a;
        
    printf("%c",m);
}