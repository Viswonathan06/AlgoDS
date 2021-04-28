#include <iostream>
#include "LinkedList.h"



void NthNodeFromEnd( struct Node* start, int n){
    struct Node* temp= start;
    int size = sizeOfStack(temp);
    int x=size-n;
    int pos=x;
    while(temp->next!=NULL && pos>0){
        pos--;
        temp=temp->next;
    }
    std::cout<<"\n"<<n<<" th node from end is : "<<temp->number;
}


int main(){
    struct Node * start=NULL;
    InsertInBeginning( &start, 2);
    InsertInBeginning( &start, 3);
    InsertInBeginning( &start, 7);
    InsertInBeginning( &start, 9);
    InsertInBeginning( &start, 10);
    InsertInEnd( &start, 14 );

    parseList( start );
    NthNodeFromEnd(start, 3);

    DeleteFromEnd( &start );
    parseList( start );
    NthNodeFromEnd(start, 3);
    
    




}