#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

bool cmp(std::pair<std::string, int> a, std::pair<std::string, int> b)
{
	return a.second < b.second;
}

int main()
{
	std::string tmpString;
	int N, M, K, tmpInt, minScore = 0, maxScore = 0;
	std::cin >> N >> M >> K;

	std::map<std::string, int> map;
	for (int i = 0; i < N; i++)
	{
		std::cin >> tmpString >> tmpInt;
		map.insert({ tmpString, tmpInt });
	} // N개 과목 삽입

	for (int i = 0; i < K; i++)
	{
		std::cin >> tmpString;
		minScore += map[tmpString];
		maxScore += map[tmpString];

		map.erase(tmpString);
	} // K개 과목에 대한 점수 합산 후 삭제

	std::vector<std::pair<std::string, int>> vec(map.begin(), map.end()); // map에 남아있는 요소들을 vec에 복사
	std::sort(vec.begin(), vec.end(), cmp); // 이후 vec의 {과목, 점수} 쌍을 점수 내림차순으로 정렬

	//for (auto& k : vec)
	//	std::cout << k.first << ' ' << k.second << '\n';

	for (int i = 0; i < M - K; i++)
	{
		minScore += vec[i].second;
		maxScore += vec[vec.size() - 1 - i].second;
	}

	std::cout << minScore << ' ' << maxScore;
	return 0;
}