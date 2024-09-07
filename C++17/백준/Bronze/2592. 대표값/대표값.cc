#include <iostream>

using namespace std;

int arr[1001];

int main(void)
{
	int sum = 0;
	pair<int, int> res; // (횟수,수)
	for (int i = 0; i < 10; i++)
	{
		int num = 0;
		cin >> num;
		sum += num;

		arr[num]++;
		if (res.first < arr[num])
		{
			res.first = arr[num];
			res.second = num;
		}
	}
	cout << sum / 10 << "\n" << res.second;
}