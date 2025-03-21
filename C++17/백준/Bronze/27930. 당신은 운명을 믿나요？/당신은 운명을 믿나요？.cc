#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string S;
    std::cin >> S;

    std::string K = "KOREA";
    std::string Y = "YONSEI";

    int k = 0, y = 0; // 각 단어에서 매칭된 문자 인덱스

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == K[k])
            k++;

        if (S[i] == Y[y])
            y++;

        if (k == K.size())
        {
            std::cout << K;
            return 0;
        }

        if (y == Y.size())
        {
            std::cout << Y;
            return 0;
        }
    }

    return 0;
}