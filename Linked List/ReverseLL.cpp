#include <iostream>
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

 
int getNode(Node* head, int& positionFromTail) {
    if(head == NULL){
        return --positionFromTail;
    }
    getNode(head->next , positionFromTail);
    if(positionFromTail==0){
        return head->number;
    }
    --positionFromTail;
    return 0;
    
}

int main(){
    struct Node * start=NULL;
    InsertInBeginning( &start, 3);
    

    parseList( start );
    std::cout<<"\n";
    int pos = 1;
    std::cout<<getNode( start, pos);

}