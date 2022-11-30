#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
    string a;
    string b;
    cin >> a >> b;
    
    for_each(a.begin(), a.end(), [](char & c){
        c = toupper(c);
    });

    for_each(b.begin(), b.end(), [](char & c){
        c = toupper(c);
    });

    if (a.compare(b) > 0)
    {
        cout << 1 << endl;
    } else if (a.compare(b) < 0)
    {
        cout << -1 << endl;
    } else
    {
        cout << 0 << endl;
    }
    
    return 0;
}
