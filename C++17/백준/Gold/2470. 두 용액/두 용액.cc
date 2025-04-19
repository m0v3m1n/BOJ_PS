#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, tmp, n_idx = 0, p_idx = 0, max = 2000000099;
    int zero_count = 0;
    std::pair<int, int> best;

    std::vector<int> negative;
    std::vector<int> positive;
    std::vector<std::pair<int, int>> duo;

    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        if (tmp > 0)
            positive.push_back(tmp);
        else if (tmp < 0)
            negative.push_back(tmp);
        else
            zero_count++;
    }

    std::sort(positive.begin(), positive.end());
    std::sort(negative.begin(), negative.end(), std::greater<int>());

    if (zero_count >= 2) // 0이 2개 이상 --> 0끼리 하면 됨.
        std::cout << "0 0";

    else if (zero_count == 1) // 0이 하나 --> 제일 용액값이 작은 걸로.
    {
        if (std::abs(negative[0]) < positive[0])
            std::cout << negative[0] << ' ' << 0;
        else
            std::cout << 0 << ' ' << positive[0];
    }

    else // 0 없음 --> 알고리즘 진행.
    {
        if (negative.size() == 0) // 산성만 있으면 산성끼리만
            std::cout << positive[0] << ' ' << positive[1];

        else if (positive.size() == 0) // 알칼리성끼리만 있으면 알칼리성끼리만
            std::cout << negative[1] << ' ' << negative[0];

        else // 그 외 : 이분탐색 진행
        {
            for (int i = negative.size() - 1; i >= 1; i--)
                duo.push_back({ negative[i], negative[i - 1] });
            duo.push_back({ negative[0], positive[0] });
            for (int i = 0; i < positive.size() - 1; i++)
                duo.push_back({ positive[i], positive[i + 1] }); // 모든 조합을 다 만들어놓은 뒤, 이분탐색 조합 제작.

            for (int i = 0; i < negative.size(); i++) // 알칼리성들에 대해
            {
                int idx = // 알칼리성보다 센 (가장 약한 산성 용액) 탐색.
                    std::lower_bound(positive.begin(), positive.end(), std::abs(negative[i])) - positive.begin();
                if (idx == 0) // 모두 i번째 용액보다 세다면?
                    duo.push_back({ negative[i], positive[idx] }); // 가장 약한 용액 선택
                else if (idx == positive.end() - positive.begin()) // 모두 i번째보다 약하다면?
                    duo.push_back({ negative[i] , positive[positive.size() - 1] }); // 가장 센 용액 선택
                else // 그 외 : 찾은 용액보다 약한 용액에 대해, 0에 가까운지 조사 후 duo에 push.
                {
                    if (std::abs(negative[i] + positive[idx]) < std::abs(negative[i] + positive[idx - 1]))
                        duo.push_back({ negative[i], positive[idx] });
                    else
                        duo.push_back({ negative[i], positive[idx - 1] });
                }
            }

            for (auto& K : duo) // 모든 조합에 대해
                if (std::abs(K.first + K.second) < max)
                {
                    best = { K.first, K.second };
                    max = std::abs(K.first + K.second);
                } // 최적 조합 탐색

            std::cout << best.first << ' ' << best.second;
        }
    }

    return 0;
}
