// 백준 번호 2606, 바이러스
// 문제 링크 : https://www.acmicpc.net/problem/2606

// This problem has solved by BFS.

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int VirusCount = 0;
std::vector<int> Line[10001];
bool VisitLog[101]; // 감염 컴퓨터 수, 네트워크 연결(간선), 컴퓨터 전체 개수(정점) 변수 선언.

bool compare(int a, int b)
{
	return a < b;
} // sort용 비교함수. (오름차순)

void BFS()
{
	std::queue<int> Q; // BFS용 queue 선언.

	Q.push(1);
	VisitLog[1] = true; // 1번 컴퓨터가 시작점이므로, queue에 1 삽입 및 1번 컴퓨터 방문처리.
	while (!Q.empty())
	{
		int Current = Q.front(); // 1번 컴퓨터이니 Curr은 1 시작.
		Q.pop(); // 중복방지용 pop.

		for (int i = 0; i < Line[Current].size(); i++) // Current번 컴퓨터의 간선 개수만큼 반복.
		{
			int Next = Line[Current][i]; // 다음 컴퓨터는 Current번 컴퓨터의 첫번째 간선. (sort 된 상태이기에 가능)

			if (!VisitLog[Next]) // 만약 방문한 컴퓨터가 아니라면
			{
				VisitLog[Next] = true;
				Q.push(Next);
				VirusCount++; // Next번 컴퓨터 방문처리, queue에 Next번 컴퓨터 삽입, 감염 컴퓨터수 1 증가.
			}
		}
	}
}

int main()
{
	int N, M, A, B;
	std::cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		std::cin >> A >> B;
		Line[A].push_back(B);
		Line[B].push_back(A); // 양방향 간선 처리.
	}

	for (int i = 0; i <= N; i++)
		std::sort(Line[i].begin(), Line[i].end(), compare); // i번째 점 기준, 인접 노드를 오름차순으로 정렬.

	BFS();
	std::cout << VirusCount;

	return 0;
}
