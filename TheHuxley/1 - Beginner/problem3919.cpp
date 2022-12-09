#include <iostream>

int main(){
    int n;
    int c{};
    int i{};

    std::cin >> n;
    for (int i = 0; i < 20; i++)
    {
        int t;
        std::cin >> t;
        if (t != -1)
        {
            if (t == n)
            {
                c++;
            }   
        }
        else
        {
            break;
        }
    }
    std::cout << n << " aparece " << c <<  " vezes" << std::endl;
}
