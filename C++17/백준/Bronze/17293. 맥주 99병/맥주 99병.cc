#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;
    for (int i = N; i >= 0; i--)
        if (i > 2)
            std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << '\n' << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall." << "\n\n";
        else if (i == 2)
            std::cout << "2 bottles of beer on the wall, 2 bottles of beer." << '\n' << "Take one down and pass it around, 1 bottle of beer on the wall." << "\n\n";
        else if (i == 1)
            std::cout << "1 bottle of beer on the wall, 1 bottle of beer." << '\n' << "Take one down and pass it around, no more bottles of beer on the wall." << "\n\n";
        else
            if (N > 1)
                std::cout << "No more bottles of beer on the wall, no more bottles of beer." << '\n' << "Go to the store and buy some more, " << N << " bottles of beer on the wall.";
            else
                std::cout << "No more bottles of beer on the wall, no more bottles of beer." << '\n' << "Go to the store and buy some more, " << N << " bottle of beer on the wall.";


    return 0;
}