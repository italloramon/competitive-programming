#include <iostream>
#include <vector>
#include <queue>
#include <getopt.h>
#include <bits/stdc++.h>

using namespace std;

int INFINITE = 1e9;

vector<int> Dijkstra(vector<vector<pair<int,int>>> &adj, int s){
    vector<int> dist;
    vector<int> parent;
    int len = adj.size();
    for (int i = 0; i < len; i++)
    {
        dist.push_back(INFINITE);
        parent.push_back(-1);
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push(make_pair(s, 0));
    dist[s] = 0;

    while (!pq.empty())
    {
        int u = pq.top().first;
        pq.pop();

        int neighborsU = adj[u].size();
        for (int i = 0; i < neighborsU; i++)
        {
            int v = adj[u][i].first;
            int weight = adj[u][i].second;

            if (dist[v] > dist[u] + weight)
            {
                parent[v] = u;
                dist[v] = dist[u] + weight;

                pq.push(make_pair(v, dist[v]));
            }
        }
    }
    return dist;
}

int main(int argc, char** argv){

    int opt, f = 0, o = 0, i = 0, h;
    char* input; 
    char* output;
    while ((opt = getopt(argc,argv,"f:do:di:dh")) != EOF)
    {
        switch(opt)
        {
            case 'f': f = 1; input = optarg; break;
            case 'o': o = 1; output = optarg; break;
            case 'i': i = atoi(optarg); break;
            case 'h': printf("Usuage is\n -h : for help\n -f <input.in> : for indicates the file for input\n -o <output.out> : for indicate the file that will be saved the result\n -i: for indicate the start vertice ");
            case '?': fprintf(stderr, "Type -h for help\n");
            default: cout<<endl; abort();
        }
    }


    if (f == 1) freopen(input, "r", stdin);
    if (o == 1) freopen(output, "w", stdout);


    int n, m;
	cin >> n >> m;

    vector<vector<pair<int,int>>> adj;
	int u, v, e;

    for (int i = 0; i < n; i++)
    {
        vector<pair<int, int> > row;
        adj.push_back(row);
    }

	for(int i =0; i< m; i++)
	{
		cin >> u >> v >> e;
		adj[u].push_back(make_pair(v, e));
	}

    vector<int> dist;
    int node = i;
    dist = Dijkstra(adj, node);
    for (int i = 0; i < dist.size(); i++)
    {
        cout << "Distance from " << node << " to " << i << " -> " << dist[i] << endl; 
    }

    return 0;
}