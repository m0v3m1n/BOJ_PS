#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::vector<std::string> V[2017];

    V[1967].push_back("DavidBowie");
    V[1969].push_back("SpaceOddity");
    V[1970].push_back("TheManWhoSoldTheWorld");
    V[1971].push_back("HunkyDory");
    V[1972].push_back("TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars");

    V[1973].push_back("AladdinSane");
    V[1973].push_back("PinUps");
    V[1974].push_back("DiamondDogs");
    V[1975].push_back("YoungAmericans");
    V[1976].push_back("StationToStation");

    V[1977].push_back("Low");
    V[1977].push_back("Heroes");
    V[1979].push_back("Lodger");
    V[1980].push_back("ScaryMonstersAndSuperCreeps");
    V[1983].push_back("LetsDance");

    V[1984].push_back("Tonight");
    V[1987].push_back("NeverLetMeDown");
    V[1993].push_back("BlackTieWhiteNoise");
    V[1995].push_back("1.Outside");
    V[1997].push_back("Earthling");

    V[1999].push_back("Hours");
    V[2002].push_back("Heathen");
    V[2003].push_back("Reality");
    V[2013].push_back("TheNextDay");
    V[2016].push_back("BlackStar");

    int S, s, e, sum; std::cin >> S;
    for (int i = 0; i < S; i++)
    {
        sum = 0;
        std::cin >> s >> e;

        for (int j = s; j <= e; j++)
            sum += V[j].size();

        std::cout << sum << '\n';

        for (int j = s; j <= e; j++)
            for (auto& K : V[j])
                std::cout << j << ' ' << K << '\n';
    }

    return 0;
}
