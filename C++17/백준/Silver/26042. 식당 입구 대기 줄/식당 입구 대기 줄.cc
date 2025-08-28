#include <iostream>
#include <queue>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    std::queue<int> Q;
    int oper, num, back_num = 0, max_size = 0;

    for (int i = 0; i < N; i++)
    {
        std::cin >> oper;
        if (oper == 1)
        {
            std::cin >> num;
            Q.push(num);

            if (Q.size() > max_size)
            {
                max_size = Q.size();
                back_num = Q.back();
            }
            else if (Q.size() == max_size)
                back_num = (back_num < Q.back() ? back_num : Q.back());
        }
        else
            Q.pop();
    }

    std::cout << max_size << ' ' << back_num;
    return 0;
}