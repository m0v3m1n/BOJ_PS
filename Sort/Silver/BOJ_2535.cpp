// 백준 2535번, 아시아 정보올림피아드
// https://www.acmicpc.net/problem/2535

#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

bool compare(std::tuple<int, int, int> A, std::tuple<int, int, int> B)
{
    return std::get<2>(A) > std::get<2>(B);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, c, n, s, Fi, Se, Th;
    std::tuple<int, int, int> T;
    std::vector<std::tuple<int, int, int>> V;

    std::cin >> N;
    while (N--)
    {
        std::cin >> c >> n >> s;
        T = std::make_tuple(c, n, s);
        V.push_back(T);
    }

    std::sort(V.begin(), V.end(), compare);

//    for (auto& K : V)
//       std::cout << std::get<0>(K) << ' ' << std::get<1>(K) << ' ' << std::get<2>(K) << ' ' << '\n';

    Fi = std::get<0>(V[0]); std::cout << std::get<0>(V[0]) << ' ' << std::get<1>(V[0]) << '\n';
    Se = std::get<0>(V[1]); std::cout << std::get<0>(V[1]) << ' ' << std::get<1>(V[1]) << '\n';

    for (int i = 2; i < V.size(); i++)
    {
        if (Fi == Se && std::get<0>(V[i]) == Se)
            continue;
        else
        {
            std::cout << std::get<0>(V[i]) << ' ' << std::get<1>(V[i]) << '\n';
            break;
        }
    }
    return 0;
}
