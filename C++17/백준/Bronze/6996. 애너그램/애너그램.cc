#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    while (N--)
    {
        int A[26] = { 0, };
        int B[26] = { 0, };

        std::string strA, strB;
        std::cin >> strA >> strB;

        for (auto& K : strA)
            A[K - 'a']++;
        for (auto& K : strB)
            B[K - 'a']++;

        for (int i = 0; i < 26; i++)
        {
            if (A[i] != B[i])
            {
                std::cout << strA << " & " << strB << " are NOT anagrams.\n";
                break;
            }
            else if (i == 25 && A[i] == B[i])
                std::cout << strA << " & " << strB << " are anagrams.\n";
        }
    }
    return 0;
}