// 백준 번호 1260번, DFS와 BFS
// 문제 링크 : https://www.acmicpc.net/problem/1260

// This problem has solved by DFS & BFS both.

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

std::vector<int> DFSResult;
std::vector<int> BFSResult;

std::vector<int> Line[10001];
bool VisitLog[1001];

bool compare(int a, int b)
{
	return a < b;
}

void DFS(int start)
{
	std::stack<int> S;

	S.push(start); // 시작점을 stack에 push.
	DFSResult.push_back(start);
	VisitLog[start] = true; // 시작점 방문처리.

	while (!S.empty())
	{
		int Current = S.top(); // 현재의 노드를 변수로 선언.
		S.pop();

		for (int i = 0; i < Line[Current].size(); i++) // 현재 노드의 간선 갯수만큼 반복.
		{
			int Next = Line[Current][i]; // 다음 노드를 Next라는 변수로 선언.

			if (!VisitLog[Next]) // 다음 노드가 미방문 노드일 시,
			{
				VisitLog[Next] = true; // 다음 노드를 방문처리 해줌.
				DFSResult.push_back(Next);

				S.push(Current);
				S.push(Next); // 그 후, pop 했던 현재 노드와, 다음 노드를 push 해줌.
				
				break;
			}
		}
	}
}

void BFS(int start)
{
	std::queue<int> Q;

	Q.push(start); // 시작점을 queue에 push.
	BFSResult.push_back(start);
	VisitLog[start] = true; // 시작점 방문처리.

	while (!Q.empty())
	{
		int Current = Q.front(); // 현재 노드를 변수로 선언.
		Q.pop();

		for (int i = 0; i < Line[Current].size(); i++) // 현재 노드의 간선 갯수만큼 반복.
		{
			int Next = Line[Current][i]; // 다음 노드를 Next라는 변수로 선언.

			if (!VisitLog[Next]) // 다음 노드가 미방문 노드일 시,
			{
				VisitLog[Next] = true; // 다음 노드를 방문처리 해줌.

				Q.push(Next); // queue에 다음 노드를 push 해준다.
				BFSResult.push_back(Next);
			}
		}
	}
}

int main()
{
	int N, M, V, A, B;
	std::cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		std::cin >> A >> B;
		Line[A].push_back(B);
		Line[B].push_back(A); // 양방향 간선 처리.
	}

	for (int i = 0; i <= N; i++)
		std::sort(Line[i].begin(), Line[i].end(), compare); // i번째 점 기준, 인접 노드를 오름차순으로 정렬.

	DFS(V);
	for (int i = 0; i < DFSResult.size(); i++)
		std::cout << DFSResult[i] << ' ';

	std::fill(VisitLog, VisitLog + 1001, false); // 방문기록 false로 싸그리 초기화.
	std::cout << '\n';

	BFS(V);
	for (int i = 0; i < BFSResult.size(); i++)
		std::cout << BFSResult[i] << ' ';

	return 0;
}
