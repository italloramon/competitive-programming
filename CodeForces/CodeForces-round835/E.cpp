#include <iostream>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];

    long long int numOnes = 0, total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1) numOnes++;
        if (arr[i] == 0)
        {
            total += numOnes;
        }
    }

    //Flip the first 0
    long long int total1 = 0, total2 = 0;
    numOnes = 0;
    long long int p, f = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
            p = i;
            f++;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1) numOnes++;
        if (arr[i] == 0)
        {
            total1 += numOnes;
        }
    }
    if (f != 0) arr[p] = 0;

    //Flip the last 1
    numOnes = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i] == 1)
        {
            arr[i] = 0;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1) numOnes++;
        if (arr[i] == 0)
        {
            total2 += numOnes;
        }
    }

    long long int r = max(total, total1);
    long long int t = max(r, total2);

    cout << t << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}