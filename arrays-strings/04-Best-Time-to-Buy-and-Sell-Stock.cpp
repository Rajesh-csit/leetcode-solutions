#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i = 1; i < prices.size(); i++)
    {
        if(prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if(profit > maxProfit)
        {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int main()
{
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    vector<int> prices2 = {7, 6, 4, 3, 1};

    cout << "Test 1: " << maxProfit(prices1) << endl;
    cout << "Test 2: " << maxProfit(prices2) << endl;

    return 0;
}