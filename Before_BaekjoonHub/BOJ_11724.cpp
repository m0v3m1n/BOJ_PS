// 백준 번호 11724번, 연결 요소의 개수
// 문제 링크 : https://www.acmicpc.net/problem/11724

// This problem has solved by BFS.

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

bool compare(int a, int b)
{
	return a < b;
}

std::vector<int> NtoNVec[1001];
bool VisitLog[1001];
int CC = 0;

void BFS(int start)
{
	std::queue<int> Q;
	Q.push(start);
	VisitLog[start] = true;

	while (!Q.empty())
	{
		int CurrentNode = Q.front();
		Q.pop();

		for (int i = 0; i < NtoNVec[CurrentNode].size(); i++)
		{
			int NextNode = NtoNVec[CurrentNode][i];

			if (!VisitLog[NextNode])
			{
				VisitLog[NextNode] = true;
				Q.push(NextNode);
			}
		}
	}
	CC++;
}


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, M, A, B;
	std::cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		std::cin >> A >> B;
		NtoNVec[A].push_back(B);
		NtoNVec[B].push_back(A);
	}

	for (int i = 0; i <= N; i++)
		std::sort(NtoNVec[i].begin(), NtoNVec[i].end(), compare);

	for (int i = 1; i <= N; i++)
		if (VisitLog[i] == false)
			BFS(i);

	std::cout << CC;

	return 0;
}
