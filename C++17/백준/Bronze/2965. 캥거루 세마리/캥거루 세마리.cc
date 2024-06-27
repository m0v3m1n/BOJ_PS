#include <iostream>

int main()
{
    int a,b,c;
    std::cin >> a >> b >> c;
    
    int max = (b - a > c - b ? b - a : c - b);
    std::cout << max - 1;
}