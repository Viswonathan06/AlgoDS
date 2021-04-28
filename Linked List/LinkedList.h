#include<iostream>
#include<stdio.h> 
#include<stdlib.h> 
using namespace std;
struct Node{
    int number;
    struct Node* next;
};

//Inserting in the end of list
void InsertInEnd(struct Node** start,int number){
    struct Node* temp;
    struct Node* newNode;
    temp=*start;
    if(temp==NULL){
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->number=number;
        temp->next=NULL;
        *start=temp;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        
        newNode=(struct Node *)malloc(sizeof(struct Node));
        newNode->next=NULL;
        newNode->number=number;
        temp->next=newNode;
        }
}


void InsertInBeginning(struct Node** start, int number){
    struct Node* temp=*start;
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->number=number;
    newNode->next=NULL;
    if(temp==NULL){
        *start=newNode;
    }
    else{
        newNode->next=*start;
        *start=newNode;
    }

}

void sortLinkedList( struct Node* start ){
    struct Node* first= start;
    struct Node* temp=NULL;
    struct Node* second;
    int smallest;
    while( first!= NULL){
        second = first->next;
        int smallest = first->number;
        while( second != NULL ){

            if( smallest > second-> number){
                smallest = second->number;
            }
            second=second->next;
        }
        second = first->next;
        while( second != NULL ){
            if( second-> number == smallest ){
                int temp = first -> number;
                first -> number = smallest;
                second -> number = temp;
            }
            second=second->next;
        }
        first = first->next;
    }
}

int DeleteFromBeginning(struct Node** start){
    struct Node* temp,*s,*p;
    temp=*start;
    if(temp==NULL){
        return -1;
    }
    *start=temp->next;
    int n=temp->number;
    free(temp);  // Free memory  
    return n;
}





//Parses and outputs the list 
void parseList(struct Node* start){
    struct Node* temp;
    temp=start;
    cout<<"\n Front-";
    while(temp!=NULL){
        cout<<" "<<temp->number;
        temp=temp->next;

    }
}



//Returns size of list
int sizeOfStack(struct Node* start){
    struct Node* temp;
    temp=start;
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    return size;
}


//Smallest element 
int smallestElement(struct Node* start) 
{ 
    int min = start->number; 
    while (start != NULL) { 
        if (min > start->number) 
            min = start->number;
        start = start->next; 
    } 
    return min; 
} 




//Largest element 
int largestInList(struct Node* start){
    struct Node* temp=start;
    int max = temp->number; 
    while (temp != NULL) { 
        if (max < temp->number) 
            max = temp->number;
        temp = temp->next; 
    } 
    return max; 
}

//Pop
int DeleteFromEnd(struct Node** start){
    struct Node* temp,*s,*p;
    temp=*start;
    if(temp==NULL){
        return -1;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    int n=temp->next->number;
    free(temp->next);  // Free memory 
    temp->next = NULL; 
    return n;
}

void peek(struct Node** start){
    struct Node* temp,*s,*p;
    temp=*start;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    cout<<"\n"<<temp->next->number; 
}



//Searching the list
int searchList(struct Node* start, int number){
    struct Node* temp;
    temp=start;
    int position=-1;
    while(temp!=NULL){
        position++;
        if(number==position){
            return temp->number;
        }
        temp=temp->next;   
    }
    return 0;
}










