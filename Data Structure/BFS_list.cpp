#include<bits/stdc++.h>

using namespace std;
vector<int> graph[10];
int node, edge, u, v, n;

void BFS(int source)
{
    queue<int>qq;
    int taken[10]={0};
    int distance[10];

    taken[source]=1;
    distance[source]=0;
    qq.push(source);

    while(!qq.empty())
    {
        int qFront=qq.front();

        for(int i=0; i<graph[qFront].size(); i++)
        {
            int activeNode = graph[qFront][i];
            if(!taken[activeNode])
            {
                distance[activeNode]=distance[qFront]+1;
                taken[activeNode]=1;
                qq.push(activeNode);
            }
        }
        qq.pop();
    }
    for(int i=1; i<=node; i++)
    {
        cout<<source<<" to "<<i<<" distance "<<distance[i]<<"\n";
    }
}

int main()
{
    cout<<"Enter Node & Edge: \n";
    while(cin>> node>> edge)
    {
        cout<<"Now Input Adjacency List: \n";
        for(int i=0; i<edge; i++)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        cout<<"Now Input Starting node: \n";
        cin>> n;
        BFS(n);
    }
}
