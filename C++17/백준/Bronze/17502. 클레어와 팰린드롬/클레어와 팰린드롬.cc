#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N;
    std::string S;

    std::cin >> N >> S;

    for (int i = 0; i < N; i++)
        if (S[i] == '?') // 물음표라면?
            if (S[N - 1 - i] == '?') // 맞은편(?) 글자도 물음표라면?
                S[i] = S[N - 1 - i] = 'a'; // 그냥 둘다 a로 치환
            else // 맞은편 글자가 물음표가 아니라면?
                S[i] = S[N - 1 - i]; // 맞은편 글자로 바꿔주기
        else // 물음표가 아니라면?
            if (S[N - 1 - i] == '?') // 맞은편 글자가 물음표라면?
                S[N - 1 - i] = S[i]; // 맞은편 글자 바꿔주기
            else // 맞은편 글자가 물음표가 아니라면?
                continue; // 그럼 둘다 똑같은 글자일거니까 패스

    std::cout << S;
    return 0;
}