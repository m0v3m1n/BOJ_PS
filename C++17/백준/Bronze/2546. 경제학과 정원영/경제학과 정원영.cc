#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T;  std::cin >> T;

    while (T--)
    {
        int cnt = 0;
        long long N, M, tmp;
        std::cin >> N >> M;

        long long C = 0;
        long long E = 0;

        std::vector<long long> cS;

        for (int i = 0; i < N; i++)
        {
            std::cin >> tmp;
            C += tmp;
            cS.push_back(tmp);
        }

        for (int i = 0; i < M; i++)
        {
            std::cin >> tmp;
            E += tmp;
        }

        for (int i = 0; i < N; i++)
        {
            // C와 E의 평균은 각각 C/N, E/N임.
            // --> 그냥 cS[i] * N, eS[i] * N을 C, E랑 비교하면 평균을 잡아먹는지 확인 가능
            if (cS[i] * N < C && cS[i] * M > E) // C언어 수강생 평균 IQ보다 낮은데 경제학원론 수강생 평균 IQ보다 높으면 ++
                cnt++;
        }

        std::cout << cnt << '\n';
    }

    return 0;
}