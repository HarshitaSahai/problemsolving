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
bool isDetectedCycle(bool visited[ ],int parent ,int v, vector<int> adj[])
{
    if(visited[v] == false)
    {
    
        visited[v] = true;
       // stackCall[v] = true;
        for(auto x : adj[v])
        {
            if(!visited[x])
            {
                if(isDetectedCycle(visited,v,x,adj))
                    return true;
            }    
            else if(x != parent)
                return true;
        }
    }    
    //visited[v] = false;
    return false;
    
}
bool dfs(int v,vector<int> adj[])
{
    bool *visited = new bool[3];
    //bool *stackCall = new bool[4];
    
    for(int i = 0; i < 3 ; i++)
    {
        visited[i] = false;
      //  stackCall[i] = false;
    }    
    for(int i = 0;i<3;i++)
    {
        if(isDetectedCycle(visited,-1,i,adj))
            return true;
    }
        
}



int main() {
	// your code goes here
	vector<int> adj[3];
	//addEdge(adj,1, 0); 
    addEdge(adj,0, 1); 
    addEdge(adj,1, 2); 
    //addEdge(adj,0, 3); 
    //addEdge(adj,3, 4);  
    if(dfs(0,adj))
        cout<<"Have a cycle";
    else
        cout<<"No cycle";
	
	
	return 0;
}
