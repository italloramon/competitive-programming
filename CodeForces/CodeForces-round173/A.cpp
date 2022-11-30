#include <iostream>

using namespace std;

int main(){
    int n;
    int c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s[0] == '+' || s[2] == '+')
        {
            c++;
        }
        else
        {
            c--;
        }
    }
    cout << c << endl;
    return 0;
}
