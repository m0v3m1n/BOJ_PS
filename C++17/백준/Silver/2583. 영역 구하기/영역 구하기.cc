#include <iostream>

void DFS(int r, int c, int M, int N, bool** map, bool** visited, int& area)
{
	visited[r][c] = true;
	area++;

	int rowmove[4] = { 0,1,0,-1 };
	int colmove[4] = { 1,0,-1,0 };

	for (int i = 0; i < 4; i++)
	{
		if (0 <= r + rowmove[i] && r + rowmove[i] < M &&
			0 <= c + colmove[i] && c + colmove[i] < N &&
			!map[r + rowmove[i]][c + colmove[i]] &&
			!visited[r + rowmove[i]][c + colmove[i]])
		{
			DFS(r + rowmove[i], c + colmove[i], M, N, map, visited, area);
		}
	}
}

void selection_sort(int a[], int n)
{
	int min;
	int tmp, index;

	for (int i = 0; i < n - 1; i++) {
		min = 999999;  //for문 돌릴때마다 최소값 초기화
		for (int j = i; j < n; j++) {
			if (min > a[j]) {  //최소값 찾기
				min = a[j];
				index = j;
			}
		}
		tmp = a[i];  //현재위치와 최소값과 교환
		a[i] = a[index];
		a[index] = tmp;
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int M, N, K, cnt = 0; std::cin >> M >> N >> K;
	int arr[(100 * 100) + 1] = { 0, };
	int lx, ly, rx, ry;

	bool** visited = new bool* [M];
	for (int i = 0; i < M; i++)
		visited[i] = new bool[N];

	bool** map = new bool* [M];
	for (int i = 0; i < M; i++)
		map[i] = new bool[N];

	for(int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
		{
			visited[i][j] = false;
			map[i][j] = false;
		}

	for (int h = 0; h < K; h++)
	{
		std::cin >> lx >> ly >> rx >> ry;

		for (int i = ly; i < ry; i++)
			for (int j = lx; j < rx; j++)
				map[i][j] = true;
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int area = 0;
			int& ar = area;

			if (!map[i][j] && !visited[i][j])
			{
				DFS(i, j, M, N, map, visited, ar);
				arr[cnt] = ar;
				cnt++;
			}
		}
	}

	//for (int i = 0; i < cnt; i++)
	//	std::cout << arr[i];

	selection_sort(arr, cnt);

	std::cout << cnt << '\n';
	for (int i = 0; i < cnt; i++)
		std::cout << arr[i] << ' ';

	for (int i = 0; i < M; i++)
		delete[] visited[i];
	delete[] visited;
	
	for (int i = 0; i < M; i++)
		delete[] map[i];
	delete[] map;


	return 0;
}