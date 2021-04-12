// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


 // } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    
    struct CompareHeight {
        bool operator()(int const& p1, int const& p2)
        {
            return p1 > p2;
        }
    };
    
    vector<int> display(
    priority_queue<int, vector<int>, CompareHeight> g)
    {   vector<int> ans;
        // priority_queue<node*, vector<node*>, CompareHeight> g = gq;
        while (!g.empty()) {
            ans.push_back(g.top());
            g.pop();
        }
        return ans;
    }
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        priority_queue<int, vector<int>, CompareHeight> pq;
        for( int i=0; i<arr.size(); i++){
            // int x = arr[i].size();
            for( int j=0; j<arr[i].size();j++){
                pq.push(arr[i][j]);
            }
        }
        vector<int> array = {};
        array =  display(pq);
        return array;
    }
};

// { Driver Code Starts.

int main()
{
	int t = 1;
	// cin>>t;
	while(t--){
	    int k = 3;
	    // cin>>k;
	    vector<vector<int>> arr (N, vector)
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}





  // } Driver Code Ends