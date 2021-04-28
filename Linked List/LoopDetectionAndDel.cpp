#include<iostream>
#include "LinkedList.h"
#include<vector>
#include<stack>
#include<unordered_set>

void insertLoop( struct Node**start, int n){
    struct Node* temp= *start;
    struct Node* end;
    int count=1;
    while(temp->next!=NULL){
        if(count==n){
            
            end=temp;
        }
    count++;
    temp=temp->next;
    }
    temp->next = end;
}


bool detectLoop(struct Node* h)
{
    unordered_set<Node*> s;
    while (h != NULL) {
        // If this node is already present
        // in hashmap it means there is a cycle
        // (Because you we encountering the
        // node for the second time).
        if (s.find(h) != s.end())
            return true;
        std::cout<<s.find(h)<<" ";

        // If we are seeing the node for
        // the first time, insert it in hash
        s.insert(h);
 
        h = h->next;
    }
 
    return false;
}
int main(){
    struct Node* start=NULL;
    InsertInBeginning( &start, 2);
    InsertInBeginning( &start, 3);
    InsertInBeginning( &start, 7);
    InsertInBeginning( &start, 9);
    InsertInBeginning( &start, 10);
    InsertInEnd( &start, 14 );

    //This will form a loop at position 2 by attaching it to the end
    //Running this without deleting will be infinite.
    insertLoop( &start, 2 );

    std::cout<<detectLoop(start);
    //int index= detectAndDelete( &start );
    //Now to delete the loop

    
}