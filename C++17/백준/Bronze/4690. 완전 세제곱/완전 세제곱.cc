#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int arr[101];
    for (int i = 0; i <= 100; i++)
        arr[i] = i * i * i;

    for (int a = 2; a <= 100; a++)
    {
        int a_3 = arr[a];

        for (int b = 2; b < a; b++)
        {
            int b_3 = arr[b];

            for (int c = b; c < a; c++)
            {
                int c_3 = arr[c];

                for (int d = c; d < a; d++)
                {
                    int d_3 = arr[d];

                    if(a_3 == b_3 + c_3 + d_3)
                        std::cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")" << '\n';
                }
            }
        }
    }
    return 0;
}