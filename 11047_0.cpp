#include <iostream>
#include <algorithm>
#include <vector>

int main ()
{
    int type;
    int amount;
    
    std::vector<int> money;
    int answer=0;

    std::cin >> type;
    std::cin >> amount;

    for (int i = 0; i< type ; i++)
    {
        int tmp;
        std::cin >> tmp; 
        money.push_back(tmp);
    }

    sort(money.begin(),money.end());
    
    for(int i = type-1; i >=0 ; i--)
    {
        answer += amount/money[i];
        amount = amount%money[i];
    }

    std::cout << answer;

    return 0;
}