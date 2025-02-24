#include <iostream>
#include <queue>
#include <algorithm>

int main()
{
    int N, fun = 0; std::cin >> N;

    std::queue<int> Q; Q.push(N);
    while (Q.size() < N)
    {
        if (Q.front() % 2 == 0)
        {
            Q.push(Q.front() / 2);
            Q.push(Q.front() / 2);
            fun += (Q.front() / 2) * (Q.front() / 2);
        }
        else
        {
            if (Q.front() != 1)
            {
                Q.push(Q.front() / 2);
                Q.push(1 + Q.front() / 2);
                fun += (1 + Q.front() / 2) * (Q.front() / 2);
            }
            else
                Q.push(1);
        }

        Q.pop();
    }
    std::cout << fun;
    return 0;
}
