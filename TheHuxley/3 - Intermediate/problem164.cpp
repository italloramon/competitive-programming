#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int t = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        t += x - 1;
    }
    cout << t << endl;
    
    return 0;
}