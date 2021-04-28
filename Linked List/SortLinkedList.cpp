#include<iostream>
#include "LinkedList.h"

//function added to linkedlist.h

int main(){
    struct Node * start=NULL;
    InsertInBeginning( &start, 0);
    InsertInBeginning( &start, 1);
    InsertInBeginning( &start, 0);
    InsertInBeginning( &start, 2);
    InsertInBeginning( &start, 1);
    InsertInEnd( &start, 2 );

    sortLinkedList( start );
    parseList( start );


}