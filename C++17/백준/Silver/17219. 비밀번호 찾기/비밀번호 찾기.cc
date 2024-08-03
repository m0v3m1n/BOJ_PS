#include <iostream>
#include <string>
#include <algorithm>

struct ID_PASS
{
	std::string ID;
	std::string PASS;
};

int N, M;
ID_PASS Arr[100001];

bool compare(ID_PASS a, ID_PASS b)
{
	return a.ID < b.ID;
}

std::string BinarySearch(std::string S)
{
	int Mid = N / 2;
	int Left = 0, Right = N;

	while (1)
	{
		Mid = (Left + Right) / 2;

		if (S == Arr[Mid].ID)
			return Arr[Mid].PASS;
		else if (S < Arr[Mid].ID)
			Right = Mid - 1;
		else
			Left = Mid + 1;
	}

	return Arr[Mid].PASS;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> N >> M;
	for (int i = 0; i < N; i++)
		std::cin >> Arr[i].ID >> Arr[i].PASS;

	std::sort(Arr, Arr + N, compare);

	std::string Temp;
	for (int i = 0; i < M; i++)
	{
		std::cin >> Temp;
		std::cout << BinarySearch(Temp) << '\n';
	}

	return 0;
}