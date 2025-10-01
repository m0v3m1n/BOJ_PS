#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int U, N, P;
    std::string S;
    
    std::cin >> U >> N;
    std::vector<std::vector<std::string>> V(U + 1);

    for (int i = 0; i < N; i++)
    {
        std::cin >> S >> P;
        V[P].push_back(S);
    }

    bool flag = false;
    int idx = 0;
    int min = 999999;

    for (int i = 0; i <= U; i++)
    {
        if (0 < V[i].size() && V[i].size() < min)
        {
            flag = false;
            idx = i;
            min = V[i].size();
        }
        else if (V[i].size() == min)
            flag = true;
    } // 전체 순회 후, 가장 적은 수의 사람이 제시한 가격 idx, 중복 여부 flag 획득

    // 이때 중복이 된다면, idx는 제일 작은 경우로 유지되어 있기 때문에 idx는 중복된 가격 중 가장 작은 가격임.
    // --> idx 활용하면 두 경우 모두 출력 가능

    std::cout << V[idx][0] << ' ' << idx;
    return 0;
}