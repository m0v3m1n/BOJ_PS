#include <iostream>
#include <string>
#include <vector>

std::vector<std::vector<bool>> visited;
std::vector<std::string> V;

int R, C, max = 0;
int rowmove[4] = { 0,1,0,-1 };
int colmove[4] = { 1,0,-1,0 };

void DFS(int depth, int r, int c, bool alpha[])
{
	depth++;
	if (max < depth)
		max = depth;

	alpha[V[r][c] - 'A'] = true;
	visited[r][c] = true;

	for (int i = 0; i < 4; i++)
	{
		if (0 <= r + rowmove[i] && r + rowmove[i] < R &&
			0 <= c + colmove[i] && c + colmove[i] < C &&
			!alpha[V[r + rowmove[i]][c + colmove[i]] - 'A'] &&
			!visited[r + rowmove[i]][c + colmove[i]]) // 방문 X, 지나가지 않았던 알파벳이면
		{
			DFS(depth, r + rowmove[i], c + colmove[i], alpha);
			alpha[V[r + rowmove[i]][c + colmove[i]] - 'A'] = false;
			visited[r + rowmove[i]][c + colmove[i]] = false;
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(NULL);
	std::cin.tie(NULL);

	std::cin >> R >> C;

	std::vector<bool> tmp_vec(C, false);
	for (int i = 0; i < R; i++)
		visited.push_back(tmp_vec);

	std::string tmp;
	for (int i = 0; i < R; i++)
	{
		std::cin >> tmp;
		V.push_back(tmp);
	}

	bool alp[26] = { false, };
	DFS(0, 0, 0, alp);

	std::cout << max;
	return 0;
}