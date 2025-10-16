#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, H, W; std::cin >> N >> H >> W;
    
    std::vector<char> ans(N, '?');
    std::vector<char> pressed(N * W, '?');
    std::vector<std::string> V(H);

    for (int i = 0; i < H; i++)
        std::cin >> V[i];

    for (int i = 0; i < N * W; i++)
        for (int j = 0; j < H; j++)
            if (V[j][i] != '?')
                pressed[i] = V[j][i];

    for (int i = 0; i < N * W; i++)
        if (pressed[i] != '?')
            ans[i / W] = pressed[i];

    for (auto& K : ans)
        std::cout << K;

    return 0;
}