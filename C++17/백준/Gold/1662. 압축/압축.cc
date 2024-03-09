#include <iostream>
#include <string>

bool visited[51];

int rec(std::string S, int idx)
{
    int cnt = 0;

    for (int i = idx; i < S.size(); i++)
    {
        if (S[i] == '(' && !visited[i])
        {
            int num = S[i - 1] - '0';
            visited[i] = true;
            cnt--;

            cnt += num * rec(S, i + 1);
        }
        else if (S[i] == ')' && !visited[i])
        {
            visited[i] = true;
            return cnt;
        }
        else if (!visited[i])
        {
            visited[i] = true;
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    std::string S;
    std::cin >> S;

    std::cout << rec(S, 0);
    return 0;
}