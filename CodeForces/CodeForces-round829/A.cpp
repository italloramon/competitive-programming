#include <iostream>

using namespace std;

void solve(){
    int n;
    int c = 0;
    char a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 'Q')
        {
            c++;
        }
        else
        {
            if (c > 0)
            {
                c--;
            }
        }
    }
    if (c == 0 && a != 'Q')
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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
