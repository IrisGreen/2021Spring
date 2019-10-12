class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.empty()) return 0;
		int buy=0, sell=0, total=0;
		int highest_price=0;
		bool buied = false;
		for (int i = 0; i < prices.size()-1; i++) {
			if (prices[i] < prices[i + 1]) {
				highest_price = prices[i + 1];
				if (!buied) {
					buy = prices[i];
					buied = true;
				}
			}
			else if(buied){
				sell = highest_price;
				total = total + sell - buy;
				buied = false;
			}

			if (buied && i + 2 == prices.size()) {
				sell = highest_price;
				total = total + sell - buy;
			}

		}
		return total;
	}
};