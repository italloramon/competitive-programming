#include <iostream>
#include <vector>
#include <getopt.h>

using namespace std;

int INFINITE = 1e9;

void FloydWarshall(int **dist, int n){
    int i, j, k;

    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for  (j = 0; j < n; j++)
            {
                if (dist[i][j] > (dist[i][k] + dist[k][j]) && (dist[k][j] != INFINITE && dist[i][k] != INFINITE))
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    cout << "The following matrix shows the shortest "
            "distances"
            " between every pair of vertices \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INFINITE)
                cout << "INF"
                     << " ";
            else
                cout << dist[i][j] << "   ";
        }
        cout << endl;
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

    vector<vector<pair<int,int>>> adj;
	int u, v, e;

    int node = i;
    int **dist;
    dist = new int *[n];
    for (int i = 0; i < n; i++)
    {
        dist[i] = new int[10];
    }
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j++)
        {
            if  (i != j) dist[i][j] = INFINITE;
            else dist[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i ++)
    {
        cin >> u >> v >> e;
        dist[u][v] = e;
    }

    FloydWarshall(dist, n);
    
    return 0;
}