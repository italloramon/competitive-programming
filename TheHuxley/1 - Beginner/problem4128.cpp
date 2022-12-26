#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    arr[0] = -1;
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }

    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        int u, k;
        cin >> u >> k;
        int p = u;
        for (int j = 0; j < k; j++)
        {
            p = arr[p];
            if (p == -1) break;
        }
        cout << p << endl;
    }
    return 0;
}