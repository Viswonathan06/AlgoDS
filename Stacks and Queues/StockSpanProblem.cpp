#include<iostream>
#include<stack>


int* stockSpan( int stockprice[], int size){
    int Ans[20];
    Ans[0]=1;
    std::stack<int> stk;
    stk.push(0);
    for( int i= 1; i< size; i++){
        while(  !stk.empty() && stockprice[stk.top()] < *(stockprice+i)  ){
            stk.pop();
        }

        if( !stk.empty()){
            Ans[i] = i-stk.top();
        }
        else
        {
            Ans[i] = i+1;
        }

        stk.push(i);
        
    }
    for( int i = 0; i<size; i++){
        std::cout<<Ans[i]<<" ";
    }


}

int main(){

    int stock_price[] = { 10, 4, 5, 90, 120, 80 };
    int size = sizeof(stock_price)/sizeof(stock_price[0]);
    int Arr[30];
    int* arr = stockSpan( stock_price, size);
    
}