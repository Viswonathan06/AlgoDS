#include<iostream>
#include<math.h>


bool PowerOfTwo( int n){
    if( n==0 ){
        return false;
    }

    return ( ceil(log2(n)== floor(log2(n))));
}

int main(){

    if(PowerOfTwo(80)){
        std::cout<<"yes\n";
    }
    else
    {
        std::cout<<"no\n";
    }

    if(PowerOfTwo(32)){
        std::cout<<"yes\n";
    }
    else
    {
        std::cout<<"no\n";
    }
    
    
}