#include <iostream>
#include <queue>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, K, beltLen, step = 0;
	std::cin >> N >> K;
	beltLen = 2 * N;

	bool* robotExist = new bool[2 * N];
	int* beltDurability = new int[beltLen];
	std::queue<int> robotNum;

	for (int i = 0; i < beltLen; i++)
	{
		robotExist[i] = false;
		std::cin >> beltDurability[i];
	}

	while (1)
	{
		step++;

		// --- 1단계 --> 벨트 회전
		int lastDur = beltDurability[beltLen - 1];
		for (int i = beltLen - 1; i > 0; i--)
			beltDurability[i] = beltDurability[i - 1];
		beltDurability[0] = lastDur;

		int qSize = robotNum.size();
		for (int i = 0; i < qSize; i++)
		{
			int curRobot = robotNum.front();
			robotNum.pop();
			robotExist[curRobot] = false; // 현재 위치의 로봇은 없는 걸로 처리

			if (curRobot + 1 != N - 1) // 다음 칸이 내리는 위치가 아니면 계속 이동.
				robotNum.push(curRobot + 1);
		}

		qSize = robotNum.size();
		for (int i = 0; i < qSize; i++)
		{
			int pos = robotNum.front();
			robotExist[pos] = true;
			robotNum.pop();
			robotNum.push(pos);
		}
		// --- 1단계 ---
		
		// 2단계 --> 로봇 이동
		qSize = robotNum.size();
		for (int i = 0; i < qSize; i++)
		{
			int curRobot = robotNum.front();
			robotNum.pop();

			if (beltDurability[curRobot + 1] && !robotExist[curRobot + 1]) // 내구도 1 이상이면서 앞칸에 로봇이 없다면
			{
				robotExist[curRobot] = false; // 현재 위치의 로봇은 없는 걸로 처리
				beltDurability[curRobot + 1]--; // 내리는 위치든 아니든 일단 내구도 감소

				if (curRobot + 1 != N - 1) // 다음 칸이 내리는 위치가 아니면
				{
					robotExist[curRobot + 1] = true;
					robotNum.push(curRobot + 1); // 로봇 이동 처리
				}
			}
			else // 내구도가 0이거나 앞에 로봇이 있다면
				robotNum.push(curRobot); // 자리 그대로 유지
		}
		// --- 2단계 ---

		// 3단계 --> 로봇 올리기
		if (beltDurability[0]) // 올리는 위치 내구도가 1 이상이면
		{
			beltDurability[0]--;
			robotExist[0] = true;
			robotNum.push(0);
		}
		// --- 3단계 ---

		// 4단계 --> 내구도 체크
		int checkingDur = 0;
		for (int i = 0; i < 2 * N; i++)
			if (beltDurability[i] == 0)
				checkingDur++;
		if (checkingDur >= K)
			break;
	}
	
	std::cout << step;

	delete[] robotExist;
	delete[] beltDurability;
	return 0;
}