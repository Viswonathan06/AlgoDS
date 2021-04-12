#include<iostream>
#include<string>

void reverse( std::string word){
    if(word.length() == 0){
        std::cout<<word[0];
        return;
    }
    
    reverse(word.substr(1));
    std::cout<<word[0];
    
}

int main(){
    std::string word = "max mi lien";
    reverse( word );
}