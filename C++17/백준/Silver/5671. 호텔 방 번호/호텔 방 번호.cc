#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M;
    while (1)
    {
        int count = 0;

        std::cin >> N >> M;
        if (std::cin.eof())
            break;

        for (int i = N; i <= M; i++)
        {
            int num = i;
            bool flag = false;
            int arr[10] = { 0, };
            
            while (num)
            {
                if(!arr[num % 10])
                    arr[num % 10]++;
                else
                    flag = true;

                num /= 10;
            }

            if (flag)
                continue;
            else
                count++;
        }

        std::cout << count << '\n';
    }
    return 0;
}