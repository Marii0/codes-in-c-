#include "bits/stdc++.h"
using namespace std;

const int N = 26;
bool visited[N];
vector<char> adj[N];

void dfs(char node)
{
    // preorder
    visited[node] = 1;

    // inorder
    for (auto it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (visited[*it])
        {
        }
        else
        {
            dfs(*it);
        }
    }

    // postorder
    
}

int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        char max, x, y;
        int cont=0;

        cin >> max;

        for (int i = 'A'; i <= max; i++)
        {
            visited[i] = false;
        }

        while (cin>>x>>y)
        {
            adj[x].push_back(y);
            adj[y].push_back(x); 
        }
        

        for (int i = 'A'; i<=max; i++)
        {

            if(visited[i]!=1){
                dfs(i);
                cont++;
            }
            

        }
        cout << cont << endl;
        for (int i = 'A'; i <= 'Z'; i++)
        {
            adj[i].clear();   
        }
        
    }
    
    
    
}

