#include <iostream>
#include <iomanip>

using namespace std;

double operacao(char o, double a, double b){
    if (o == '+')
    {
        return a + b;
    } else if (o == '-')
    {
        return a - b;
    } else if (o == '*')
    {
        return a * b;
    } else if (o == '/')
    {
        return a / b;
    } 
}

int main(){
    cout << fixed << setprecision(3);

    double a, b;
    cin >> a >> b;
    char o;
    cin >> o;
    double result = operacao(o, a, b);
    cout << result << endl;
    while (o != '&')
    {
        double x;
        cin >> x;
        cin >> o;
        if (o == '&') break;
        if (x == 0  && o == '/')
        {
            cout << "operacao nao pode ser realizada" << endl;
        } else
        {
            result = operacao(o, result, x);
            cout << result << endl;
        }
    }

    return 0;
}