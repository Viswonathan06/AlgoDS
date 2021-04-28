#include<iostream>
#include<string.h>
#include<vector>
#include<stack>

using namespace std;

int fabulouspairs( vector<int> temp, int size){
	int count = 0;
	stack<int> stk;
	
	for( int i=0; i<size-1; i++){
		stk.push(temp[i]);
		for( int n= i+1; n<size; n++)
		{
			while( !stk.empty() && temp[n] > stk.top()){
				stk.pop();	
			}
			stk.push(temp[n]);
			if(stk.size()==1){
			count++;
			}
			
		}
		
			
	}
	return count;
}


int main(){
    
	vector<int> temp = { 1, 3, 2, 4};
	// while(getline(cin, rawInput, ' ') ){
	// 	int num = atoi( rawInput.c_str() );
	// 	temp.push_back(num);
	// }
	cout<<fabulouspairs(temp, temp.size());

}