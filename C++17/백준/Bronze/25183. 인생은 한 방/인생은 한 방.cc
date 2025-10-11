#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    char* S = new char[N + 1];
    std::cin >> S;

    bool flag = false;
    for (int i = 2; i < N - 2; i++)
        if (
            (-1 == S[i - 2] - S[i - 1] || S[i - 2] - S[i - 1] == 1) && (-1 == S[i - 1] - S[i] || S[i - 1] - S[i] == 1)
            && (-1 == S[i] - S[i + 1] || S[i] - S[i + 1] == 1) && (-1 == S[i + 1] - S[i + 2] || S[i + 1] - S[i + 2] == 1)
            )
            flag = true;

    if (flag)
        std::cout << "YES";
    else
        std::cout << "NO";

    delete[] S;
    return 0;
}