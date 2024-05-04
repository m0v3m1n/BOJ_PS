#include <iostream>

int node[500001];

int find(int X)
{
	if (node[X] == X) // 자기자신이 부모면
		return X; // 그대로 return
	else
		return node[X] = find(node[X]);
}

void merge(int left, int right)
{
	int X = find(left);
	int Y = find(right);

	if (X == Y)
		return;
	else
		if (X < Y ? node[Y] = X : node[X] = Y);
}

bool isUnion(int left, int right)
{
	int X = find(left);
	int Y = find(right);

	if (X == Y)
		return true;
	else
		return false;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, left, right;
	std::cin >> N >> M;

	for (int i = 0; i < N; i++)
		node[i] = i;

	for (int i = 1; i <= M; i++)
	{
		std::cin >> left >> right;

		if (isUnion(left, right))
		{
			std::cout << i;
			return 0;
		}
		else
			merge(left, right);
	}
	std::cout << 0;
	return 0;
}