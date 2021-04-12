#include<iostream>
#include<stack>


void LargestOnRight( int Arr[], int size ){
    std::stack<int> stk;
    stk.push(Arr[0]);
    for( int i= 1; i<size; i++){
        int count = -1;
        while( !stk.empty() && *(Arr+i) > stk.top()){
            count++;
            stk.pop();
        }
            
        while( count>=0 )
        {   
            std::cout<<Arr[i-count-1]<<" --> "<<Arr[i]<<"\n";
            count--;
        }
        stk.push(*(Arr+i));        
    }
    while(!stk.empty()){
        std::cout<<stk.top()<<" --> "<<-1<<"\n";
        stk.pop(); 
    }
       
}



int main(){

    int stock_price[] =  {11, 13, 21, 3};
    int size = sizeof(stock_price)/sizeof(stock_price[0]);
    int Arr[30];
    LargestOnRight( stock_price, size );    
}