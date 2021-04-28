#include <iostream>
#include "LinkedList.h"


void deleteAlternate( struct Node** start ){
    struct Node* temp=*start;

    while(temp->next!=NULL){
        struct Node* p=temp->next->next;
        delete(temp->next);
        temp->next=p;
        temp=temp->next;
        if(temp==NULL){
            return;
        }
    }
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
    deleteAlternate(  &start );
    parseList( start );
}