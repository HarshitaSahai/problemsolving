#include <bits/stdc++.h>
using namespace std;
void addEdge(vector <int> adj[],int u,int v)
{
    adj[u].push_back(v); 
}
void printGraph(vector<int> adj[])
{
    for(int i = 0;i<4;i++)
    {
        cout<<"Head "<<i<<" : ";
        for(auto x : adj[i])
        {
            cout<<x<<" ";
        }
    }
    cout<<endl;
}

void bfs(int v, vector<int> adj[])
{
    bool *visited = new bool[4];
    for(int i =0 ;i<4;i++)
        visited[i] = false;
    std::queue<int> q ;
    visited[v] = true;
    q.push(v);
    
    while(!q.empty())
    {
        v = q.front();
        cout<<v<<" ";
        q.pop();
        for(auto x : adj[v])
        {
            if(!visited[x])
            {
                visited[x] = true;
               //  cout<<visited[x];
                q.push(x);
            }
        }
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
    printGraph(adj);
    bfs(2,adj);
	
	
	return 0;
}
