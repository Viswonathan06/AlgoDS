#include<iostream>
#include<string.h>


std::string EvenToEnd( std::string str){
    std::string even,odd;
    while( !str.empty()){
        even.append(str,0,1);
        //std::cout<<"lol.."<<str<<"\n";
        odd.append(str,1,1);
        str = str.substr(2);
        //std::cout<<even<<"\n"<<odd<<"\n";
    }
    even.append(odd);
    return even;
}
int main(){
    std::string str =  "a1b2c3d4e5f6g7h8i9j1k2l3m4";
    std::cout<<"end-> "<<EvenToEnd(str);
}