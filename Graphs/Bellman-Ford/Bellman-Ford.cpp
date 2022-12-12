#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <getopt.h>

using namespace std;

int INFINITE = 1e9;

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

    //TODO Check if exists a negative cycle

    for (int i = 0; i < dist.size(); i++)
    {
        cout << "Distance from " << s << " to " << i << " -> " << dist[i] << endl; 
    }
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
    
	int u, v, e;
    vector<tuple<int, int, int>> graph;

	for(int i =0; i< m; i++)
	{
		cin >> u >> v >> e;
        graph.push_back(make_tuple(u, v, e));
	}

    int node = i;
    BellmanFord(graph, node, n, m);

    return 0;
}