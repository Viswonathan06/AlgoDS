#include <bits/stdc++.h>

using namespace std;




void print_last_lines( string s, int n){
    string t = strtok(NULL,"\n");
    cout<<t;
}

int main(void) 
{ 
    string str1 ="str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7\nstr8\nstr9"
                "\nstr10\nstr11\nstr12\nstr13\nstr14\nstr15\nstr16\nstr17"
                "\nstr18\nstr19\nstr20\nstr21\nstr22\nstr23\nstr24\nstr25"; 
    // char *str2 ="str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7"; 
    // char *str3 ="\n"; 
    // char *str4 = ""; 
  
    print_last_lines(str1, 10); 
    cout << "-----------------\n"; 
  
    // print_last_lines(str2, 10); 
    // cout << "-----------------\n";
  
    // print_last_lines(str3, 10); 
    // cout << "-----------------\n";; 
  
    // print_last_lines(str4, 10); 
    // cout << "-----------------\n";
  
    return 0; 
} 
  