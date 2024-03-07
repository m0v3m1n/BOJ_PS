#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, K, cnt = 0; std::cin >> N >> K;
    std::vector<int> primes;
    std::vector<bool> prime_check(K + 1, true);

    // K 이하까지만 찾으면 됨.
    for (int i = 2; i <= K; i++)
    {
        if (prime_check[i] == true)
        {
            for (int j = i * 2; j <= K; j += i)
                prime_check[j] = false;
        }
    } // 소수 탐색 완료.

    for (int i = 2; i <= K; i++)
        if (prime_check[i] == true)
            primes.push_back(i); // 소수 삽입.

    //for (auto& K : primes)
    //    std::cout << K << ' '; // 테스트용
    //std::cout << '\n';

    
    for (int i = 2; i <= N; i++) // 1부터 N까지, K-세준수 검사
    {
        int num = i;
        int tmp_cnt = 0;

        while (1)
        {
            int tmp = num;

            for (auto& L : primes)
                if (num % L == 0)
                {
                    num /= L;
                }

            if (num == tmp) break; // for문 돌기 전과 동일 --> if 해당하는 게 없었음 --> 인수분해 끝
        }

        if (num == 1)
            cnt++;
    }


    std::cout << cnt + 1;
    return 0;
}