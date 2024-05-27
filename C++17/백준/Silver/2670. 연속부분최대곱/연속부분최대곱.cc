#include <iostream>

double arr[10001];

int main()
{
	int N; std::cin >> N;
	for (int i = 0; i < N; i++)
		std::cin >> arr[i];

	for (int i = 1; i < N; i++)
		if (arr[i] * arr[i - 1] > arr[i])
			arr[i] *= arr[i - 1];

	double max = 0;
	for (int i = 0; i < N; i++)
		if (max < arr[i])
			max = arr[i];

	printf("%.3lf", max);
	return 0;
}