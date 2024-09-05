#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N; std::cin >> N;
    std::vector<int> V(N);
    
    for(int i = 0; i < N; i++)
        std::cin >> V[i];
    
    std::sort(V.begin(), V.end());
    for(int i = 1; i <= V[V.size() - 1]; i++)
        if(i != V[i - 1])
        {
            std::cout << i;
            return 0;
        }
    // 만약 다 돌았다?
    std::cout << V[V.size() - 1] + 1;
}