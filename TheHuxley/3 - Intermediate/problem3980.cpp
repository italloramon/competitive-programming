#include <iostream>

using namespace std;

int fatorial(int n){
    if (n == 0){
        return 1;    
    } 
    int f = n * fatorial(n-1);
    return f;
}

int main(){
    int n;
    cin >> n;
    int f = fatorial(n);
    cout << f << endl;
    return 0;
}