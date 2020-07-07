#include <bits/stdc++.h>
using namespace std;
void addEdge(vector <int> adj[],int u,int v)
{
    adj[u].push_back(v); 
    adj[v].push_back(u);
}

void printEdges(vector<int>  adj[])
{
    for(int i =0 ;i< 5;i++)
    {
        cout << "\n Adjacency list of vertex " << i<< "\n head "; 
        for (auto x : adj[i]) 
           cout << "-> " << x; 
    }
}



int main() {
	// your code goes here
	vector<int> adj[5];
	 addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    printEdges(adj);
	
	
	return 0;
}
