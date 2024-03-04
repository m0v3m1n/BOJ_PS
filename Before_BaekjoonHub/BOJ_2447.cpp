// 백준 번호 2447번, 별 찍기 - 10
// 문제 링크 : https://www.acmicpc.net/problem/2447

#include <iostream>

void StarPrint(int c, int r, int n)
{
	if ((c / n) % 3 == 1 && (r / n) % 3 == 1) // C행 R열에서, (C / N) % 3 == 1 이면서 (R / N) % 3 == 1 이면 빈칸 출력.
		std::cout << ' ';
	else if (n == 1) // N이 1까지 쪼개졌으면 * 출력.
		std::cout << '*';
	else // 위의 두 조건에 부합하지 않을 시 N을 1/3으로 나누어 재귀함수 호출 => 분할정복.
		StarPrint(c, r, n / 3);
}

/*
N = 27, 0행 1열과 1행 1열을 예시로 들어보자.
처음과 두번째, 세번째 호출의 경우, if문의 조건과 else if 문의 조건에 부합하지 않기 때문에
N = 1인 함수까지 재귀함수로 호출된다.

이때, 0행 1열의 경우 if문의 조건에서 (c / n) % 3 != 1 이기에 false가 된다.
그러나 else if 문의 조건인 n == 1 인 경우에 부합하기 때문에, * 이 출력된다.

그러나 1행 1열의 경우, if문의 조건을 부합하기 때문에 true가 된다.
그렇기에 else if 문으로 하강하지 않고, 빈칸을 출력하게 된다.

즉 재귀함수의 조건문에 따라 0행 1열은 *, 1행 1열은 빈칸을 출력하게 된다.
*/

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL); // 속도 향상용 3줄 삽입.

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			StarPrint(i, j, N); // i행 j열, N의 크기를 매개변수로 한 함수 호출.
		}
		std::cout << '\n';
	}

	return 0;
}
