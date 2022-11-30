#include <iostream>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    int t = 0;
    int m = 0;
    int a, b;
    while(n--){
        cin >> a >> b;
        t = t - a;
        t = t + b;
        
        if (t > m) {
            m = t;
        }
        
    }
    cout << m << endl;
    return 0;
}
