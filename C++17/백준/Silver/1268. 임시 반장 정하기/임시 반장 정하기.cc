#include <iostream>
#include <vector>

int main()
{
	int N, cap = 0, max = 0; std::cin >> N;

	std::vector<int> V_num(5);
	std::vector<bool> V_bool(N, false);
	std::vector<std::pair<std::vector<int>, std::vector<bool>>> V;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 5; j++)
			std::cin >> V_num[j];
		V.push_back({ V_num, V_bool });
	}

	for (int i = 0; i < N; i++) // 0번 학생부터 N번 학생까지 순회.
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j) // 자기 자신을 제외한 나머지 체크.
				continue;

			for (int k = 0; k < 5; k++)
				if (V[i].first[k] == V[j].first[k]) // i번째 학생이 j번째 학생과 같은 반이었다면?
					V[i].second[j] = true; // 한 번이라도 만났음을 체크.
		}
	}

	for (int i = 0; i < N; i++)
	{
		int tmp_max = 0;

		for (int j = 0; j < N; j++)
			if (V[i].second[j] == true)
				tmp_max++;

		if (tmp_max > max)
		{
			cap = i;
			max = tmp_max;
		}
	}

	std::cout << cap + 1;
	return 0;
}