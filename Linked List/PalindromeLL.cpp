#include<iostream>
#include "LinkedList.h"

void reverseList( struct Node** start ){
    struct Node* prev, *curr, *after;
    curr=*start;
    prev=NULL;
    after=curr->next;
    while(curr!=NULL){
        curr->next=prev;
        prev=curr;
        curr=after;
        if(curr!=NULL)
        after=after->next;
    }
    *start=prev;
}

void isPalin( struct Node* start){
    bool isPalin=true;
    struct Node* temp=start;
    struct Node* newList=NULL;

    while(temp!=NULL){
        InsertInEnd( &newList , temp->number);
        temp=temp->next;
    }
    reverseList( &start );
    struct Node* temp2=start;
    while( newList!=NULL ){
        if(newList->number!=temp2->number){
            isPalin=false;
        }
        newList=newList->next;
        temp2=temp2->next;
    }
    if(isPalin==false){
        std::cout<<" Not Palindrome ";
    }
    else 
        std::cout<<" Is palindrome ";

}


int main(){
    struct Node * start=NULL;
    InsertInBeginning( &start, 2);
    InsertInBeginning( &start, 5);
    InsertInBeginning( &start, 5);
    InsertInBeginning( &start, 2);
    //InsertInBeginning( &start, );
    //InsertInEnd( &start, 14 );

    parseList( start );

    isPalin( start );
}