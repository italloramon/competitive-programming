#include <iostream>

using namespace std;

int main(){
    long long int k, n, w;
    cin >> k >> n >> w;

    long long int b = 0, t = 0;
    while (b < w)
    {
        b++;
        t = t + (b * k);
    }
    if (n - t >= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << t - n << endl;
    }
    
    return 0;
}
