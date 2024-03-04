// 백준 번호 11726번, 2xN 타일링
// 문제 링크 : https://www.acmicpc.net/problem/11726

#include <iostream>

unsigned long long DPArr[1001];

int main()
{
	int N;
	std::cin >> N;

	DPArr[0] = 0;
	DPArr[1] = 1;
	DPArr[2] = 2;
	DPArr[3] = 3; // 2x3 까지의 경우의 수.

	if (N == 1 || N == 2) // 입력이 1 혹은 2면 1,2 출력 후 종료.
	{
		if (N == 1)
			std::cout << 1;
		else
			std::cout << 2;

		return 0;
	}
	else // 입력이 3 이상이라면
	{
		for (int i = 3; i <= N; i++)
		{
			DPArr[i] = (DPArr[i - 1] + DPArr[i - 2]) % 10007; // 2 x i 를 채우는 방법은
		} // 2 x (i-1)을 채우는 방법의 수 + 2 x (i-2)를 채우는 방법의 수.
	}
	
	std::cout << DPArr[N];

	return 0;
}
