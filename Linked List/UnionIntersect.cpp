#include <iostream>
#include "LinkedList.h"

Node* intersect( struct Node* first, struct Node* second ){
    struct Node* one=first;
    struct Node* two= second;
    struct Node* intersect= NULL;
    while( one!= NULL ){
        two = second;
        while( two!= NULL ){
            
            if( one->number==two->number ){
                InsertInBeginning( &intersect, one->number);
            }
            two=two->next;
        }
        one=one->next;
    }
    return intersect;
}

void Union( struct Node* first, struct Node* second ){
    struct Node* intrsct= NULL;

}

int main(){
    struct Node * start=NULL;
    struct Node* second= NULL;
    struct Node* intrsct= NULL;
    InsertInBeginning( &start, 2);
    InsertInBeginning( &start, 3);
    InsertInBeginning( &start, 7);
    InsertInBeginning( &start, 9);
    InsertInBeginning( &start, 10);
    InsertInEnd( &start, 14 );
    parseList( start );
    //DeleteFromAnywhere( &start, 9);
    parseList( start );

    InsertInBeginning( &second, 2);
    InsertInBeginning( &second, 4);
    InsertInBeginning( &second, 6);
    InsertInBeginning( &second, 5);
    InsertInBeginning( &second, 10);
    InsertInEnd( &second, 14 );
    intrsct = intersect( start, second );
    parseList( intrsct );
}