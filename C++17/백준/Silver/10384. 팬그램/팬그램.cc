#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::cin >> N; std::cin.ignore();

    for (int CASE = 1; CASE <= N; CASE++)
    {
        std::string S; std::getline(std::cin, S);
        int pangram['z' - 'a' + 1] = { 0, };

        for (int i = 0; i < S.length(); i++)
        {
            if ('a' <= S[i] && S[i] <= 'z')
                pangram[S[i] - 'a']++;
            else if ('A' <= S[i] && S[i] <= 'Z')
                pangram[S[i] - 'A']++;
        }

        int min = 10000; // huge example for fun
        for (int i = 0; i < ('z' - 'a' + 1); i++)
            if (pangram[i] < min)
                min = pangram[i];

        std::cout << "Case " << CASE << ": ";
        if (min == 0)
            std::cout << "Not a pangram" << '\n';
        else if (min == 1)
            std::cout << "Pangram!" << '\n';
        else if (min == 2)
            std::cout << "Double pangram!!" << '\n';
        else
            std::cout << "Triple pangram!!!" << '\n';
    }
    return 0;
}