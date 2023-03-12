// 백준 번호 9461번, 파도반 수열
// 문제 링크 : https://www.acmicpc.net/problem/9461

#include <iostream>

int main()
{
	long long DPArr[101]; // 오버플로우 예방을 위해 큰 자료형 준비.

  // 첫번째, 두번째, 세번째 삼각형은 변의 길이가 1.
	DPArr[0] = 0; // <= 필요 없지만 일단은 만들어놓기...
	DPArr[1] = 1;
	DPArr[2] = 1;
	DPArr[3] = 1;

	for (int i = 4; i < 101; i++)
	{
		DPArr[i] = DPArr[i - 2] + DPArr[i - 3]; // i번째 삼각형의 변의 길이는 i-2 번째와 i-3번째 삼각형의 변의 길이의 합.
	}

	int N, Index;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> Index;
		std::cout << DPArr[Index] << '\n';
	}

	return 0;
}
