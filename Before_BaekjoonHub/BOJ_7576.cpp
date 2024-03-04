// 백준 번호 7576번, 토마토
// 문제 링크 : https://www.acmicpc.net/problem/7576

#include <iostream>
#include <queue>
#include <vector>

int M, N;
int TomatoBox[1001][1001];
bool Visited[1001][1001];
int Runtime[1001][1001]; // 토마토 박스, 방문여부 배열, 소요시간 배열 선언.

int Col_move[4] = { 1,0,-1,0 };
int Row_move[4] = { 0,1,0,-1 }; // 행 이동, 열 이동 배열 선언 및 초기화.

void BFS()
{
	std::queue<std::pair<int, int>> Q;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (TomatoBox[i][j] == 1)
			{
				Q.push(std::make_pair(i, j));
				Visited[i][j] = true; // 전수조사 후, 토마토가 있으면 Queue에 push.
			}
		}
	}

	while (!Q.empty())
	{
		int CurrentCol = Q.front().first;
		int CurrentRow = Q.front().second;

		Q.pop();

		for (int i = 0; i < 4; i++)
		{
			int NextCol = CurrentCol + Col_move[i];
			int NextRow = CurrentRow + Row_move[i];

			if (NextCol >= 0 && NextCol < N && NextRow >= 0 && NextRow < M)
			{
				if (TomatoBox[NextCol][NextRow] == 0 && Visited[NextCol][NextRow] == false)
				{ // 이동할 수 있는 칸에 토마토가 있다면,
					Runtime[NextCol][NextRow] = Runtime[CurrentCol][CurrentRow] + 1;
					Visited[NextCol][NextRow] = true;
					TomatoBox[NextCol][NextRow] = 1;
					Q.push(std::make_pair(NextCol, NextRow));
				} // 다음 칸에 1) 기존 소요일 + 1만큼의 소요일 저장, 2) 토마토가 익었음을 표시 및 방문처리, 3) Queue에 다음 칸 토마토 push.
			}
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL); // 속도 향상용 3줄.

	int MaxResult = -1; // 최대 소요일 선언 및 -1로 초기화.
	std::cin >> M >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			std::cin >> TomatoBox[i][j]; // 토마토 상자 Mapping

	BFS();
	
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			if (Visited[i][j] == false && TomatoBox[i][j] == 0)
			{
				std::cout << -1;
				return 0;
			}
			else
			{
				if (MaxResult < Runtime[i][j])
					MaxResult = Runtime[i][j];
			}
		}

	std::cout << MaxResult;
}
