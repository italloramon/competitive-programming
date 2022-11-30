#include <iostream>
 
int main(){
    int t, a, b, c;
    std::cin >> t;
    while (t > 0)
    {   
        std::cin >> a >> b >> c;
        if (a == b + c || b == a + c || c == a + b)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
        t--; 
    }
}
