#include <iostream>
#include <vector>
#include <algorithm>

std::pair<int, int> spiralEndPosition(int N, int M)
{
    if (N == 1) return std::make_pair(0, M - 1);
    if (M == 1) return std::make_pair(N - 1, 0);

    int m = std::min(N, M);
    int ring = m / 2;         // 몇 겹이나 생기는가
    int leftover = m % 2;     // 남는 중심부의 형태 (0 = 짝수, 1 = 홀수)

    
    if (leftover == 1) // leftover = 1 : 중심부가 남아 그 부분을 순회하며 끝
        if (M == N)
            return { ring, ring };
        else if (N > M)
            return { N - 1 - ring, ring };
        else
            return { ring,  M - 1 - ring };
    else // leftover = 0 : 마지막 겹에서 끝남
        if (ring >= 1)
            return { ring - 1, ring };
}

int main()
{
    int N, M; std::cin >> N >> M;
    std::pair<int, int> p = spiralEndPosition(N, M);

    std::cout << p.first << ' ' << p.second;
    return 0;
}
