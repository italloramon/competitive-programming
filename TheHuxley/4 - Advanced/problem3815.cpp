#include <iostream>

using namespace std;

bool isLeapYear(int year){
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        } else
        {
            return true;
        }
    } else
    {
        return false;
    }
}

bool isValidDay(int day){
    if (day < 1 || day > 31)
    {
        cout << "Dia inexistente" << endl;
        return false;    
    }
    return true;
}

bool isValidMonth(int month){
    if (month < 1 || month > 12)
    {
        cout << "Mês inexistente" << endl;
        return false;
    }
    return true;
}

bool isValidYear(int year){
    if (year < 1900 || year > 2020)
    {
        cout << "Ano inexistente" << endl;
        return false;
    }
    return true;
}

bool isValidDayInMonth(int day, int month, int year){
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 12)
    {
        return true;
    } else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day != 31)
        {
            return true;
        }
    } else if (month == 2)
    {
        if (isLeapYear(year))
        {
            if (day >= 1 && day <= 29)
            {
                return true;
            } 
        } else
        {
            if (day == 29)
            {
                cout << "Esse ano não é bissexto" << endl;
                return false;
            } else if (day >= 1 && day <= 28)
            {
                return true;
            }
        }
    }
    cout << "Esse dia não existe nesse mês" << endl;
    return false;
}
void solve(){
    int d, m, y;
    cin >> d >> m >> y;
    if (isValidDay(d))
    {
        if (isValidMonth(m))
        {
            if (isValidDayInMonth(d, m, y))
            {
                if (isValidYear(y))
                {
                    cout << "Data Validada" << endl;
                }
            }
        }
    }
}

int main(){
    solve();
    return 0;
}