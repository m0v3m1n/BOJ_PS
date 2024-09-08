#include <iostream>

int main()
{
	int sum = 0;
    int arr[1001] = {0, };
	std::pair<int, int> res; // (횟수,수)
    
	for (int i = 0; i < 10; i++)
	{
		int num = 0;
		std::cin >> num;
        
		sum += num;
		arr[num]++;
        
		if (res.first < arr[num])
		{
			res.first = arr[num];
			res.second = num;
		}
	}
    
	std::cout << sum / 10 << '\n' << res.second;
    return 0;
}