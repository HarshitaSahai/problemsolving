#include <bits/stdc++.h>
using namespace std;
void addEdge(vector <int> adj[],int u,int v,int in[])
{
    adj[u].push_back(v); 
   // cout<<in[v];
    in[v]++;
}

void topologicalSort(vector<int> adj[], int in[])
{
    queue<int> q;
    int c = 0;
    vector<int> res;
    for(int i = 0;i<6;i++)
    {
        if(in[i] == 0)
            q.push(i);
    }
    while(!q.empty())
    {
        int cur  = q.front();
        res.push_back(cur);
        q.pop();
        for(auto x : adj[cur])
        {
            in[x]--;
            if(in[x] == 0)
                q.push(x);
        }
        c++;
    }
    if(c != 5)
        cout<<"Cycle ";
    else
    {
        for(auto x: res)
        {
            cout<<x<<" ";
        }
    }
}




int main() 
{
	vector<int> adj[6];
	int in[6] = {0};
 
    addEdge(adj,5, 2,in); 
    addEdge(adj,5, 0,in); 
    addEdge(adj,4, 0,in); 
    addEdge(adj,4, 1,in); 
    addEdge(adj,2, 3,in); 
    addEdge(adj,3, 1,in);  
    
    topologicalSort(adj,in);
	
	
	return 0;
}
