#include <iostream>
#include <map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string S;
    bool flag = false;
    int con_3_mo, con_3_son, mo = 0;
    char prev, cur;

    while (1)
    {
        std::cin >> S;

        con_3_mo = 0;
        con_3_son = 0;
        mo = 0;
        flag = true;

        if (S == "end")
            break;
        else
        {
            for (int i = 0; i < S.size(); i++)
            {
                cur = S[i];
                if (i > 0)
                {
                    prev = S[i - 1];
                    if (prev == cur)
                        if ((prev == 'e' && cur == 'e') || (prev == 'o' && cur == 'o')) {}
                        else
                        {
                            // 두번 연속인데 e랑 o 아니면
                            // 나가리 ㅋㅋ
                            flag = false;
                            break;
                        }
                }

                if (cur == 'a' || cur == 'e' || cur == 'i' || cur == 'o' || cur == 'u')
                {
                    con_3_mo++;
                    con_3_son = 0;
                    mo++;
                }
                else
                {
                    con_3_son++;
                    con_3_mo = 0;
                }

                if (con_3_mo == 3)
                {
                    flag = false;
                    break;
                }
                else if (con_3_son == 3)
                {
                    flag = false;
                    break;
                }
                
            }

            if (mo == 0)
                flag = false;

            if (flag)
                std::cout << '<' << S << "> is acceptable.\n";
            else
                std::cout << '<' << S << "> is not acceptable.\n";
        }
    }

    return 0;
}