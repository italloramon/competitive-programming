#include <iostream>

using namespace std;

int main(){
    double n;
    cin >> n;

    if (n > 0.4) 
    {
        cout << "Grupo 1" << endl;
        cout << "Grupo 2" << endl;
        cout << "Grupo 3" << endl;
    } 
    else
    {
        if (n > 0.3) 
        {
            cout << "Grupo 1" << endl;
            cout << "Grupo 2" << endl;
        }
        else
        {
            cout << "Grupo 1" << endl;
        }    
    }

    return 0;
}