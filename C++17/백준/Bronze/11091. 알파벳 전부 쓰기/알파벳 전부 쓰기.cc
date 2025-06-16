#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; 
    std::string S;

    std::cin >> N; std::cin.ignore();
    while (N--)
    {
        bool flag = true;
        bool arr['z' - 'a' + 1] = { 0, };
        std::getline(std::cin, S);

        for (int i = 0; i < S.length(); i++)
        {
            if ('a' <= S[i] && S[i] <= 'z')
                arr[S[i] - 'a'] = 1;
            else if ('A' <= S[i] && S[i] <= 'Z')
                arr[S[i] - 'A'] = 1;
        }

        for (int i = 0; i < 'z' - 'a' + 1; i++)
            if (arr[i] == 0)
                flag = false;

        if (flag) // pangram
            std::cout << "pangram" << '\n';
        else
        {
            std::cout << "missing ";
            for (int i = 0; i < 'z' - 'a' + 1; i++)
                if (!arr[i])
                    std::cout << (char)('a' + i);
            std::cout << '\n';
        }
    }
}