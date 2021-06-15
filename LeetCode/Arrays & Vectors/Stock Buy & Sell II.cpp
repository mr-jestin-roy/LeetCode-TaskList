// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

// O(N)  APPROACH

//valley and  peaks method
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int MaxProfit = 0, days = prices.size() - 1;
        int buy = prices[0];
        int sell = prices[0];
        int i = 0;
        while (i < days)
        {

            while (i < days && prices[i] >= prices[i + 1])
                i++; //find the valleys of prices
            buy = prices[i];

            while (i < days && prices[i] <= prices[i + 1])
                i++; //find the valleys of prices
            sell = prices[i];

            MaxProfit += sell - buy;
        }

        return MaxProfit;
    }
};

//sum of sub profit = MaxProfit
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int MaxProfit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i - 1])
                MaxProfit += prices[i] - prices[i - 1];
        }

        return MaxProfit;
    }
};
