#include <iostream>
#include <map>

using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int len = s.size();
        int c = 0;
        for  (int j = 0; j < len; j++)
        {
            if (s[j] == 'A' || s[j] == 'D' || s[j] == 'O' || s[j] == 'P' || s[j] == 'Q' || s[j] == 'R')
            {
                c++;
            } else if (s[j] == 'B')
            {
                c += 2;
            }
        }
        cout << c << endl;
    }
    return 0;
}