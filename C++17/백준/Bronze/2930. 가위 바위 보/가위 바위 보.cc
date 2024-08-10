#include <iostream>
#include <algorithm>
#include <vector>

//비교 함수
int check_win(char base, char fr)
{
	if (base == 'S') {//가위
		if (fr == 'S') return 1; //비김
		if (fr == 'P') return 2;
		if (fr == 'R') return 0;
	}
	if (base == 'P') {//보
		if (fr == 'S') return 0;
		if (fr == 'P') return 1;//비김
		if (fr == 'R') return 2;
	}
	if (base == 'R') {//바위
		if (fr == 'S') return 2;
		if (fr == 'P') return 0;
		if (fr == 'R') return 1;//비김
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	//입력
	int r, n;
	std::cin >> r;

	std::vector<char> sang(r); //라운드
	for (int i = 0; i < r; i++)
		std::cin >> sang[i];

	std::cin >> n;
	std::vector<std::vector<char>> friends(n, std::vector<char>(r)); //친구
	for (int i = 0; i < n; i++)//친구
		for (int j = 0; j < r; j++)//라운드
			std::cin >> friends[i][j];

	//문제 해결
	int score = 0, max_score = 0;
	for (int j = 0; j < r; j++)
	{
		int arr[3] = { 0,0,0 };

		for (int i = 0; i < n; i++)
		{
			arr[0] += check_win('S', friends[i][j]);
			arr[1] += check_win('P', friends[i][j]);
			arr[2] += check_win('R', friends[i][j]);

			score += check_win(sang[j], friends[i][j]);
		}

		max_score += std::max(arr[0], std::max(arr[1], arr[2]));
	}

	//결과 출력
	std::cout << score << '\n' << max_score << '\n';
}