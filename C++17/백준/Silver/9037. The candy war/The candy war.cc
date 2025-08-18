#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int T, N; std::cin >> T;
    while (T--)
    {
        std::cin >> N;

        int count = 0;
        std::vector<int> V(N);
        std::vector<int> sub_V(N);
        for (int i = 0; i < N; i++)
            std::cin >> V[i];

        for (int i = 0; i < N; i++)
        {
            if (V[i] % 2)
                V[i]++;

            sub_V[i] = V[i] / 2;
            V[i] /= 2;
        } // 홀수인 아이한테 1개 준 뒤, 절반 기록

        while (1)
        {
            bool flag = true;

            for (int i = 0; i < N; i++)
                if (V[0] != V[i])
                    flag = false;

            if (flag)
                break;
            else
                count++;

            for (int i = 0; i < N; i++)
                V[(i + 1) % N] += sub_V[i]; // 오른쪽 아이한테 절반 주기

            for (int i = 0; i < N; i++)
            {
                if (V[i] % 2)
                    V[i]++;

                sub_V[i] = V[i] / 2;
                V[i] /= 2;
            } // 홀수인 아이한테 1개 준 뒤, 절반 기록

        }

        std::cout << count << '\n';
    }
}