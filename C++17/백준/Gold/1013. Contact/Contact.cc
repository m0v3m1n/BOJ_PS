#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	while (N--)
	{
		std::string tmp; std::cin >> tmp;
		int idx = 0;
		bool t_f = true;

		if (tmp.length() == 1)
			std::cout << "NO" << '\n';
		else if (tmp.length() == 2)
			if (tmp == "01")
				std::cout << "YES" << '\n';
			else
				std::cout << "NO" << '\n';
		else if (tmp.length() == 3)
			std::cout << "NO" << '\n';
		else // 길이 4 이상
		{
			while (tmp.length() > idx)
			{
				if (tmp.length() - idx >= 2)
				{
					if (tmp[idx] == '0' && tmp[idx + 1] == '1') // 01 이면 재시작
						idx += 2;
					else if (tmp[idx] == '1' && tmp[idx + 1] == '0') // 10 이면 세부적 판단
					{
						if (tmp.length() - idx == 3) // 0과 1이 하나씩은 있어야 함 --> 최소길이 4 미만은 break
						{
							t_f = false;
							break;
						}
						else
						{
							if (tmp[idx + 2] == '0') // 10 0+ 상태
							{
								idx += 2;
								while (tmp.length() > idx && tmp[idx] == '0') // 0 계속 반복될때까지 idx++
									idx++;

								if (tmp.length() == idx) // 만약 끝까지 갔다면? 1이 안나왔으므로 break
								{
									t_f = false;
									break;
								}
								else // 끝까지 안갔다면?
								{
									int one_count = 0;
									// 100+1+ --> 1 계속 나올때까지
									while (tmp.length() > idx && tmp[idx] == '1')
									{
										idx++;
										one_count++;
									}

									if (one_count >= 2) // 100+10
										if (tmp.length() > idx + 1)
											if (tmp[idx + 1] == '1') // 100+1+에서, 맨마지막 1 이후 01이면 01
												idx += 2;
											else
												idx--;
								}
							}
							else // 101 이면 break
							{
								t_f = false;
								break;
							}
						}
					}
					else // 00 또는 11 이면 break
					{
						t_f = false;
						break;
					}
				}
				else // 길이가 1이면 100+1+, 01 둘다 안되므로 break
				{
					t_f = false;
					break;
				}
			}

			if (t_f)
				std::cout << "YES" << '\n';
			else
				std::cout << "NO" << '\n';
		}
	}
}