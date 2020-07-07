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
bool isDetectedCycle(bool visited[ ], bool stackCall [],int v, vector<int> adj[])
{
    if(visited[v] == false)
    {
    
        visited[v] = true;
        stackCall[v] = true;
        for(auto x : adj[v])
        {
            if(!visited[x] && isDetectedCycle(visited,stackCall,x,adj))
                return true;
            else if(stackCall[x])
                return true;
        }
    }    
    visited[v] = false;
    return false;
    
}
bool dfs(int v,vector<int> adj[])
{
    bool *visited = new bool[4];
    bool *stackCall = new bool[4];
    
    for(int i = 0; i < 4 ; i++)
    {
        visited[i] = false;
        stackCall[i] = false;
    }    
    for(int i = 0;i<4;i++)
    {
        if(isDetectedCycle(visited,stackCall,i,adj))
            return true;
    }
        
}



int main() {
	// your code goes here
	vector<int> adj[4];
	addEdge(adj,0, 1); 
    addEdge(adj,0, 2); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 0); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 3); 
    if(dfs(2,adj))
        cout<<"Have a cycle";
    else
        cout<<"No cycle";
	
	
	return 0;
}
