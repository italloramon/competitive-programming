#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <getopt.h>

using namespace std;

int INFINITE = 1e9;

void printDist(vector<int> dist, int node, int len){
    for (int i = 0; i < len; i++)
    {
        if (dist[i] != INFINITE)
        {
            cout << "Distance from " << node << " to " << i << " -> " << dist[i] << endl; 
        } else
        {
            cout << "Distance from " << node << " to " << i << " -> INF" << endl;
        }
    }
}

void BellmanFord(vector<tuple<int, int, int>> &graph, int s, int n, int m){
    vector<int> dist;
    vector<int> pre;

    for (int i = 0; i < n; i++)
    {
        dist.push_back(INFINITE);
        pre.push_back(-1);
    }

    dist[s] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int u = get<0>(graph[j]);
            int v = get<1>(graph[j]);
            int weight = get<2>(graph[j]);

            int tempDistance = dist[u] + weight;

            if (tempDistance < dist[v])
            {
                dist[v] = tempDistance;
                pre[v] = u;
            }
        }
    }

    //Check if exists a negative cycle
    for (int i =0; i < m; i++)
    {
        int u = get<0>(graph[i]);
        int v = get<1>(graph[i]);
        int weight = get<2>(graph[i]);

        if (dist[u] != INFINITE && dist[u] + weight < dist[v])
        {
            cout << "Graph contains a negative cycle!" << endl;
            return;
        }
    }

    printDist(dist, s, n);
}

int main(int argc, char** argv){

    // ---------- READ THE COMMAND LINES ----------
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
            case 'h': printf("Usuage is\n -h : for help\n -f <input.in> : for indicates the file for input\n -o <output.out> : for indicate the file that will be saved the result\n -i: for indicate the start vertice\n");
            case '?': fprintf(stderr, "Type -h for help\n"); return 1;
            default: cout<<endl; abort();
        }
    }
    if (f == 1) freopen(input, "r", stdin);
    if (o == 1) freopen(output, "w", stdout);

    
    // ---------- INITIALIZE THE LIST OF ADJACENCY ----------
    int n, m;
	cin >> n >> m;
    
	int u, v, e;
    vector<tuple<int, int, int>> graph;

	// ---------- READ THE DIRECTED GRAPH ----------
    for(int i =0; i< m; i++)
	{
		cin >> u >> v >> e;
        graph.push_back(make_tuple(u, v, e));
	}

    int node = i;
    BellmanFord(graph, node, n, m);

    return 0;
}