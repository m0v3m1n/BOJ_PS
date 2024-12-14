#include <iostream>
#include <string>

int main()
{
    int N, M; 
    std::string S;
    
    std::cin >> N;
    
    int s = 0, b = 0, l = 0, p = 0;
    
    for(int i = 0; i < N; i++)
    {
        std::cin >> S >> M;
        
        if (S == "STRAWBERRY")
            s += M;
        else if (S == "BANANA")
            b += M;
        else if (S == "LIME")
            l += M;
        else if (S == "PLUM")
            p += M;
    }
    
    if(s == 5 || b == 5 || l == 5 || p == 5)
        std::cout << "YES";
    else
        std::cout << "NO";
}