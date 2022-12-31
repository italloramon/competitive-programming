#include <iostream>

using namespace std;

int getFator(int n, int m){
    int f = 1;
    while (true){
        int a = m * (f-1);
        int b = m * (f);
        if (n >= a && n <= b)
        {
            break;
        }
        f++;
    }
    return f;
}
int main(){
    int n;
    cin >> n;
    int places[n], times[n];
    for (int i = 0; i < n; i++){
        cin >> places[i];
    }
    for (int i = 0; i < n; i++){
        cin >> times[i];
    }

    int t = 0;
    for (int i = 0; i < n; i++){
        if (t % times[i] == 0){
            t += places[i];
        } else {
            int d;
            int f = getFator(t, times[i]);
            d = t - f * times[i];
            t += abs(d) + places[i];
        }
    }
    cout << t << endl;
    return 0;
}