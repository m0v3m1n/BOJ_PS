#include <iostream>
#include <stack>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::stack<int> st;
    int N, tmp, cur = 1; std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;

        if (tmp == cur)
            cur++;
        else // tmp != cur || st is empty.
            st.push(tmp);

        while (!st.empty() && st.top() == cur) // popping while st's top is cur
        {
            cur++;
            st.pop();
        }
    }

    if (st.empty())
        std::cout << "Nice";
    else
        std::cout << "Sad";

    return 0;
}