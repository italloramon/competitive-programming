#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int n, m;
    vector<int> graph[n+1];
    for (int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(graph, 1);
}

void dfs(vector<int>* graph, int v){
    for (int i = 1; i < graph->size(); i++){
        cout << i << endl;
        
    }
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        solve();
    }
    
    return 0;
}