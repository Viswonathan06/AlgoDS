#include<iostream>
#include<math.h>

void outputBinary( int n){
    int i = 0;
    for( i = sizeof(int)*8-1 ; i>=0; i--){
        if( n & (1u << i )){
            std::cout<<1;
        }
        else
        {
            std::cout<<0;
        }
        
    }
    std::cout<<"\n";
}

unsigned int reverseBit( unsigned int n ){
    int i = 0;
    unsigned int number= 0;
    for( i = sizeof(int)*8-1 ; i>=0; i--){
        if( n & (1u << i )){
            number+= pow(2,sizeof(int)*8-1 -i);
        }
               
    }
    return number;
}

int numberOfOnes( unsigned int n){
    int count= 0;
    while( n > 0){
        unsigned int temp = n-1; //This subtracts one from the number
        count++;
        //We notice that if we subtract one, all the bits till the least significant 1 are 
        //inverted. So we do this till the number is 0, i.e all the 1's are flipped, and
        //count how many time we did. 
        //THis is the Brian Kernighan’s Algorithm

        n = n & temp; //We bitwise AND to eliminate the one we just accounted for. 
    }
    return count;
}

int numberOfBitsToFlipToMake_A_equal_To_B( unsigned int A, unsigned int B){
    unsigned int XOR= (A & ~B) | ( ~A & B );
     return numberOfOnes(XOR);
}

//Left shifted by 3 and first 3 bits are put back in last
void rotateBinary( unsigned int n){
    //Left rotation of n = 11100101 by 3 makes n = 00101111
    // (
    outputBinary(n);
    unsigned int output = 0;
    for( int i= 3; i>0; i--){
        if( n & (1u <<  sizeof(int)*8-1 )){
            n = (n << 1) | 1u;
            outputBinary(n);
            
        }
        else
        {
            n = n<<1;
            outputBinary(n);
        }
        
    }
    outputBinary(n);
}


int main(){
    unsigned int number = 1;
    number = number << 2;
    std::cout<<number<< std::endl;
    outputBinary(5);
    std::cout<<"\n"<<reverseBit( 1);
    std::cout<<"\n"<<numberOfOnes(2)<<"\n";

    std::cout<<"\n"<<numberOfBitsToFlipToMake_A_equal_To_B( 7, 10)<<"\n";
    rotateBinary(5);

}