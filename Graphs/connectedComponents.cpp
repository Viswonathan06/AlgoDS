//  THIS CODE I USED IN HACKEREARTH
#include<bits/stdc++.h>
using namespace std; 

void connected( vector<vector<int>> adj, unordered_map<int ,bool>& visited, int curr){

	if( visited[curr])
		return;
	visited[curr] = true;

	for( int a: adj[curr]){
		connected(adj, visited, a);
	}
}


int main(){
	int N;
	int e;

	cin>>N; 
	cin>>e;
	// cout<<"exec";

	vector<vector<int>> adj(N+1, vector<int>(0));
	unordered_map<int, bool> visited;
	for( int i=0; i<e; i++){
		int a, b;
		cin>>a;
		cin>>b;
// cout<<a<<b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int count = 0; 
	for( int i=1; i<N+1; i++){
		if( !visited[i]){
			count++;
			// cout<<count<<"\n";
			connected( adj, visited, i);
			// cout<<visited[i]<<"--\n";
			// break;
		}
		
	}
	cout << count;
	// return 0;


}