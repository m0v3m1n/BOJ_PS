#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, K; std::cin >> N >> K;
    std::vector<int> V;
    std::string S, buffer;

    std::cin >> S;
    std::istringstream str(S);

    while (std::getline(str, buffer, ','))
        V.push_back(std::stoi(buffer));

    for (int i = 0; i < K; i++)
    {
        for (int j = 0; j < V.size() - 1; j++)
            V[j] = V[j + 1] - V[j];
        V.pop_back();
    }

    std::cout << V[0];
    for (int i = 1; i < V.size(); i++)
        std::cout << ',' << V[i];

    return 0;
}
