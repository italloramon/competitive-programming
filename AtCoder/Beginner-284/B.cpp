#include <iostream>

using namespace std;

void solve(){
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        if (a % 2 != 0){
            c++;
        }
    }
    cout << c << endl;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        solve();
    }
    
    return 0;
}