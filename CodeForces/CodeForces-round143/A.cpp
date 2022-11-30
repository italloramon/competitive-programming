#include <iostream>

using namespace std;

int solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b + c >= 2)
    {
        return 1;
    }
    return 0;
}

int main(){
    int t;
    int m = 0;
    cin >> t;
    while (t--)
    {
        m = m + solve();
    }
    cout << m << endl;
    return 0;
}
