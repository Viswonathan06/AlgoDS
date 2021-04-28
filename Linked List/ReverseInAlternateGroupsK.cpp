//reverse in groups of K at a time.
#include <iostream>
#include "LinkedList.h"

struct Node* ReverseInKgroups( struct Node* start, int k){
    struct Node* temp= start;
    struct Node* curr, *prev, *after;
    int count=0;
    
    if( temp!= NULL ){
        prev=NULL;
        curr=temp;
        after=curr->next;
        while( count!=k && curr!= NULL ){
            curr->next = prev;
            prev = curr;
            curr= after;
            if(curr!=NULL)
            after = after->next;
            count++;
        }
        temp->next=curr;
        int n=0;
        while(curr!=NULL && n!=k ){
            curr = curr->next;
            prev = prev->next;
            temp = temp->next;
            after = after->next;
            n++;
        }


        temp->next = ReverseInKgroups( curr , k);
        return prev;
    }
    else
    {
        return NULL;
    }
    
}

int main(){
    struct Node * start=NULL;
    InsertInBeginning( &start, 2);
    InsertInBeginning( &start, 3);
    InsertInBeginning( &start, 7);
    InsertInBeginning( &start, 9);
    InsertInBeginning( &start, 10);
    InsertInBeginning( &start, 8);
    InsertInEnd( &start, 14 );
    InsertInEnd( &start, 12 );
    InsertInEnd( &start, 17 );

    struct Node* rev= ReverseInKgroups( start, 3 );
    parseList ( rev );
}