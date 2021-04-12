#include<iostream>
#define size 10
int STACK[size];
int TOPone = -1;
int TOPtwo = size;

void pushStackOne( int n ){
    if( TOPone + 1 == TOPtwo ){
        std::cout<<"Coinciding!";
        return;
    }
    STACK[++TOPone] = n;
}

void pushStackTwo( int n ){
    if( TOPone + 1 == TOPtwo ){
        std::cout<<"Coinciding!";
        return;
    }
    STACK[--TOPtwo] = n;
}

int popStackOne(){
    if( TOPone == -1)
        std::cout<<"Underflow";
    return STACK[TOPone--];
}

int popStackTwo(){
    if( TOPtwo == size)
        std::cout<<"Underflow";
    return STACK[TOPtwo++];
}

void printOne(){
    for( int i= 0; i<=TOPone; i++){
        std::cout<<STACK[i]<<" ";
    }
    std::cout<<"\n";
}

void printTwo(){
    for( int i=size-1; i>=TOPtwo; i--){
        std::cout<<STACK[i]<<" ";
    }
    std::cout<<"\n";
}
int main(){
    pushStackOne(10);
    pushStackOne(20);
    pushStackOne(30);

    pushStackTwo(2);
    pushStackTwo(4);
    pushStackTwo(6);
    pushStackTwo(8);
    pushStackTwo(10);
    pushStackTwo(12);
    pushStackTwo(14);
    

    printOne();
    printTwo();

}



