#include <iostream>

using namespace std;

int main(){
    long long int n,m,a;
    cin >> n >> m >> a;
    
    long long int i = n / a;
    long long int j = m / a; 
    
    if (n % a != 0)
    {
        i++;
    }
    if (m % a != 0)
    {
        j++;
    }
    
    long long int c = i * j;
    cout << c << endl;
    return 0;
}
