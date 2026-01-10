#include <iostream>

int main()
{
    double n;
    double a[101];

    double avg = 0;
    double exp = 0;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        avg += a[i];
        exp += a[i] * 1 / n;
    }

    avg /= n;

    if (exp == 0 || n == 0)
        printf("divide by zero");
    else
        printf("%.2f", avg / exp);
}