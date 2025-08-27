#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int T, count = 0; std::string N, n, a;
    std::cin >> T >> N;

    std::vector<std::string> nicknames;
    std::vector<std::string> answers;

    for (int i = 0; i < T; i++)
    {
        std::cin >> n >> a;
        nicknames.push_back(n);
        answers.push_back(a);
    }

    // 순차지향 Programming 드가자
    int idx = 0;
    for (int i = 0; i < T; i++)
        if (nicknames[i] == N)
            idx = i;

    for (int i = idx - 1; i >= 0; i--)
        if (answers[i] == answers[idx])
            count++;

    std::cout << count;
    return 0;
}