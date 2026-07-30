#include <bits/stdc++.h>
using namespace std;

/*
Problem: Given an array where prices[i] is the stock price on day i, find the
         maximum profit from buying on one day and selling on a later day.
         (Return 0 if no profit is possible.)
Approach: Single pass — track the minimum price seen so far (best day to have
          bought). At each day, check the profit if sold today (price - min_price)
          and keep the maximum. This is the same "running best state" pattern
          as Kadane's algorithm, just tracking min instead of resetting a sum.
Time: O(n)
Space: O(1)
*/

int maxProfit(vector<int>& prices) {
    int min_price = INT_MAX, max_profit = 0;
    for (int p : prices) {
        min_price = min(min_price, p);
        max_profit = max(max_profit, p - min_price);
    }
    return max_profit;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Prices: ";
    for (int p : prices) cout << p << " ";
    cout << "\n";

    cout << "Scanning once, tracking the lowest price seen so far,\n";
    cout << "and checking profit if we sold today at each step.\n\n";

    int result = maxProfit(prices);

    cout << "Maximum Profit: " << result << "\n";

    return 0;
}
