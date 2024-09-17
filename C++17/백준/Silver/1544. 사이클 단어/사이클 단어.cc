#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::vector<std::string> V;
	int N; std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::string tmp;
		std::cin >> tmp;

		if (std::find(V.begin(), V.end(), tmp) != V.end()) // 만약 있으면 추가 X
			continue;
		else // 못찾았다면?
		{
			bool flag = false;
			std::string ttmp = tmp;

			ttmp.push_back(ttmp[0]);
			ttmp.erase(ttmp.begin()); // 맨 앞글자 뒤로 넣고 앞은 삭제.

			while (ttmp != tmp) // 문자열이 다른 동안 반복
			{
				if (std::find(V.begin(), V.end(), ttmp) != V.end()) // 찾았다면?
				{
					flag = true;
					break;
				}
				ttmp.push_back(ttmp[0]);
				ttmp.erase(ttmp.begin()); // 맨 앞글자 뒤로 넣고 앞은 삭제.
			}

			if (flag)
				continue;
			else
				V.push_back(tmp);
		}
	}

	std::cout << V.size();
}