#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string strings[n];
    for (int i = 0; i < n; i++){
        cin >> strings[i];
    }
    for (int i = n-1; i >= 0; i--){
        cout << strings[i] << endl;
    }
    return 0;
}