#include<iostream>
#include "LinkedList.h"
//felt sexy after finishing this. Idek why. Nice way of doing. Or maybe im dumb.
struct Node* sortedMerge( struct Node* first,struct Node* second ){
    struct Node* merged= NULL;
    sortLinkedList( first );
    sortLinkedList( second );
    // parseList( first );
    // parseList( second );
      
    while( second!= NULL && first!= NULL){
        if( first->number < second->number ){
            InsertInEnd( &merged , DeleteFromBeginning( &first ));
        }
        else{
            InsertInEnd( &merged , DeleteFromBeginning( &second ));
        }
    }
    while( first != NULL){
        InsertInEnd( &merged , first->number);
        first = first-> next;
    }
    while( second != NULL){
        InsertInEnd( &merged , second->number);
        second = second-> next;
    }

    return merged;
}


int main(){
    struct Node * start=NULL;
    struct Node* second= NULL;
    InsertInBeginning( &start, 2);
    InsertInBeginning( &start, 3);
    InsertInBeginning( &start, 7);
    InsertInBeginning( &start, 9);
    InsertInBeginning( &start, 10);
    InsertInEnd( &start, 11 );
    parseList( start );

    InsertInBeginning( &second, 1);
    InsertInBeginning( &second, 4);
    InsertInBeginning( &second, 6);
    InsertInBeginning( &second, 5);
    InsertInBeginning( &second, 8);
    parseList( second );

    struct Node* merged = sortedMerge( start , second);
    std::cout<<"\n Merged List :";
    parseList( merged);


}