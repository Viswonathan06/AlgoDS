#include <iostream>
#include "LinkedList.h"

void recurrRev( struct Node* start ){
    struct Node* temp=start;
    if(temp->next==NULL){
        std::cout<<"-> "<<temp->number<<" ";
        return;
    }
    recurrRev( temp->next );
    std::cout<<temp->number<<" ";
    return;
}

int main(){
    struct Node * start=NULL;
    InsertInBeginning( &start, 2);
    InsertInBeginning( &start, 3);
    InsertInBeginning( &start, 7);
    InsertInBeginning( &start, 9);
    InsertInBeginning( &start, 10);
    InsertInEnd( &start, 14 );
    recurrRev( start );
    
}