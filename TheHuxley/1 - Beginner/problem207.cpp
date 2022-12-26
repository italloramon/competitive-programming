#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int time[n];
    for (int i = 0; i < n; i++)
    {
        int t = 0;
        for (int j = 0; j < m; j++)
        {
            t += arr[i][j];
        }
        time[i] = t;
    }

    int iMenor = 0;
    int menor = time[iMenor];
    for (int i = 1; i < n; i++)
    {
        if (time[i] < menor)
        {
            menor = time[i];
            iMenor = i;
        }
    }

    cout << iMenor + 1 << endl;
}