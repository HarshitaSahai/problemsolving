#include <bits/stdc++.h>
using namespace std;
void addEdge(vector <int> adj[],int u,int v)
{
    adj[u].push_back(v); 
}
void dfsRecursion(int v, bool visited[],vector<int> adj[])
{
    visited[v] = true;
    cout<<v<<" ";
    for(auto x : adj[v])
    {
        if(!visited[x])
            dfsRecursion(x,visited,adj);
    }
}

void dfs(int v,vector<int> adj[])
{
    bool *visited = new bool[5];
    for(int i = 0; i < 5 ; i++)
        visited[i] = false;
    dfsRecursion(v,visited,adj);
        
}



int main() {
	// your code goes here
	vector<int> adj[5];
	addEdge(adj,0, 1); 
    addEdge(adj,0, 2); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 0); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 3); 
    dfs(2,adj);
	
	
	return 0;
}
