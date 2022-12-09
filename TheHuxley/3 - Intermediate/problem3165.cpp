#include <iostream>
#include <cmath>

using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}

int main(){
    solve();
    return 0;
}