// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends



class Solution
{
    public:
    struct CompareHeight {
        bool operator()(int const& p1, int const& p2)
        {
            return p1 > p2;
        }
    };
    priority_queue<int, vector<int>, CompareHeight> heap;
    //Function to insert heap.
    void insertHeap(int &x)
    {   
        heap.push(x);
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    
    
    //Function to return Median.
    double getMedian()
    {
        int x = heap.size()/2;
        priority_queue<int, vector<int>, CompareHeight> temp = heap;
        priority_queue<int, vector<int>, CompareHeight> first;
        priority_queue<int> second;
        
        int count = 1; 
        while( temp.size() > x){
            second.push(temp.top());
            temp.pop();
        }
        
        while(temp.size() > 0){
            first.push(temp.top());
            temp.pop();
        }
        if( first.size() == second.size()){
            double sum = first.top()+ second.top();
            return sum/2;
        }
        else{
            if(first.size()>second.size())
                return first.top();
            else
                return second.top();
        }
        
        
    }
        
};


// { Driver Code Starts.

int main()
{
    int n;
    int t = 1;
    // cin>>t;
    while(t--)
    {
    	Solution ob;
        n = 4;
        int x[] = { 5, 15, 1, 3};
    	// cin >> n;
    	for(int i = 0;i< n; ++i)
    	{
    		// cin >> x[i];
    		ob.insertHeap(x[i]);
    	    cout <<"Median : "<< floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends1
