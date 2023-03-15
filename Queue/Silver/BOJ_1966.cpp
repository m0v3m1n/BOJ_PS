// 백준 번호 1966번, 프린터 큐
// 문제 링크 : https://www.acmicpc.net/problem/1966

#include <iostream>
#include <queue>
#include <algorithm>

bool compare(int a, int b) // 오름차순 비교 함수.
{
	return a > b;
}

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false); // 속도 향상용.

	int T, N, M, Temp, ImpIndex , Count;
	int Important[101];

	std::queue<int> Q, LevelQ; // 변수 및 큐 선언.

	std::cin >> T;

	for (int i = 0; i < T; i++)
	{
		std::cin >> N >> M;

		Q = std::queue<int>();
		LevelQ = std::queue<int>();
		Count = 0;
		ImpIndex = 0; // 변수 및 큐 초기화.

		for (int i = 0; i < N; i++)
		{
			std::cin >> Temp;

			Q.push(Temp);
			LevelQ.push(i); // Q에는 중요도를, LevelQ에는 문서의 순서 저장.

			Important[i] = Temp; // 중요도 배열에 입력받은 중요도 저장.
		}

		std::sort(Important, Important + N, compare); // 중요도 오름차순 정렬.

		while (!Q.empty()) // Q가 비지 않은 한 아래 알고리즘 수행.
		{
			if (Q.front() == Important[ImpIndex]) // Q의 front가 중요도 배열의 값과 일치하면
			{
				if (LevelQ.front() == M) // 문서의 순서가 M번쨰라면
				{
					std::cout << Count + 1 << '\n'; // 인쇄 순서 출력.
					break;
				}
				else // 문서의 순서가 M번째가 아니라면
				{
					Q.pop();
					LevelQ.pop();

					Count++;
					ImpIndex++; // 큐들에 pop 연산 후, 인쇄 횟수와 중요도 Index 증가.
				}
			}
			else // Q의 front가 중요도 배열의 값과 불일치하면
			{
				Q.push(Q.front());
				LevelQ.push(LevelQ.front());

				Q.pop();
				LevelQ.pop(); // 큐들의 front를 맨 뒤에 넣어준다.
			}
		}
	}

	return 0;
}
