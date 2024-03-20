#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string S = "";
std::vector<char> V;
std::vector<bool> visited;

bool check(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	else
		return false;
}

void backtracking(int aeiou, int others, int idx, int L)
{
	if (S.size() == L && aeiou >= 1 && others >= 2) // 길이가 L인데 조건 만족하면
	{
		std::cout << S << '\n'; // 출력 찍고 return
		return;
	}
	else if (S.size() < L) // 길이가 L이 아니면
	{
		for (int i = idx; i < V.size() /* == C */; i++)
		{
			if (!visited[i])
			{
				if (check(V[i]))
					aeiou++;
				else
					others++;
				visited[i] = true;
				S.push_back(V[i]);

				// 재귀 드가자~
				backtracking(aeiou, others, i + 1, L);
				// 재귀 컽

				if (check(V[i]))
					aeiou--;
				else
					others--;
				S.pop_back();
				visited[i] = false;
			}
		}
	}
	else // 길이가 L 넘으면 바로 빠꾸
		return;
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(NULL);
	std::cin.tie(NULL);

	int L, C, idx = 0;
	char tmp;

	std::cin >> L >> C;
	for (int i = 0; i < C; i++)
	{
		std::cin >> tmp;
		V.push_back(tmp);
		visited.push_back(false);
	}
	std::sort(V.begin(), V.end());

	backtracking(0, 0, 0, L);
	//for (auto& K : V)
	//	std::cout << K << ' ';

	return 0;
}