#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;
    char game; std::cin >> game;
    
    std::vector<std::string> V(N);
    for(int i = 0; i < N; i++)
        std::cin >> V[i];
    
    std::sort(V.begin(), V.end());
    V.erase(std::unique(V.begin(), V.end()), V.end());
    
    if(game == 'Y')
        std::cout << V.size();
    else if(game == 'F')
        std::cout << V.size() / 2;
    else if(game == 'O')
        std::cout << V.size() / 3;
}