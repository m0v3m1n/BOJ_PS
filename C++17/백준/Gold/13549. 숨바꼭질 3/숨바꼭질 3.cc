#include <iostream>
#include <queue>

bool visited[100001];

void BFS(int N, int K)
{
	std::priority_queue<std::pair<int, int>> Q;
	Q.push({ 0, N});

	while (!Q.empty())
	{
		int curTime = -Q.top().first; 
		int curX = Q.top().second;
		visited[curX] = true;

		if (curX == K)
		{
			std::cout << curTime;
			return;
		}

		Q.pop();

		if (curX * 2 <= 100000 && !visited[curX * 2])
			Q.push({ -curTime, curX * 2});
		if (curX + 1 <= 100000 && !visited[curX + 1])
			Q.push({ -(curTime + 1),  curX + 1});
		if (curX - 1 >= 0 && !visited[curX - 1])
			Q.push({ -(curTime + 1) , curX - 1});
	}
}

int main()
{
	int N, K;
	std::cin >> N >> K;

	BFS(N, K);
}