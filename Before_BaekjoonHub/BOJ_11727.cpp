// 백준 번호 11727번, 2xN 타일링 2
// 문제 링크 : https://www.acmicpc.net/problem/11727

#include <iostream>

int DPArr[1001];

int main()
{
    int N;
    std::cin >> N;

    DPArr[0] = 0;
    DPArr[1] = 1;
    DPArr[2] = 3;
  
    for (int i = 3; i < 1001; i++)
    {
      // 2 x n 칸을 타일링 하려면, 2 x (n-1)칸만큼 타일링 한 경우의 수와
      // 2 x (n-2)칸만큼 타일링 한 경우의 수를 더한 것이다.
      
      // 이때 2 x (n-2)칸만큼 까는 경우는
      // 1 x 2 타일 2개를 깔거나, 2 x 2 타일 1개를 까는 경우로 2가지이므로
      // 2 x (n-2)을 까는 경우의 수 x 2 이다.
      
      // 즉, 2 x n 칸을 타일링하는 경우의 수는
      // 2 x (n-1)의 경우의 수 + (2 x (n-2)의 경우의 수 * 2)이다.
        DPArr[i] = (DPArr[i - 1] + (2 * DPArr[i - 2])) % 10007;
    }

    std::cout << DPArr[N];

    return 0;
}
