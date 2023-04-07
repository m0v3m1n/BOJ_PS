// 백준 번호 2178번, 미로 탐색
// 문제 링크 : https://www.acmicpc.net/problem/2178

// This problem has solved by BFS.

#include <iostream>
#include <vector>
#include <queue>
#include <string>

int N, M;
int Dungeon[101][101]; // 100 x 100 크기의 미로 선언.
int Distance[101][101]; // 시작점으로부터의 거리.
bool Visited[101][101]; // 미로에 대해, 방문했는 지에 대한 배열.

int Col_move[4] = { 1, 0, -1, 0 };
int Row_move[4] = { 0, 1, 0, -1 }; // X행 Y열에서 가능한 움직임의 종류.
// => X 또는 Y에 대해 한 칸씩 움직였을 때의 경우의 수를 pair<int, int>로 설정.

void BFS()
{
	Visited[0][0] = true; // 항상 0행 0열에서 시작.

	std::queue<std::pair<int, int>> Q; // pair<int,int>형으로 Queue 선언.
	Q.push(std::make_pair(0, 0)); // 0행 0열부터 시작하므로, (0,0) push

	while (!Q.empty())
	{
		int CurrentCol = Q.front().first;
		int CurrentRow = Q.front().second; // 현재의 행, 열을 저장.

		Q.pop();

		for (int i = 0; i < 4; i++)
		{
			int NextCol = CurrentCol + Col_move[i];
			int NextRow = CurrentRow + Row_move[i];
			// X행 Y열에서 가능한 움직임 4가지를 반복문으로 구현.

			if (NextCol >= 0 && NextCol < N && NextRow >= 0 && NextRow < M) // 움직였을 때, 미로를 벗어나는지 체크.
			{ // 만약 미로 안이라면,
				if (Dungeon[NextCol][NextRow] == 1 && Visited[NextCol][NextRow] == 0) // 길인지의 여부와 방문 여부를 체크.
				{// 만약 미로 안이면서 길이 있고, 방문하지 않았다면
					Distance[NextCol][NextRow] = Distance[CurrentCol][CurrentRow] + 1;
					Visited[NextCol][NextRow] = true;
					Q.push(std::make_pair(NextCol, NextRow));
					// NextCol행 NextRow열에 대해, 거리를 기존보다 1 더하고, 방문 기록을 남기고, Queue에 push한다.
				}
			}
		}
	}
}

int main()
{
	std::cin >> N >> M;
	
	std::string S;

	for (int i = 0; i < N; i++)
	{
		std::cin >> S;
		for (int j = 0; j < S.size(); j++)
			Dungeon[i][j] = (int)S[j] - 48; // S[j]가 1이면, 아스키코드가 49이므로 48을 빼줌.
	}

	BFS();
	std::cout << Distance[N - 1][M - 1] + 1;
  
  return 0;
}
