#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	bool flag1 = true, flag2 = true, flag3 = true;
	int N;
	std::string A, B, tmpA, tmpB;
	
	std::cin >> N >> A >> B; // N == a, b의 길이

	// 조건 1 : 재배열 가능?
	int alpA[26] = { 0, };
	int alpB[26] = { 0, };

	for (int i = 0; i < N; i++)
	{
		alpA[A[i] - 'a']++;
		alpB[B[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
		if (alpA[i] != alpB[i])
			flag1 = false;

	// 조건 2 : 끝글자 동일?
	if (A[0] != B[0] || A[N - 1] != B[N - 1])
		flag2 = false;

	// 조건 3 : 모음 제거 시 문자열 동일?
	for (int i = 0; i < N; i++)
	{
		if (A[i] != 'a' && A[i] != 'e' && A[i] != 'i' && A[i] != 'o' && A[i] != 'u') // 모음이 아니라면? --> 자음
			tmpA += A[i];

		if (B[i] != 'a' && B[i] != 'e' && B[i] != 'i' && B[i] != 'o' && B[i] != 'u') // 모음이 아니라면? --> 자음
			tmpB += B[i];
	} if (tmpA != tmpB) flag3 = false;

	if (flag1 && flag2 && flag3)
		std::cout << "YES";
	else
		std::cout << "NO";

	return 0;
}