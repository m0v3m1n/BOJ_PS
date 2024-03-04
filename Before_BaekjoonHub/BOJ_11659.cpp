// 백준 번호 11659번, 구간 합 구하기 4
// 문제 링크 : https://www.acmicpc.net/problem/11659

#include <iostream>

int SumArr[100001] = {};

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, M; // N : 수의 개수, M : 합을 구하는 횟수.
	int Start, End; // 누적합의 Index 시작점과 끝점.
	std::cin >> N >> M;

	SumArr[0] = 0;

	for (int i = 1; i <= N; i++)
	{
		std::cin >> SumArr[i];
		SumArr[i] += SumArr[i - 1]; // SumArr[i] == i번째 수까지의 누적합.
	}

	for (int i = 0; i < M; i++)
	{
		std::cin >> Start >> End;
		std::cout << SumArr[End] - SumArr[Start - 1] << '\n';
	} // i번째 숫자와 j번째 숫자까지의 합은 (j까지의 누적합) - (i까지의 누적합)이다.

	return 0;
}
