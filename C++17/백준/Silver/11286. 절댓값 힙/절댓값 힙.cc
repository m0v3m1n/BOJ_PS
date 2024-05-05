#include <iostream>
#include <queue>
#include <vector>

struct compare
{
	// 우선순위 큐에서, A > B 이면 작은 수부터. (즉, A가 B보다 크면 우선순위가 낮아짐.)
	bool operator()(std::pair<int, int> A, std::pair<int, int> B)
	{
		if (A.first == B.first)
			return A.second > B.second; // 처음 값이 크면 우선순위 낮아짐.
		else
			return A.first < B.first; // 그 외에는 값이 작으면 우선순위 높아짐.
	}
};

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, compare> PQ; // first = 바꾼 후의 값, second = 처음 값

	int N, input;

	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> input;

		if (input == 0)
			if (PQ.empty())
				std::cout << 0 << '\n';
			else
			{
				std::cout << PQ.top().second << '\n';
				PQ.pop();
			}
		else
		{
			if (input > 0) // 0보다 크면
				PQ.push({ -input, input }); // 음수 & 양수
			else
				PQ.push({ input, input }); // 음수 & 음수
		}
	}
}