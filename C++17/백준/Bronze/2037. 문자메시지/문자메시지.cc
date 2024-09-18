#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::map<char, std::pair<int, int>> m;
	int p, w, time = 0; std::string s; char prev;

	m['A'].first = 1, m['A'].second = 1;	m['B'].first = 1, m['B'].second = 2;	m['C'].first = 1, m['C'].second = 3;
	m['D'].first = 2, m['D'].second = 1;	m['E'].first = 2, m['E'].second = 2;	m['F'].first = 2, m['F'].second = 3;
	m['G'].first = 3, m['G'].second = 1;	m['H'].first = 3, m['H'].second = 2;	m['I'].first = 3, m['I'].second = 3;
	m['J'].first = 4, m['J'].second = 1;	m['K'].first = 4, m['K'].second = 2;	m['L'].first = 4, m['L'].second = 3;
	m['M'].first = 5, m['M'].second = 1;	m['N'].first = 5, m['N'].second = 2;	m['O'].first = 5, m['O'].second = 3;
	m['P'].first = 6, m['P'].second = 1;	m['Q'].first = 6, m['Q'].second = 2;	m['R'].first = 6, m['R'].second = 3;	m['S'].first = 6, m['S'].second = 4;
	m['T'].first = 7, m['T'].second = 1;	m['U'].first = 7, m['U'].second = 2;	m['V'].first = 7, m['V'].second = 3;
	m['W'].first = 8, m['W'].second = 1;	m['X'].first = 8, m['X'].second = 2;	m['Y'].first = 8, m['Y'].second = 3;	m['Z'].first = 8, m['Z'].second = 4;

	std::cin >> p >> w; std::cin.ignore();
	std::getline(std::cin, s);

	if (s[0] == ' ')
		time += p;
	else
		time += m[s[0]].second * p;
	prev = s[0];

	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] == ' ')
			time += p;
		else
			if (m[s[i]].first == m[prev].first) // 저번 글자랑 자판이 똑같다면?
			{
				time += w;
				time += m[s[i]].second * p;
			}
			else
				time += m[s[i]].second * p;

		prev = s[i];
	}

	//for (auto& K : m)
	//	std::cout << K.first << ' ' << K.second.first << ' ' << K.second.second << '\n';

	std::cout << time;
}