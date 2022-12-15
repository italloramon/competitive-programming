#include <iostream>
#include <vector>
#include <queue>
#include <getopt.h>

using namespace std;

int INFINITE = 1e9;

void printMST(vector<vector<pair<int,int>>> &adj, int n, int parent[]){
    cout << "Vertice -> Vertice" << endl; 
    int total = 0; 
    for (int i = 1; i < n; ++i)
    {
        printf("%d -> %d\n", parent[i], i);
        int len = adj[parent[i]].size();
        for (int j = 0; j < len; j++)
        {
            if (adj[parent[i]][j].first == i){
                total += adj[parent[i]][j].second;
            }
        }
    }
    cout << "Total Minimum Cost:" << total << endl;
}


void Prim(vector<vector<pair<int,int>>> &adj, int s){
    int n = adj.size();
    int parent[n];
    int key[n];
    bool inMST[n];

    for (int i = 0; i < n; i++)
    {
        key[i] = INFINITE;
        inMST[i] = false;
        parent[i] = -1;
    }

    key[s] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push(make_pair(0, s));

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        inMST[u] = true;
        
        int neighborsU = adj[u].size();
        for (int i = 0; i < neighborsU; i++)
        {
            int v = adj[u][i].first;
            int weight = adj[u][i].second;

            if (inMST[v] == false && key[v] > weight)
            {
                key[v] = weight;
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }
  
    printMST(adj, n, parent);

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

    vector<vector<pair<int,int>>> adj;
	int u, v, e;

    for (int i = 0; i < n; i++)
    {
        vector<pair<int, int> > row;
        adj.push_back(row);
    }

    // ---------- READ THE UNDIRECTED GRAPH ----------
	for(int i =0; i< m; i++)
	{
		cin >> u >> v >> e;
		adj[u].push_back(make_pair(v, e));
        adj[v].push_back(make_pair(u, e));
	}

    int node = i;
    Prim(adj, node);

    return 0;
}