#include<iostream>
#include "LinkedList.h"

void DeleteListFull( struct Node** start){
    struct Node* temp=*start;
    struct Node* t;

    while(temp!=NULL){
        std::cout<<"\nDeleting "<<temp->number<<" .. ";
        t=temp->next;
        free(temp);
        temp=t;
    }
    std::cout<<"\nList deleted. ";
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
    DeleteListFull( &start );
}