#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T; std::cin >> T;

    while (T--)
    {
        std::string S, S_, revS_, tailS_, tailRevS_;
        std::cin >> S;

        int len = S.length() % 3 == 0 ? S.length() / 3 : S.length() / 3 + 1;

        S_ = S.substr(0, len);

        revS_ = S_;
        std::reverse(revS_.begin(), revS_.end());

        tailS_ = S_.substr(1, S_.length() - 1);

        tailRevS_ = revS_;
        tailRevS_ = tailRevS_.substr(1, tailRevS_.length() - 1);

        // std::cout << S_ << '\n' << revS_ << '\n' << tailS_ << '\n' << tailRevS_ << '\n';
        if (S == S_ + revS_ + S_ || 
            S == S_ + tailRevS_ + S_ || 
            S == S_ + revS_ + tailS_ || 
            S == S_ + tailRevS_ + tailS_)
            std::cout << 1 << '\n';
        else
            std::cout << 0 << '\n';
    }

    return 0;
}