#include <bits/stdc++.h>
using namespace std;

int ic_strcmp(string s1, string s2) 
{ 
    int i; 
    for (i = 0; s1[i] && s2[i]; ++i) 
    { 
        if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i]) 
        continue; 
        else
        break; 
    } 
    if (s1[i] == s2[i]) 
        return 0; 
    if ((s1[i] | 32) < (s2[i] | 32)) 
        return -1; 
    return 1; 
} 
  
// Driver program to test above function 
int main() 
{ 
    cout<<ic_strcmp("Geeks", "apple") <<endl; 
    cout<<ic_strcmp("", "ABCD")<<endl; 
    cout<<ic_strcmp("ABCD", "z")<<endl; 
    cout<<ic_strcmp("ABCD", "abcdEghe")<<endl; 
    cout<<ic_strcmp("GeeksForGeeks", "gEEksFORGeEKs")<<endl; 
    cout<<ic_strcmp("GeeksForGeeks", "geeksForGeeks")<<endl; 
    return 0; 
}