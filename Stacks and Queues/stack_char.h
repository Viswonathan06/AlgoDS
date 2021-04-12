#include<iostream>
#include<stdio.h> 
#include<stdlib.h> 
using namespace std;

struct Node{
    char number;
    struct Node* next;
};

void push(struct Node** start, int number){
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

//Parses and outputs the list 
void parseList(struct Node* start){
    struct Node* temp;
    temp=start;
    cout<<"\nBottom-";
    while(temp!=NULL){
        cout<<" "<<temp->number;
        temp=temp->next;

    }
    

}

bool isEmpty( struct Node* start ){
    if(start==NULL){
        return true;
    }
    else
    {
        return false;
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
char pop(struct Node** start){
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



char peek(struct Node* start){
    return start->number;
}


//Searching the list
int searchList(struct Node* start, char number){
    struct Node* temp;
    temp=start;
    int position=-1;
    while(temp!=NULL){
        position++;
        if(number==temp->number){
            return position;
        }
        temp=temp->next;   
    }
}











