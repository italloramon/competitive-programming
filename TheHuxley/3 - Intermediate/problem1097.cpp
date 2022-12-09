#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char s;
    cin >> s;
    double h;
    cin >> h;
    double w;

    cout << fixed;
    cout << setprecision(2);

    if (s == 'm' && h > 0)
    {
        w = (72.7 * h) - 58;
        cout << w << endl;
        
    } else if (s == 'f' && h > 0)
    {
        w = (62.1 * h) - 44.7;
        cout << w << endl;
    } else
    {
        if (s != 'm'  && s  != 'f')
        {
            cout << "O sexo informado eh invalido." << endl;
        } else 
        {
            cout << "Altura invalida." << endl;
        }
    }
    
    return 0;
}