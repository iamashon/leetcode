int maxProfit(int* prices, int pricesSize){
    int profit = 0;
    int find_small = prices[0];

    for (int i = 0; i < pricesSize; i++)
    {
        //find the buy in point first
        //if the value in the index is small than find_small
        //we buy in, and do the next run
        if (prices[i] < find_small)
        {
            find_small = prices[i];
            continue;
        }
        //if we don't buy in, than we check the profit
        int tmp_profit = prices[i] - find_small;
        if (tmp_profit > 0)
        {
            find_small = prices[i];
            profit += tmp_profit;
        }
    }
    return profit;
}
