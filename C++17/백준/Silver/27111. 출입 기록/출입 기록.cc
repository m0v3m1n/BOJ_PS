#include <iostream>
#include <map>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, a, count = 0; 
    bool b;
    std::map<int, bool> M;
    
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> a >> b;
        
        if (M.find(a) == M.end()) // 없으면
        {
            if (b == 0) // 만약 없는데 나온 기록이 있다? --> 컽
                count++;
            M.insert({ a, b });
        }
        else // 있으면
        {
            if (M[a] == 1 && b == 1) // 있는데 다시 들어갔다면?
                count++;
            else if (M[a] == 1 && b == 0)
                M[a] = 0;
            else if (M[a] == 0 && b == 1)
                M[a] = 1;
            else
                count++;
        }
    }

    for (auto& K : M)
        if (K.second == 1)
            count++;

    std::cout << count;
    return 0;
}