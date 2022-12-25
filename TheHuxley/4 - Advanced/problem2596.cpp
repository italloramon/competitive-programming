#include <iostream>

using namespace std;

int main(){
    double h, r, p;
    cin >> h >> r >> p;

    float a = 2 * 3.14 * r * (h + r);
    float l = a / 3;
    float la = l / 5;
    float t = p * la;

    printf("%.6fm2\n%.6fl\n%.6f\nR$%.6f\n", a, l, la, t);

    return 0;
}